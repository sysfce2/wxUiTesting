///////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor - see https://github.com/KeyWorksRW/wxUiEditor/
//
// Do not edit any code above the "End of generated code" comment block.
// Any changes before that block will be lost if it is re-generated!
///////////////////////////////////////////////////////////////////////////////

// clang-format off

#include "my_images.h"

#include <wx/mstream.h>  // memory stream classes

// Convert a data array into a wxImage
inline wxImage wxueImage(const unsigned char* data, size_t size_data)
{
    wxMemoryInputStream strm(data, size_data);
    wxImage image;
    image.LoadFile(strm);
    return image;
};

// Convert multiple bitmaps into a wxBitmapBundle
inline wxBitmapBundle wxueBundleBitmaps(const wxBitmap& bmp1, const wxBitmap& bmp2, const wxBitmap& bmp3)
{
    wxVector<wxBitmap> bitmaps;
    if (bmp1.IsOk())
        bitmaps.push_back(bmp1);
    if (bmp2.IsOk())
        bitmaps.push_back(bmp2);
    if (bmp3.IsOk())
        bitmaps.push_back(bmp3);
    return wxBitmapBundle::FromBitmaps(bitmaps);
};

namespace wxue_img
{
    wxBitmapBundle bundle_wiztest_png()
    {
        return wxBitmapBundle::FromBitmap(wxBitmap(wxueImage(wiztest_png, 1239)));
    }

    wxBitmapBundle bundle_wiztest2_png()
    {
        return wxBitmapBundle::FromBitmap(wxBitmap(wxueImage(wiztest2_png, 6797)));
    }

    const unsigned char wiztest2_png[6797] {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,116,0,0,1,4,8,2,0,0,0,118,173,135,5,0,0,0,3,115,66,73,84,8,8,
    8,219,225,79,224,0,0,0,9,112,72,89,115,0,0,10,240,0,0,10,240,1,66,172,52,152,0,0,26,48,73,68,65,84,120,218,237,93,
    95,112,84,85,154,255,250,230,48,36,36,17,9,52,176,238,64,194,20,226,154,160,226,159,88,206,142,53,128,59,101,237,
    18,107,106,106,102,164,182,156,117,193,215,232,3,85,107,233,238,67,6,168,236,206,195,56,15,121,88,121,216,135,21,
    106,86,107,92,117,212,213,196,127,163,4,101,166,20,112,68,33,81,196,29,187,85,54,145,38,32,221,73,58,64,250,158,
    125,184,205,205,237,115,207,255,115,238,159,206,112,139,138,177,211,183,251,220,223,253,221,223,247,251,190,243,
    221,115,51,24,99,0,0,128,203,255,173,110,151,46,193,130,5,115,191,248,63,37,183,217,89,64,8,102,103,197,239,116,
    49,227,245,138,218,46,149,10,52,52,64,165,194,251,46,254,95,1,192,117,193,113,192,117,21,198,227,98,112,50,148,33,
    185,21,112,60,88,131,200,122,8,6,161,244,126,241,95,23,194,26,196,151,15,43,117,76,222,63,167,65,118,151,74,165,
    138,26,7,59,62,172,30,154,44,100,89,227,241,7,67,12,201,63,13,142,15,171,15,37,1,171,135,166,255,147,69,222,32,73,
    125,88,169,204,245,198,196,130,213,63,6,130,41,225,93,130,128,54,52,48,1,245,97,245,168,205,199,148,64,54,56,36,
    127,60,84,64,137,49,123,191,100,92,23,83,69,128,15,101,88,1,88,80,202,43,128,211,64,185,244,76,20,128,255,30,31,
    83,130,173,30,154,84,17,224,41,0,109,23,39,172,179,146,200,18,84,229,35,43,163,0,74,84,149,81,0,14,85,89,108,165,
    194,20,164,42,75,1,168,180,200,184,46,14,7,43,62,178,4,85,57,129,43,78,170,6,37,130,250,78,22,85,107,84,178,118,
    72,44,170,74,198,183,204,133,11,88,18,211,52,43,128,183,113,96,5,96,6,43,234,120,84,21,128,186,139,163,17,172,76,
    20,64,35,88,201,123,0,226,127,131,241,74,35,88,73,42,0,103,151,26,230,214,139,2,240,47,127,73,187,42,169,0,26,241,
    205,31,33,19,92,91,89,128,18,172,194,141,15,61,71,85,249,10,192,26,191,42,172,196,240,28,25,187,202,185,252,237,
    42,0,199,174,6,223,25,179,93,149,81,0,98,144,164,44,164,86,1,252,247,80,223,28,131,93,149,167,42,177,101,46,92,192,
    134,10,192,82,177,100,21,64,222,0,8,97,213,75,82,48,190,44,11,38,10,64,77,88,169,187,104,36,172,44,95,21,84,3,234,
    144,136,193,176,144,242,21,140,163,0,124,153,10,99,234,215,106,50,83,83,184,142,18,86,190,93,77,80,1,194,101,197,
    106,85,172,142,18,86,126,176,50,73,88,85,131,21,149,170,254,199,122,67,66,122,84,165,94,116,225,243,44,131,41,241,
    182,224,251,9,97,37,226,85,80,232,131,30,192,201,48,21,128,5,43,107,23,33,172,225,171,129,206,92,42,85,89,62,134,
    95,93,21,70,173,224,159,168,6,128,99,173,88,66,207,175,174,242,131,21,231,130,99,41,64,16,89,226,180,85,127,98,112,
    162,176,171,134,10,144,54,187,42,163,0,225,241,56,25,154,230,10,39,2,148,6,68,76,22,72,42,64,152,119,44,88,249,84,
    101,37,99,170,211,25,146,84,37,213,70,59,88,105,204,175,104,40,64,13,41,42,70,213,85,14,85,37,21,64,72,85,194,105,
    56,20,139,26,129,93,213,86,0,121,187,42,84,0,109,187,74,249,88,6,85,231,126,122,241,63,40,172,26,193,42,60,178,160,
    31,212,86,128,112,176,178,165,0,194,216,160,167,0,212,247,59,50,176,214,209,252,74,108,193,42,168,0,4,45,252,247,
    35,43,118,117,197,242,12,104,109,99,227,152,154,236,89,183,171,156,163,16,218,85,2,205,57,76,49,51,68,205,105,174,
    21,187,170,183,81,21,32,10,187,106,162,0,97,76,137,171,173,230,100,224,185,163,64,225,1,133,21,83,154,209,187,84,
    128,221,165,84,178,98,81,149,165,0,170,84,13,43,128,16,211,240,41,167,187,5,19,187,106,74,222,20,216,213,160,2,176,
    124,149,112,60,225,211,236,88,177,171,129,209,239,196,120,167,42,178,137,219,85,31,86,250,240,184,227,161,51,195,
    11,221,86,236,170,173,45,157,118,85,30,86,15,83,31,16,199,138,93,181,130,105,106,237,170,140,2,16,69,59,210,138,
    81,163,1,81,30,14,186,84,86,114,37,25,193,188,109,213,183,197,30,238,243,28,142,52,88,5,237,106,56,219,22,90,61,
    206,225,59,225,104,16,4,148,67,85,139,106,32,185,201,40,0,39,88,9,21,128,51,55,193,162,42,11,132,138,27,96,110,112,
    122,149,85,94,97,101,86,74,27,198,10,111,206,100,140,138,214,97,187,202,82,0,161,213,147,164,106,197,133,6,167,138,
    108,197,5,196,177,1,65,170,106,231,96,22,9,27,181,93,229,43,0,255,74,245,96,245,57,75,145,133,240,7,89,247,3,86,
    182,136,236,42,95,1,56,176,250,84,229,105,46,191,123,29,0,48,227,159,42,56,154,251,69,108,87,169,10,192,87,213,138,
    203,51,63,142,12,85,221,74,42,168,154,148,93,165,194,26,70,150,56,217,24,3,2,16,116,174,209,165,46,147,97,132,160,
    221,81,32,27,105,176,82,18,86,42,172,84,5,207,100,192,225,20,173,169,211,104,73,109,84,246,177,178,0,141,172,196,
    84,1,26,160,50,75,198,88,68,181,86,225,98,143,118,154,96,11,89,37,15,192,82,0,43,30,32,236,76,48,6,183,82,115,49,
    123,40,207,205,161,81,231,123,92,156,22,206,198,147,176,134,169,90,113,121,23,144,175,0,68,108,240,62,28,81,147,
    19,78,169,148,21,254,41,250,123,57,121,245,178,190,53,29,70,78,153,37,172,49,216,213,32,154,62,85,137,160,51,23,
    108,131,62,151,165,0,182,56,43,44,6,202,35,27,86,0,165,202,164,208,174,10,61,0,0,84,102,201,112,30,164,42,241,249,
    72,166,104,157,134,200,38,169,0,134,9,171,48,141,14,42,128,240,195,17,136,110,10,136,192,231,102,244,96,21,246,125,
    70,20,172,100,20,128,122,46,17,191,119,213,22,172,216,76,100,146,181,171,196,81,112,62,156,248,147,35,244,146,118,
    235,0,134,110,33,17,187,74,120,0,22,172,204,98,185,66,217,45,147,209,6,72,119,239,132,237,170,140,2,80,55,7,212,
    103,88,181,47,106,243,128,150,136,93,165,223,44,200,249,222,203,6,9,201,55,3,40,71,162,218,131,57,113,2,75,206,175,
    200,80,85,198,3,216,178,171,242,84,37,166,160,144,240,24,12,93,42,167,182,34,51,191,66,45,89,153,43,64,101,22,50,
    25,155,10,64,191,201,47,159,199,54,239,95,97,223,253,21,254,10,22,172,134,118,149,95,151,96,29,130,188,7,144,135,
    200,137,167,33,208,164,100,165,87,93,133,218,38,223,176,99,241,15,129,175,170,124,97,101,65,84,237,21,83,218,71,
    187,33,80,166,8,96,215,174,250,194,202,82,0,61,170,202,192,74,250,220,116,182,3,153,216,85,140,201,58,128,182,93,
    149,132,40,220,44,138,64,212,183,194,167,170,76,176,74,73,117,213,150,7,144,172,202,186,149,218,169,117,25,88,163,
    152,95,121,244,145,30,61,43,242,175,191,24,228,36,172,22,131,149,42,172,158,40,33,73,3,144,72,59,144,94,102,156,
    32,85,73,230,218,85,0,51,187,250,51,21,96,159,212,179,86,209,193,26,62,124,4,105,106,7,50,175,186,197,169,0,172,
    251,143,253,93,16,198,10,10,0,145,205,175,120,219,224,224,125,0,208,211,243,148,69,88,99,160,42,107,66,26,177,144,
    210,160,170,118,194,106,66,216,24,236,42,11,86,225,66,68,148,170,24,127,134,85,105,93,13,85,187,170,90,249,141,199,
    174,130,250,189,187,222,27,16,245,238,47,34,5,80,45,89,105,207,176,170,70,176,221,187,196,30,174,239,231,131,49,
    40,0,245,178,70,242,194,26,105,194,26,233,22,131,2,80,213,18,209,21,83,49,88,25,150,172,228,183,193,65,133,55,247,
    244,240,20,64,222,174,242,247,98,97,133,253,194,77,88,1,236,38,172,255,242,207,61,144,154,205,214,170,72,84,9,14,
    134,13,20,133,2,112,154,1,82,8,171,208,174,114,118,97,193,58,39,11,74,9,171,73,176,98,93,211,138,172,30,84,221,207,
    110,176,226,100,219,4,14,142,234,253,43,170,193,42,241,198,105,43,171,34,177,168,26,110,28,8,226,128,12,19,86,249,
    118,160,154,144,212,67,39,221,61,247,60,21,45,208,138,10,192,9,86,50,87,173,195,207,172,172,116,175,167,66,109,21,
    87,70,100,73,37,139,170,84,122,33,128,248,218,129,244,10,93,86,216,106,98,87,229,169,74,0,232,196,211,14,148,6,230,
    202,36,172,84,5,160,198,43,186,18,214,46,228,141,76,60,128,252,252,138,100,248,15,91,136,190,159,15,122,89,192,47,
    254,205,130,83,86,90,44,131,229,1,42,140,169,226,224,93,187,222,79,148,84,239,170,106,230,26,169,195,213,86,0,206,
    50,190,216,101,220,65,25,93,51,64,34,86,76,114,185,28,165,96,197,185,115,15,187,128,221,80,109,1,162,108,7,178,199,
    187,30,19,229,181,18,172,168,247,237,99,23,50,78,21,214,26,43,22,117,67,160,69,222,105,71,51,249,96,69,183,152,236,
    123,119,125,64,177,91,19,241,28,73,27,16,222,12,219,129,146,117,11,86,20,192,131,50,248,147,216,29,85,84,30,172,
    22,188,142,52,231,87,122,140,130,190,198,222,193,86,81,77,187,234,208,21,128,160,106,248,67,16,203,114,83,239,9,
    18,98,23,137,224,26,27,134,76,134,9,43,75,1,88,43,78,19,176,242,235,127,40,156,116,87,102,171,241,74,30,86,201,169,
    192,30,3,100,31,121,116,208,110,201,74,222,174,18,193,42,8,43,83,78,221,64,201,145,154,5,68,218,187,90,71,118,85,
    70,1,168,128,100,142,188,143,89,170,10,102,205,0,134,243,43,194,189,228,169,10,236,154,61,111,229,14,87,246,67,88,
    152,56,122,30,64,168,0,21,233,53,121,65,125,33,111,213,234,42,159,98,84,95,21,68,182,82,171,3,242,166,8,89,87,0,
    139,237,64,105,80,0,206,73,18,98,133,210,220,14,100,24,172,168,176,178,18,214,112,22,160,164,0,212,215,81,154,219,
    129,44,87,87,29,113,194,234,159,27,170,157,80,197,138,185,244,85,26,218,129,44,38,172,124,170,86,92,113,146,166,
    145,133,162,116,42,128,106,117,85,82,1,84,237,170,182,90,86,143,90,137,170,218,30,32,186,25,86,147,218,10,71,94,
    245,110,76,37,23,132,23,122,0,48,238,94,151,183,171,50,194,202,73,88,89,193,74,62,97,53,161,106,152,70,40,58,5,176,
    30,172,130,88,28,122,183,95,47,199,219,112,75,95,69,177,46,42,163,0,84,26,161,58,181,171,54,83,106,45,88,101,186,
    191,80,253,218,85,0,0,216,168,2,227,129,232,20,32,220,81,87,93,250,202,228,86,171,52,216,213,248,169,202,127,94,
    200,220,26,55,74,229,149,152,219,129,132,213,85,0,232,235,251,62,0,244,247,191,109,130,172,6,85,195,176,138,11,55,
    182,30,148,106,165,29,136,63,191,98,75,112,249,108,165,30,47,249,147,95,184,169,175,132,149,56,91,122,235,230,216,
    85,0,118,177,28,167,203,174,202,204,175,232,69,48,0,248,232,168,216,195,117,118,245,169,42,0,245,156,57,66,5,208,
    171,174,10,21,128,95,93,21,206,176,198,182,17,253,159,74,69,6,84,95,213,213,240,135,8,53,161,175,79,1,202,254,126,
    58,91,245,12,6,162,8,182,138,2,68,87,93,125,255,72,63,36,183,205,61,121,75,29,214,192,114,131,138,86,44,206,118,
    32,153,77,59,160,137,145,85,79,49,152,178,16,179,93,21,42,64,245,162,102,93,191,210,178,80,251,49,82,87,131,107,
    169,252,232,36,110,87,57,237,64,233,217,116,202,143,46,215,138,197,96,87,165,154,1,188,144,212,223,207,8,65,111,
    71,138,169,9,187,17,103,33,181,24,236,106,122,111,7,116,45,192,141,132,25,116,130,237,64,122,105,66,68,200,106,176,
    24,65,138,219,129,234,157,197,72,181,29,200,74,51,128,57,172,125,108,11,209,217,213,231,5,146,79,70,251,163,192,
    84,30,110,36,67,85,25,5,224,216,85,237,102,0,243,156,53,65,193,5,234,234,76,81,216,85,189,118,160,40,82,128,56,89,
    140,194,118,53,61,237,64,246,128,232,79,132,197,200,220,174,70,215,14,148,194,32,166,4,55,2,173,249,21,161,93,149,
    84,128,20,122,3,91,86,204,117,47,223,112,146,206,118,32,74,29,80,29,157,254,254,88,89,28,100,36,138,223,174,106,
    52,3,216,194,34,82,193,13,51,18,201,4,171,164,218,129,140,34,17,192,218,117,125,182,212,83,70,49,200,103,246,185,
    236,199,36,90,76,88,245,218,129,82,82,31,144,84,128,96,76,242,127,201,12,189,138,131,200,178,42,214,21,75,3,18,42,
    0,185,210,185,213,239,181,181,11,149,142,116,183,64,45,176,70,103,87,229,219,129,146,194,78,67,1,152,133,155,120,
    236,170,173,102,128,100,169,202,82,0,122,225,134,95,91,177,98,87,181,219,129,98,83,79,37,15,32,255,225,40,210,132,
    213,80,1,18,20,92,150,43,213,41,150,87,236,30,94,253,43,64,152,164,26,223,139,172,103,86,117,29,172,194,69,84,163,
    190,133,168,237,170,164,181,74,80,112,85,21,64,167,111,33,58,187,170,221,14,164,116,120,19,133,1,189,92,163,117,
    241,14,141,96,37,243,39,52,239,21,32,230,50,99,16,10,164,92,94,75,123,176,186,67,5,207,119,237,15,21,211,100,65,
    18,214,244,219,85,43,132,213,163,42,221,138,205,39,5,216,177,227,14,0,24,24,120,55,190,114,15,163,187,14,205,87,
    187,26,135,224,202,60,202,32,229,10,16,181,50,88,161,42,213,140,34,37,187,154,230,132,213,223,184,29,187,20,173,
    40,79,137,61,220,194,166,29,124,5,160,22,163,81,218,236,170,73,194,26,221,166,180,122,129,159,143,204,245,138,213,
    163,2,80,171,171,194,118,232,29,59,20,96,29,24,80,73,71,107,19,104,36,124,216,70,122,18,214,243,231,6,32,209,141,
    247,64,61,90,93,2,177,96,77,103,117,53,89,100,57,10,64,157,245,65,86,132,53,158,234,106,245,162,102,93,191,82,1,
    109,78,27,66,251,73,149,165,88,84,165,86,124,106,159,205,147,250,234,170,204,102,253,230,30,25,161,7,218,172,37,
    74,39,85,5,176,122,33,105,96,128,17,130,222,141,8,83,86,115,23,171,16,140,92,139,253,50,9,205,175,196,39,187,161,
    185,9,127,144,84,172,81,106,21,64,56,191,34,159,38,88,207,226,88,87,21,105,197,82,107,87,83,219,0,73,85,0,42,133,
    81,122,230,87,116,169,202,115,17,158,42,47,104,172,254,241,210,204,128,57,121,133,113,140,194,220,196,21,32,206,
    214,104,213,59,134,57,204,0,246,132,38,74,185,2,88,171,136,87,172,217,53,142,224,50,10,55,169,108,7,178,155,92,49,
    114,14,11,130,75,45,244,56,25,182,230,166,77,1,18,143,111,124,5,8,215,207,200,21,241,146,181,171,81,195,106,116,
    251,149,72,1,168,15,65,68,241,80,213,178,247,24,24,208,187,162,189,69,212,6,6,108,158,30,206,99,80,17,164,184,29,
    40,186,43,218,22,172,196,47,82,62,55,37,237,64,212,35,25,48,64,25,103,118,80,87,43,100,61,208,128,67,85,153,199,
    160,34,235,10,96,185,46,129,173,145,87,38,97,213,86,0,234,134,180,21,192,138,93,85,154,97,109,88,176,131,63,17,192,
    26,42,118,141,96,213,120,102,183,224,49,137,81,219,85,237,102,0,37,74,234,101,86,124,170,130,198,146,0,137,219,85,
    189,25,86,86,209,90,178,182,98,75,1,4,11,101,38,104,87,229,23,219,226,91,61,126,117,85,38,94,169,42,0,223,129,160,
    4,237,170,134,2,0,200,82,53,234,96,37,243,132,18,228,202,173,88,23,143,2,80,75,1,26,243,43,170,10,192,183,171,242,
    199,69,60,78,11,37,101,87,169,10,32,127,245,40,41,128,161,93,149,164,106,120,209,119,148,66,5,80,13,86,9,42,0,255,
    249,4,40,254,96,5,210,237,64,212,81,197,111,87,229,169,90,147,13,186,181,1,45,30,170,202,183,3,165,196,174,42,193,
    138,93,9,183,144,78,5,72,196,174,202,40,0,208,214,251,70,174,27,161,2,104,216,85,239,247,187,127,48,162,87,67,24,
    122,181,203,186,93,149,167,106,205,94,174,149,190,5,171,118,213,244,1,27,182,21,128,248,69,18,86,0,104,112,12,251,
    22,12,20,64,46,137,90,174,2,236,233,136,236,170,36,172,254,141,190,13,14,204,86,96,182,162,251,152,196,168,19,86,
    43,53,198,56,21,192,195,180,226,2,198,80,113,171,179,203,40,58,5,48,177,171,254,214,217,153,205,100,96,100,164,96,
    136,105,212,10,224,81,53,147,169,121,36,53,50,84,0,13,187,170,228,1,172,244,131,70,167,0,254,255,82,159,158,46,120,
    76,34,103,33,115,150,93,101,89,125,165,212,192,202,198,127,250,166,144,170,216,165,47,164,228,175,82,69,44,131,25,
    124,162,163,91,225,91,177,52,217,85,126,4,11,110,63,236,17,123,184,23,94,234,82,178,171,50,10,64,133,200,232,81,
    6,38,9,171,27,203,66,186,124,206,202,99,42,84,0,42,68,40,54,187,170,231,13,132,29,115,93,93,10,176,142,140,104,82,
    149,80,127,22,85,201,12,45,106,187,202,194,244,111,239,150,202,193,34,189,193,65,210,174,170,194,234,231,135,142,
    228,163,162,129,253,44,13,141,96,149,108,227,151,100,176,242,20,192,67,54,28,172,88,119,70,6,127,65,230,10,96,82,
    6,100,93,211,138,149,133,46,205,253,12,130,149,76,49,19,65,114,243,43,137,111,74,10,64,135,136,91,202,64,73,205,
    175,204,29,67,103,87,38,195,136,53,160,144,155,105,35,75,120,128,48,85,221,138,102,49,211,161,90,125,206,18,155,
    242,175,83,231,2,194,206,36,234,123,242,168,176,82,87,83,11,62,205,137,67,85,226,39,231,120,197,139,19,71,55,191,
    162,151,38,68,18,226,176,132,163,87,47,102,34,14,85,227,159,95,137,219,54,200,217,85,237,185,119,114,130,146,31,
    148,162,155,97,149,113,17,158,42,63,247,66,245,143,63,249,209,72,164,176,154,207,189,35,66,106,249,217,106,20,51,
    172,73,17,86,85,1,148,138,153,24,7,192,141,191,25,192,122,102,165,86,48,171,88,86,128,240,5,1,212,254,220,4,219,
    129,116,145,29,209,64,214,174,2,132,159,111,132,195,203,13,74,46,117,14,182,219,129,18,217,172,180,137,132,171,186,
    115,224,242,45,87,12,13,129,230,41,128,45,76,77,20,128,128,149,12,104,66,68,236,182,3,9,234,128,210,176,142,168,
    91,134,40,20,128,250,58,210,14,86,96,60,195,154,160,26,68,68,85,138,91,136,71,1,168,237,64,35,6,24,61,253,108,151,
    76,29,32,162,96,197,23,92,23,179,101,33,206,118,160,152,19,86,91,193,138,57,30,204,145,133,184,218,129,158,123,161,
    75,114,218,42,206,132,85,91,1,40,53,19,76,155,67,75,73,59,16,128,102,117,53,17,5,32,96,13,184,5,172,128,93,156,237,
    64,118,171,171,145,42,64,16,83,255,117,164,109,244,228,21,0,172,54,3,216,117,135,182,20,128,10,55,74,86,1,252,255,
    181,59,191,98,215,174,202,40,0,149,197,40,89,5,224,207,90,215,145,2,132,255,132,53,30,101,160,209,189,158,136,2,
    68,29,172,88,127,162,215,22,34,165,170,80,1,236,206,175,216,167,234,101,236,248,84,165,212,22,162,86,0,237,118,160,
    248,237,170,182,2,208,193,181,174,0,22,219,129,82,98,87,89,112,99,44,248,112,148,172,93,77,91,194,170,68,85,225,
    57,67,87,236,170,21,5,160,126,47,178,152,176,90,111,7,74,137,93,149,161,42,245,123,145,79,210,43,9,171,12,172,74,
    151,8,226,220,23,124,197,174,202,43,0,245,117,84,191,118,213,68,1,204,131,149,12,220,200,110,194,58,15,236,170,158,
    2,80,119,65,74,193,74,91,1,234,218,174,106,179,24,177,158,89,95,247,118,53,94,5,160,142,28,89,12,86,144,154,249,
    21,187,118,85,85,232,125,122,33,22,172,26,118,117,62,41,128,158,208,19,244,66,49,116,175,215,81,194,170,173,0,36,
    189,48,163,182,144,182,132,53,113,187,42,163,0,115,99,8,96,130,232,135,81,39,118,213,68,1,76,4,151,66,47,106,223,
    130,82,176,50,81,128,58,178,171,50,10,64,80,149,58,84,68,176,181,254,18,214,232,237,42,29,86,217,190,5,149,146,213,
    159,161,93,149,81,0,234,80,17,203,3,92,177,171,74,10,64,125,29,93,177,171,66,187,10,234,67,173,222,45,205,167,42,
    107,25,147,201,201,194,228,100,129,24,89,112,112,254,109,222,193,251,189,137,119,146,11,188,224,234,63,202,218,47,
    151,143,112,98,98,244,208,123,187,131,159,121,232,189,221,103,39,70,89,223,75,29,33,107,168,16,190,53,18,207,93,
    233,146,67,13,34,230,128,244,205,150,193,63,253,246,153,123,14,189,247,24,49,50,254,49,248,175,112,176,11,175,167,
    227,253,201,255,150,175,199,15,159,250,106,56,8,223,169,175,134,167,203,5,226,123,95,127,109,171,255,1,35,199,246,
    8,79,51,133,94,162,211,76,89,250,39,4,154,35,124,71,152,197,71,63,216,115,254,124,110,124,236,48,107,5,29,140,225,
    76,129,194,38,22,118,28,106,16,167,170,88,204,185,236,219,118,253,55,223,121,231,227,254,139,7,223,121,144,195,98,
    242,94,222,90,74,202,12,149,115,125,43,63,202,96,122,186,240,251,119,118,223,124,107,239,31,14,238,10,171,216,196,
    153,209,247,143,60,54,62,126,120,122,170,176,237,129,227,141,77,217,175,199,15,127,254,167,161,171,22,119,116,172,
    217,210,216,148,5,128,82,49,255,241,200,222,150,214,142,53,223,217,178,176,49,11,0,159,140,238,43,22,115,107,215,
    221,219,214,214,89,42,230,63,30,221,123,195,141,189,199,62,218,147,205,118,119,172,217,130,49,76,151,11,159,140,
    238,155,157,157,186,48,83,88,190,162,155,248,222,242,244,233,163,31,252,10,0,214,173,219,214,180,40,11,0,127,250,
    223,103,58,215,247,126,122,98,95,177,152,3,128,247,143,236,110,109,237,88,119,221,182,103,159,94,255,147,173,199,
    143,125,248,171,21,215,108,4,128,175,190,24,90,183,110,123,227,162,118,199,129,153,114,225,211,19,251,92,119,106,
    205,119,182,183,94,213,126,244,253,221,203,178,221,51,51,133,153,153,194,218,107,183,53,54,102,229,67,145,95,104,
    116,100,168,26,60,219,71,63,216,3,0,27,110,238,253,246,170,77,95,126,113,128,80,128,231,159,235,89,177,178,251,254,
    109,199,111,218,208,123,225,226,244,254,55,31,122,253,181,7,60,178,191,254,234,3,0,80,58,159,255,205,147,183,95,
    188,52,245,213,151,195,251,223,124,16,0,14,188,245,208,7,127,124,236,226,197,169,215,134,182,22,207,231,139,197,
    220,199,35,123,159,250,245,250,139,23,167,222,250,221,3,197,98,126,186,92,120,241,185,205,223,156,27,153,157,157,
    250,236,228,51,11,22,52,7,233,12,0,7,223,126,168,92,62,125,246,236,200,75,47,110,46,79,23,124,182,122,231,210,219,
    26,27,179,24,195,185,115,35,111,190,177,245,212,169,225,55,94,185,103,255,27,91,199,254,111,248,224,59,15,122,200,
    190,242,242,230,241,177,225,226,249,220,91,111,244,0,192,216,216,240,239,94,239,25,31,27,30,31,27,62,114,232,17,
    201,235,155,88,128,4,41,121,128,137,137,209,63,28,220,181,116,89,215,255,188,176,245,171,47,135,199,199,15,95,243,
    151,27,131,37,180,217,217,233,15,143,238,153,158,42,220,184,161,23,0,62,60,250,248,63,252,227,200,233,211,135,203,
    211,167,111,185,245,97,192,176,255,173,7,111,184,169,247,246,59,118,122,239,47,21,243,159,157,124,230,190,251,143,
    55,53,101,15,190,3,159,157,124,102,197,202,238,82,41,247,253,77,143,175,191,161,247,235,241,195,165,98,174,88,204,
    173,88,217,189,233,174,39,0,0,161,230,112,160,223,120,215,19,171,87,111,1,128,225,253,15,228,243,67,235,174,219,
    230,189,190,106,213,150,85,171,182,252,241,200,174,91,110,221,25,84,213,187,255,238,229,255,252,143,204,125,247,
    159,254,230,220,232,254,55,183,186,46,124,116,244,177,165,203,186,239,220,248,196,248,216,129,82,41,7,24,178,217,
    238,108,182,251,150,238,95,206,204,20,94,122,126,189,112,17,79,76,51,163,14,231,132,132,35,192,241,99,123,91,91,
    59,186,214,111,191,235,111,30,255,209,143,7,191,200,15,7,171,104,24,195,223,255,236,80,103,231,246,220,231,67,47,
    62,127,207,196,196,104,83,211,242,87,134,182,158,57,51,242,211,173,195,107,175,189,215,197,144,251,124,240,134,27,
    123,125,21,43,22,115,109,75,59,61,90,33,212,124,241,226,20,118,161,169,105,121,215,250,94,95,19,139,197,92,75,107,
    7,176,55,132,170,92,110,105,233,40,149,114,212,193,251,200,110,254,193,127,123,210,217,216,152,93,190,114,99,185,
    124,26,0,10,133,195,107,215,109,15,250,42,132,154,189,19,217,216,152,245,222,195,161,42,118,233,65,210,225,40,64,
    56,2,140,28,219,247,221,239,237,186,245,182,135,151,46,235,92,210,214,245,245,248,225,112,176,186,249,182,135,183,
    222,247,222,215,227,135,154,26,179,151,102,167,126,252,211,253,127,125,231,47,155,91,219,15,236,127,168,84,204,55,
    53,45,47,151,11,94,112,40,22,243,173,173,29,197,243,185,169,233,2,198,240,69,126,104,197,138,110,0,184,122,73,103,
    240,171,91,90,58,190,200,15,249,1,45,28,190,188,109,166,92,56,121,98,239,234,213,91,194,118,181,38,5,192,224,98,
    88,178,164,235,220,185,106,200,157,154,204,47,88,208,60,89,202,1,192,194,133,217,139,23,10,16,120,132,247,153,194,
    225,86,218,169,13,47,65,68,156,75,55,220,66,202,73,28,39,206,140,34,180,168,107,125,245,162,91,188,184,125,241,226,
    142,179,19,163,87,183,117,250,215,248,111,158,188,189,109,105,103,241,124,110,237,181,247,94,221,214,121,253,245,
    219,255,107,223,122,239,149,69,205,203,17,90,180,113,243,191,63,255,236,230,182,165,157,103,39,70,111,184,169,247,
    214,219,118,118,172,233,121,238,233,219,1,32,187,162,123,117,251,150,83,167,14,16,195,184,238,175,182,141,142,236,
    121,234,215,107,16,106,46,77,230,86,174,220,68,140,237,229,23,55,253,197,53,155,38,75,185,85,171,123,150,101,187,
    1,96,201,146,46,210,123,212,194,253,173,133,217,114,185,176,248,106,88,177,114,83,169,148,187,113,195,206,161,151,
    110,63,249,233,222,139,23,10,51,51,133,82,49,239,100,224,196,39,123,198,198,134,139,231,71,191,251,189,39,252,194,
    11,75,1,168,89,88,230,225,71,177,197,132,181,92,46,156,157,24,93,216,148,109,11,32,94,44,230,174,186,170,163,181,
    181,221,219,215,123,79,235,85,29,173,173,237,222,71,157,59,59,10,0,75,218,58,189,55,156,59,59,186,164,173,19,99,
    40,77,230,91,91,218,189,207,57,123,118,180,92,46,92,115,205,198,82,41,223,114,249,69,0,152,156,204,99,23,74,147,
    185,214,150,142,69,45,237,100,134,137,97,102,166,240,173,133,213,200,54,51,83,104,108,204,122,62,97,89,182,187,177,
    49,91,42,229,155,91,218,189,63,157,255,102,116,241,213,157,179,151,166,23,53,183,31,255,112,119,185,92,104,239,184,
    183,185,165,195,123,131,143,169,63,5,46,44,150,103,254,233,17,156,134,234,170,197,132,85,178,46,193,175,71,127,116,
    116,55,0,220,184,97,39,208,102,199,169,85,93,226,195,231,230,208,234,189,186,74,61,60,201,161,210,253,191,103,75,
    68,10,64,173,233,248,175,163,121,50,191,162,53,84,78,22,112,125,231,195,170,223,75,86,189,189,98,121,250,171,171,
    170,243,43,74,10,32,180,171,194,239,37,171,222,126,61,87,150,173,73,180,3,217,173,174,202,36,172,218,10,16,126,125,
    238,185,191,243,108,126,69,155,170,50,85,93,121,184,209,188,156,95,177,168,0,84,74,10,225,190,188,150,99,253,204,
    175,216,10,86,26,223,27,14,86,124,88,105,133,155,249,50,191,162,10,171,70,176,34,134,202,174,231,166,181,29,200,
    74,176,50,183,171,84,170,206,33,203,91,203,17,167,201,174,38,165,0,92,187,42,163,0,212,241,160,52,183,3,165,68,1,
    136,93,228,103,109,80,82,9,107,29,217,85,121,170,134,52,183,126,236,170,9,172,38,118,85,251,97,124,232,138,93,181,
    11,107,141,21,11,214,22,230,119,194,106,55,88,201,252,9,241,49,170,47,187,42,84,0,139,193,74,102,168,104,62,217,
    85,243,132,213,22,172,213,244,247,138,93,181,249,64,222,176,21,51,81,128,58,178,171,50,9,171,33,85,41,178,240,231,
    99,87,237,98,39,78,127,137,174,191,148,219,85,61,5,48,180,171,218,187,160,232,20,32,138,96,21,117,194,106,23,110,
    116,197,174,70,1,183,119,20,255,15,223,34,26,101,41,220,101,91,0,0,0,0,73,69,78,68,174,66,96,130
    };

    const unsigned char wiztest_png[1239] {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,116,0,0,1,4,8,2,0,0,0,118,173,135,5,0,0,0,3,115,66,73,84,8,8,
    8,219,225,79,224,0,0,0,9,112,72,89,115,0,0,10,240,0,0,10,240,1,66,172,52,152,0,0,4,122,73,68,65,84,120,218,237,219,
    193,173,211,74,24,197,241,231,39,196,211,93,100,19,9,154,72,3,119,5,5,164,3,104,34,13,68,128,220,128,155,128,14,
    82,192,99,69,3,105,2,164,108,178,184,130,141,89,4,34,177,24,100,207,36,227,241,248,119,214,182,239,245,209,223,231,
    124,95,100,55,125,223,255,67,247,209,191,44,96,46,115,137,185,204,101,46,49,151,185,204,37,230,50,151,185,148,160,
    103,233,151,104,154,38,238,196,234,127,51,66,110,217,228,254,214,251,187,29,140,92,186,171,185,125,255,174,239,223,
    241,20,185,204,85,104,209,13,54,100,134,155,245,184,134,220,26,200,189,96,56,106,55,89,134,185,77,5,55,42,22,150,
    27,11,161,103,122,36,213,125,228,121,200,165,132,66,187,84,82,32,130,155,230,3,67,145,155,73,205,144,41,253,50,45,
    244,1,114,155,113,220,15,205,220,203,31,177,68,208,221,150,136,62,60,66,92,185,91,230,164,140,92,230,250,109,97,
    96,133,34,151,152,91,85,44,164,149,254,210,70,6,228,150,65,110,10,118,203,252,32,11,185,83,255,182,64,200,101,46,
    115,137,185,149,45,17,119,208,118,187,141,59,241,112,56,32,23,185,211,235,237,152,131,63,202,92,133,86,140,14,135,
    55,135,195,27,230,18,115,21,90,116,131,13,153,225,166,29,215,144,139,220,95,24,142,218,77,150,97,238,182,132,27,
    21,11,98,33,246,161,14,113,29,121,153,45,114,145,155,185,146,2,17,188,221,126,146,185,52,191,81,236,99,125,230,34,
    183,106,114,15,225,17,226,186,188,206,116,82,70,46,115,197,66,22,109,145,75,204,173,42,22,210,74,127,118,35,3,114,
    171,32,55,5,187,242,95,174,65,110,110,121,249,25,185,204,37,230,50,151,185,196,92,230,50,151,10,93,127,111,168,182,
    109,227,78,220,239,247,200,69,238,244,122,61,230,224,255,101,174,66,43,70,251,253,171,253,254,21,115,145,75,10,45,
    186,193,134,204,112,55,28,215,144,139,220,248,198,27,181,155,44,195,220,246,230,55,170,208,196,66,198,135,58,196,
    117,228,101,90,228,34,55,115,37,5,34,184,109,63,203,92,228,86,177,38,32,23,185,115,155,34,218,63,151,215,18,38,101,
    228,50,87,44,148,170,22,185,98,129,170,138,133,180,210,159,118,100,64,238,82,201,77,193,46,243,203,53,200,205,45,
    31,156,32,151,185,196,92,230,50,151,152,203,92,27,90,177,234,186,46,238,196,221,110,135,92,228,78,175,199,49,7,127,
    145,185,10,173,24,237,118,143,187,221,35,115,145,75,10,45,186,193,134,204,112,209,227,26,114,145,123,203,198,27,
    181,155,44,195,220,46,241,70,21,154,88,152,244,161,14,113,29,121,153,14,185,200,205,92,73,129,8,238,186,47,229,252,
    167,200,69,110,194,154,128,92,228,206,109,138,232,254,92,94,243,79,202,200,101,174,88,152,143,58,228,138,5,170,42,
    22,210,74,63,231,200,128,92,228,222,162,137,238,250,114,13,114,115,203,55,17,200,101,46,49,151,185,204,37,230,50,
    151,185,196,92,230,46,64,37,254,112,115,60,30,227,78,220,108,54,200,69,238,244,122,57,230,224,175,50,87,161,21,163,
    205,230,197,102,243,130,185,196,92,133,22,221,96,67,102,184,156,227,26,114,145,27,196,112,212,110,178,12,115,143,
    249,111,84,161,137,133,219,61,212,33,174,35,47,115,68,46,114,51,87,82,32,130,143,199,111,50,151,230,55,138,125,157,
    187,185,200,93,24,185,155,240,8,113,93,94,103,49,41,35,151,185,98,97,34,29,145,43,22,168,170,88,72,43,253,194,71,
    6,228,86,74,110,10,118,165,189,92,131,220,220,242,169,20,114,153,75,204,101,46,115,137,185,204,181,161,221,74,167,
    211,41,238,196,245,122,141,92,154,142,220,223,122,24,115,240,147,204,165,98,204,93,175,31,214,235,7,230,18,115,21,
    90,116,131,13,153,225,202,25,215,144,187,80,114,47,24,142,218,77,150,97,238,169,180,27,21,11,98,97,204,67,29,226,
    58,242,50,39,228,82,182,66,187,84,82,32,130,79,167,167,138,205,69,110,181,163,216,83,221,230,34,183,58,114,215,225,
    17,226,186,188,86,48,41,35,151,185,98,225,110,58,33,151,152,91,85,44,164,149,254,172,71,6,228,206,150,220,20,236,
    230,245,114,13,114,115,203,55,17,200,101,46,49,151,185,70,177,251,233,124,62,199,157,184,90,173,144,139,220,233,
    245,223,152,131,191,203,92,133,86,140,86,171,231,171,213,115,230,18,115,21,90,116,131,13,153,225,178,141,107,200,
    69,238,223,48,28,181,155,44,195,220,115,230,27,85,104,98,225,166,15,117,136,235,200,203,156,145,139,220,204,149,
    20,136,224,243,249,135,204,165,249,141,98,223,103,109,46,114,151,71,238,42,60,66,92,151,215,242,39,101,228,50,87,
    44,76,167,51,114,197,2,85,21,11,105,165,95,242,200,128,220,122,201,77,193,174,168,151,107,144,155,91,94,126,70,46,
    115,137,185,204,173,66,63,1,161,17,241,226,55,60,93,211,0,0,0,0,73,69,78,68,174,66,96,130
    };

}

// ************* End of generated code ***********
// DO NOT EDIT THIS COMMENT BLOCK!
//
// Code below this comment block will be preserved
// if the code for this class is re-generated.
//
// clang-format on
// ***********************************************
