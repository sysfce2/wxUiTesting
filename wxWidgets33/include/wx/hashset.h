/////////////////////////////////////////////////////////////////////////////
// Name:        wx/hashset.h
// Purpose:     wxHashSet class
// Author:      Mattia Barbon
// Created:     11/08/2003
// Copyright:   (c) Mattia Barbon
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_HASHSET_H_
#define _WX_HASHSET_H_

#include "wx/hashmap.h"

// see comment in wx/hashmap.h which also applies to different standard hash
// set classes

#if wxUSE_STD_CONTAINERS

#include <unordered_set>

// we need to define the class declared by _WX_DECLARE_HASH_SET as a class and
// not a typedef to allow forward declaring it
#define _WX_DECLARE_HASH_SET_IMPL( KEY_T, HASH_T, KEY_EQ_T, PTROP, CLASSNAME, CLASSEXP )  \
CLASSEXP CLASSNAME                                                            \
    : public std::unordered_set< KEY_T, HASH_T, KEY_EQ_T >                    \
{                                                                             \
public:                                                                       \
    explicit CLASSNAME(size_type n = 3,                                       \
                       const hasher& h = hasher(),                            \
                       const key_equal& ke = key_equal(),                     \
                       const allocator_type& a = allocator_type())            \
        : std::unordered_set< KEY_T, HASH_T, KEY_EQ_T >(n, h, ke, a)          \
    {}                                                                        \
    template <class InputIterator>                                            \
    CLASSNAME(InputIterator f, InputIterator l,                               \
              const hasher& h = hasher(),                                     \
              const key_equal& ke = key_equal(),                              \
              const allocator_type& a = allocator_type())                     \
        : std::unordered_set< KEY_T, HASH_T, KEY_EQ_T >(f, l, h, ke, a)       \
    {}                                                                        \
    CLASSNAME(const std::unordered_set< KEY_T, HASH_T, KEY_EQ_T >& s)         \
        : std::unordered_set< KEY_T, HASH_T, KEY_EQ_T >(s)                    \
    {}                                                                        \
}

#define _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, PTROP, CLASSNAME, CLASSEXP )   \
    _WX_DECLARE_HASH_SET_IMPL(                                                \
        KEY_T,                                                                \
        HASH_T,                                                               \
        KEY_EQ_T,                                                             \
        PTROP,                                                                \
        CLASSNAME,                                                            \
        CLASSEXP)

#else // no appropriate STL class, use our own implementation

// this is a complex way of defining an easily inlineable identity function...
#define _WX_DECLARE_HASH_SET_KEY_EX( KEY_T, CLASSNAME, CLASSEXP )            \
CLASSEXP CLASSNAME                                                           \
{                                                                            \
    typedef KEY_T key_type;                                                  \
    typedef const key_type const_key_type;                                   \
    typedef const_key_type& const_key_reference;                             \
public:                                                                      \
    CLASSNAME() { }                                                          \
    const_key_reference operator()( const_key_reference key ) const          \
        { return key; }                                                      \
};

#define _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, PTROP, CLASSNAME, CLASSEXP )\
_WX_DECLARE_HASH_SET_KEY_EX( KEY_T, CLASSNAME##_wxImplementation_KeyEx, CLASSEXP ) \
_WX_DECLARE_HASHTABLE( KEY_T, KEY_T, HASH_T,                                 \
    CLASSNAME##_wxImplementation_KeyEx, KEY_EQ_T, PTROP,                     \
    CLASSNAME##_wxImplementation_HashTable, CLASSEXP, grow_lf70, never_shrink ) \
CLASSEXP CLASSNAME:public CLASSNAME##_wxImplementation_HashTable             \
{                                                                            \
public:                                                                      \
    _WX_DECLARE_PAIR( iterator, bool, Insert_Result, CLASSEXP )              \
                                                                             \
    explicit CLASSNAME( size_type hint = 100, hasher hf = hasher(),          \
                        key_equal eq = key_equal() )                         \
        : CLASSNAME##_wxImplementation_HashTable( hint, hf, eq,              \
                      CLASSNAME##_wxImplementation_KeyEx() ) {}              \
                                                                             \
    Insert_Result insert( const key_type& key )                              \
    {                                                                        \
        bool created;                                                        \
        Node *node = GetOrCreateNode( key, created );                        \
        return Insert_Result( iterator( node, this ), created );             \
    }                                                                        \
                                                                             \
    const_iterator find( const const_key_type& key ) const                   \
    {                                                                        \
        return const_iterator( GetNode( key ), this );                       \
    }                                                                        \
                                                                             \
    iterator find( const const_key_type& key )                               \
    {                                                                        \
        return iterator( GetNode( key ), this );                             \
    }                                                                        \
                                                                             \
    size_type erase( const key_type& k )                                     \
        { return CLASSNAME##_wxImplementation_HashTable::erase( k ); }       \
    void erase( const iterator& it ) { erase( *it ); }                       \
    void erase( const const_iterator& it ) { erase( *it ); }                 \
                                                                             \
    /* count() == 0 | 1 */                                                   \
    size_type count( const const_key_type& key ) const                       \
        { return GetNode( key ) ? 1 : 0; }                                   \
}

#endif // STL/wx implementations


// these macros are to be used in the user code
#define WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, CLASSNAME) \
    _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, wxPTROP_NORMAL, CLASSNAME, class )

// and these do exactly the same thing but should be used inside the
// library
// note: DECL is not used since the class is inline
#define WX_DECLARE_HASH_SET_WITH_DECL( KEY_T, HASH_T, KEY_EQ_T, CLASSNAME, DECL) \
    _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, wxPTROP_NORMAL, CLASSNAME, class )

#define WX_DECLARE_EXPORTED_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, CLASSNAME) \
    WX_DECLARE_HASH_SET_WITH_DECL( KEY_T, HASH_T, KEY_EQ_T, \
                                   CLASSNAME, class WXDLLIMPEXP_CORE )

// Finally these versions allow to define hash sets of non-objects (including
// pointers, hence the confusing but wxArray-compatible name) without
// operator->() which can't be used for them. This is mostly used inside the
// library itself to avoid warnings when using such hash sets with some less
// common compilers (notably Sun CC).
#define WX_DECLARE_HASH_SET_PTR( KEY_T, HASH_T, KEY_EQ_T, CLASSNAME) \
    _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, wxPTROP_NOP, CLASSNAME, class )
// note: DECL is not used since the class is inline
#define WX_DECLARE_HASH_SET_WITH_DECL_PTR( KEY_T, HASH_T, KEY_EQ_T, CLASSNAME, DECL) \
    _WX_DECLARE_HASH_SET( KEY_T, HASH_T, KEY_EQ_T, wxPTROP_NOP, CLASSNAME, class )

// delete all hash elements
//
// NB: the class declaration of the hash elements must be visible from the
//     place where you use this macro, otherwise the proper destructor may not
//     be called (a decent compiler should give a warning about it, but don't
//     count on it)!
#define WX_CLEAR_HASH_SET(type, hashset)                                     \
    {                                                                        \
        type::iterator it, en;                                               \
        for( it = (hashset).begin(), en = (hashset).end(); it != en; ++it )  \
            delete *it;                                                      \
        (hashset).clear();                                                   \
    }

#endif // _WX_HASHSET_H_