///////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor - see https://github.com/KeyWorksRW/wxUiEditor/
//
// Do not edit any code above the "End of generated code" comment block.
// Any changes before that block will be lost if it is re-generated!
///////////////////////////////////////////////////////////////////////////////

// clang-format off

#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/menu.h>

#include "mainframe.h"

#include <wx/mstream.h>  // memory stream classes

// Convert a data array into a wxImage
inline wxImage wxueImage(const unsigned char* data, size_t size_data)
{
    wxMemoryInputStream strm(data, size_data);
    wxImage image;
    image.LoadFile(strm);
    return image;
};

MainFrame::MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size,
    long style, const wxString& name) : wxFrame()
{
    if (!wxImage::FindHandler(wxBITMAP_TYPE_PNG))
        wxImage::AddHandler(new wxPNGHandler);

    if (!Create(parent, id, title, pos, size, style, name))
        return;

    auto* menubar = new wxMenuBar();

    auto* menuDialogs = new wxMenu();
    auto* menu_item_2 = new wxMenuItem(menuDialogs, wxID_ANY, "PythonDlg");
    {
        wxVector<wxBitmap> bitmaps;
        bitmaps.push_back(wxueImage(wxue_img::wxPython_png, sizeof(wxue_img::wxPython_png)));
        bitmaps.push_back(wxueImage(wxue_img::wxPython_1_5x_png, sizeof(wxue_img::wxPython_1_5x_png)));
        bitmaps.push_back(wxueImage(wxue_img::wxPython_2x_png, sizeof(wxue_img::wxPython_2x_png)));
        menu_item_2->SetBitmap(wxBitmapBundle::FromBitmaps(bitmaps));
    }

    menuDialogs->Append(menu_item_2);
    auto* menuItem_2 = new wxMenuItem(menuDialogs, wxID_ANY, "Common Controls...", "Common controls", wxITEM_NORMAL);
    menuItem_2->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_TIP, wxART_MENU));

    menuDialogs->Append(menuItem_2);
    auto* menuItem = new wxMenuItem(menuDialogs, wxID_ANY, "DlgMulitTest...", "Launch DlgMultiTest Dialog",
        wxITEM_NORMAL);
    menuItem->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_INFORMATION, wxART_MENU));

    menuDialogs->Append(menuItem);
    auto* menu_item = new wxMenuItem(menuDialogs, wxID_ANY, "Import Tests");
    menu_item->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_GOTO_LAST, wxART_MENU));

    menuDialogs->Append(menu_item);
    auto* menuItem1 = new wxMenuItem(menuDialogs, wxID_ANY, "Other Controls Dialog...");
    menuDialogs->Append(menuItem1);
    auto* menuItem2 = new wxMenuItem(menuDialogs, wxID_ANY, "Ribbon Dialog");
    menuDialogs->Append(menuItem2);
    auto* menuItem3 = new wxMenuItem(menuDialogs, wxID_ANY, "Wizard");
    menuDialogs->Append(menuItem3);

    auto* submenu = new wxMenu();

    auto* menu_choicebook = new wxMenuItem(submenu, wxID_ANY, "Choicebook");
    submenu->Append(menu_choicebook);
    auto* menu_listbook = new wxMenuItem(submenu, wxID_ANY, "Listbook");
    submenu->Append(menu_listbook);
    auto* menu_notebook = new wxMenuItem(submenu, wxID_ANY, "Notebook");
    submenu->Append(menu_notebook);
    auto* menu_toolbook = new wxMenuItem(submenu, wxID_ANY, "Toolbook");
    submenu->Append(menu_toolbook);
    auto* menu_treebook = new wxMenuItem(submenu, wxID_ANY, "Treebook");
    submenu->Append(menu_treebook);
    menuDialogs->AppendSubMenu(submenu, "Book Controls");
    menuDialogs->AppendSeparator();
    auto* menuItem4 = new wxMenuItem(menuDialogs, wxID_EXIT, "Exit");
    menuDialogs->Append(menuItem4);
    menubar->Append(menuDialogs, "&Dialogs");

    SetMenuBar(menubar);

    m_toolBar = CreateToolBar();
    auto* tool_4 = m_toolBar->AddTool(wxID_ANY, "PythonDlg",
        wxBitmapBundle::FromBitmap(wxueImage(wxue_img::wxPython_1_5x_png, sizeof(wxue_img::wxPython_1_5x_png))));

    auto* tool_2 = m_toolBar->AddTool(wxID_ANY, "Common Controls...",
        wxArtProvider::GetBitmapBundle(wxART_TIP, wxART_TOOLBAR));

    auto* tool = m_toolBar->AddTool(wxID_ANY, "DlgMulitTest...",
        wxArtProvider::GetBitmapBundle(wxART_INFORMATION, wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL,
        "Launch DlgMultiTest Dialog", "Launch DlgMultiTest Dialog");

    auto* tool_3 = m_toolBar->AddTool(wxID_ANY, "ImportTest",
        wxArtProvider::GetBitmapBundle(wxART_GOTO_LAST, wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, "Import Test",
        "Import Test");

    m_toolBar->Realize();

    m_statusBar = CreateStatusBar(2);
    {
        const int sb_field_widths[2] = {100, -1};
        m_statusBar->SetStatusWidths(2, sb_field_widths);
        const int sb_field_styles[2] = {100, -1};
        m_statusBar->SetStatusStyles(2, sb_field_styles);
    }


    Centre(wxBOTH);

    // Event handlers
    Bind(wxEVT_MENU, &MainFrame::OnPythonDlg, this, menu_item_2->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnCommonDialog, this, menuItem_2->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnMultiTestDialog, this, menuItem->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnImportTest, this, menu_item->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnOtherCtrls, this, menuItem1->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnRibbonDialog, this, menuItem2->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnWizard, this, menuItem3->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnChoicebook, this, menu_choicebook->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnListbook, this, menu_listbook->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnNotebook, this, menu_notebook->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnToolbook, this, menu_toolbook->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnTreebook, this, menu_treebook->GetId());
    Bind(wxEVT_MENU, &MainFrame::OnQuit, this, wxID_EXIT);
    Bind(wxEVT_TOOL, &MainFrame::OnPythonDlg, this, tool_4->GetId());
    Bind(wxEVT_TOOL, &MainFrame::OnCommonDialog, this, tool_2->GetId());
    Bind(wxEVT_TOOL, &MainFrame::OnMultiTestDialog, this, tool->GetId());
    Bind(wxEVT_TOOL, &MainFrame::OnImportTest, this, tool_3->GetId());
}

namespace wxue_img
{

    const unsigned char wxPython_1_5x_png[765] {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,24,0,0,0,24,8,6,0,0,0,224,119,61,248,0,0,0,9,112,72,89,115,0,
    0,11,19,0,0,11,19,1,0,154,156,24,0,0,2,175,73,68,65,84,72,199,173,148,207,75,20,97,24,199,63,235,15,72,232,176,120,
    73,34,112,64,236,34,184,211,161,147,208,142,23,59,116,104,173,91,160,174,167,244,176,176,155,122,118,61,151,76,32,
    100,208,97,86,250,3,236,108,135,119,21,42,61,57,43,8,97,44,51,94,180,32,118,71,148,78,198,219,97,94,183,113,118,
    198,85,235,11,47,207,59,239,251,252,224,253,206,243,124,219,137,134,158,78,167,15,53,77,43,118,118,118,30,213,106,
    181,77,254,35,210,185,92,206,145,10,150,101,73,96,62,176,254,9,58,224,8,33,164,97,24,210,178,44,41,165,148,186,174,
    75,33,132,20,66,72,192,188,78,98,141,1,182,121,130,100,14,105,190,51,207,30,32,13,195,144,245,122,93,150,203,229,
    134,5,138,151,77,220,161,236,4,147,232,164,252,143,194,90,129,163,133,35,0,92,215,197,243,60,132,16,244,246,246,
    94,147,150,12,14,31,144,124,12,172,87,127,87,62,159,111,188,72,127,170,75,50,56,138,206,150,72,168,2,171,76,160,
    113,51,198,171,10,188,81,251,69,101,103,129,10,137,86,5,218,129,239,124,37,201,125,12,122,98,188,186,129,135,106,
    5,241,153,125,192,190,168,64,155,178,43,88,216,44,71,120,44,199,68,142,0,144,189,12,69,103,44,232,91,240,250,89,
    216,35,79,138,59,36,233,1,110,53,221,217,236,50,10,184,64,90,157,86,0,239,92,129,170,127,57,220,23,221,126,89,64,
    227,1,105,52,12,198,2,55,59,192,12,11,128,195,24,37,0,182,40,177,199,100,184,77,13,160,28,243,74,63,112,3,141,13,
    52,78,16,76,55,249,84,216,81,180,189,32,203,20,30,80,0,104,171,250,237,182,15,60,110,197,231,208,16,230,118,9,180,
    27,234,96,16,152,99,158,219,24,84,72,240,146,34,39,192,0,6,160,93,117,94,230,133,64,74,137,44,86,67,51,147,66,54,
    152,200,224,176,200,149,166,29,64,228,114,56,245,186,95,192,249,133,212,55,3,5,222,18,212,40,193,42,141,97,236,184,
    32,105,146,126,76,186,200,50,14,221,199,144,76,42,225,234,130,100,48,178,15,128,123,234,107,152,34,146,20,26,33,
    183,243,232,199,228,57,89,82,170,91,174,2,217,60,104,97,152,204,168,228,17,88,57,4,251,184,233,56,21,53,120,109,
    49,210,109,168,103,251,58,52,195,122,173,134,235,121,224,157,66,185,238,219,80,250,36,115,88,12,34,27,122,21,83,
    192,151,238,243,82,97,44,45,81,178,109,40,236,65,233,32,20,177,166,104,25,81,98,248,3,216,103,29,112,59,90,242,57,
    13,76,33,200,160,21,126,131,125,16,225,179,6,252,164,192,172,234,164,83,108,118,201,2,110,34,82,26,242,152,60,34,
    121,97,225,42,112,2,124,194,101,149,209,56,85,141,211,243,44,227,88,12,170,95,23,196,123,101,191,176,194,55,92,37,
    49,229,150,106,26,1,131,187,76,208,21,234,140,10,195,106,103,7,85,51,14,127,0,212,225,25,244,190,141,109,213,0,0,
    0,0,73,69,78,68,174,66,96,130
    };

    const unsigned char wxPython_2x_png[251] {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,3,0,0,0,68,164,138,198,0,0,0,18,80,76,84,69,1,
    0,0,0,0,0,0,187,0,255,255,0,255,255,255,221,0,0,105,35,144,251,0,0,0,1,116,82,78,83,0,64,230,216,102,0,0,0,151,73,
    68,65,84,120,218,125,211,75,10,196,48,0,195,208,74,77,238,127,229,33,67,107,8,196,205,86,15,211,239,245,30,224,250,
    58,140,49,248,238,75,212,25,24,48,70,155,1,87,90,253,40,80,229,15,160,2,129,44,156,186,153,145,14,4,180,138,156,
    14,170,120,8,13,92,19,0,234,194,204,18,70,0,91,143,121,64,238,38,32,36,11,175,152,155,224,206,85,144,137,173,223,
    17,40,5,212,9,86,239,19,96,192,105,2,253,4,216,65,186,164,11,7,0,1,34,24,144,231,199,219,69,61,129,116,210,3,116,
    123,227,0,253,171,74,58,10,40,191,87,173,33,28,234,15,194,249,3,213,96,196,248,192,0,0,0,0,73,69,78,68,174,66,96,
    130
    };

    const unsigned char wxPython_png[399] {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,0,31,243,255,97,0,0,0,9,112,72,89,115,0,
    0,11,19,0,0,11,19,1,0,154,156,24,0,0,1,65,73,68,65,84,56,203,141,147,49,82,195,64,12,69,159,3,7,160,164,204,13,114,
    131,32,31,194,37,190,66,78,192,160,12,109,238,192,16,119,57,2,20,114,74,102,72,17,122,51,49,7,32,109,58,81,120,29,
    219,177,19,248,51,154,221,213,206,254,149,190,36,232,66,84,213,147,36,49,254,137,209,201,99,3,88,173,86,34,34,174,
    170,14,200,223,52,83,140,5,46,51,113,119,119,85,117,51,115,51,171,73,46,66,88,224,188,5,75,43,51,51,119,119,151,
    153,92,140,226,186,231,185,175,150,120,19,195,115,56,239,49,150,68,67,4,87,192,142,3,194,13,99,110,131,119,11,76,
    130,17,214,140,8,200,135,8,40,74,202,232,149,242,61,99,77,198,154,3,240,205,248,72,0,80,2,37,47,128,6,207,238,120,
    87,52,206,83,232,81,159,148,74,139,20,103,65,163,75,1,82,156,17,41,73,48,251,105,9,60,165,234,143,180,181,191,0,
    53,195,221,113,249,8,4,205,207,218,137,162,87,214,80,74,247,202,180,104,69,81,167,91,165,164,163,129,158,176,186,
    148,53,242,125,231,120,119,174,149,97,202,35,147,80,198,37,243,60,175,30,119,8,210,16,225,253,16,193,184,155,211,
    252,11,226,77,203,145,1,187,208,11,79,228,128,70,189,153,120,24,16,102,11,124,2,75,226,161,102,234,215,62,109,102,
    34,136,118,118,22,126,1,223,141,159,243,242,170,60,166,0,0,0,0,73,69,78,68,174,66,96,130
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

/////////////////// Non-generated Copyright/License Info ////////////////////
// Purpose:   Main Window
// Author:    Ralph Walden
// Copyright: Copyright (c) 2020-2023 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////

void MainFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
    // true forces the frame to close
    Close(true);
}
