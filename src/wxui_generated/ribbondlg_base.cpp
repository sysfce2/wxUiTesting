////////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor -- see https://github.com/KeyWorksRW/wxUiEditor/
//
// DO NOT EDIT THIS FILE! Your changes will be lost if it is re-generated!
////////////////////////////////////////////////////////////////////////////////

#include <wx/artprov.h>
#include <wx/colour.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/panel.h>
#include <wx/settings.h>
#include <wx/sizer.h>

#include "ribbondlg_base.h"

#include "../art/english.xpm"
#include "../art/french.xpm"

bool RibbonDlgBase::Create(wxWindow* parent, wxWindowID id, const wxString& title,
        const wxPoint& pos, const wxSize& size, long style, const wxString &name)
{
    if (!wxDialog::Create(parent, id, title, pos, size, style, name))
        return false;

    auto parent_sizer = new wxBoxSizer(wxVERTICAL);

    m_rbnBar = new wxRibbonBar(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_SHOW_PAGE_LABELS|wxRIBBON_BAR_SHOW_PAGE_ICONS|wxRIBBON_BAR_FLOW_HORIZONTAL);
    m_rbnBar->SetArtProvider(new wxRibbonAUIArtProvider);
    parent_sizer->Add(m_rbnBar, wxSizerFlags().Expand().Border(wxALL));

    auto rbnPage = new wxRibbonPage(m_rbnBar, wxID_ANY, "First");
    m_rbnBar->SetActivePage(rbnPage);

    auto rbnPanel = new wxRibbonPanel(rbnPage, wxID_ANY, "English",
    wxImage(english_xpm));

    auto first_parent_sizer = new wxBoxSizer(wxVERTICAL);

    auto box_sizer = new wxBoxSizer(wxVERTICAL);
    first_parent_sizer->Add(box_sizer, wxSizerFlags(1).Expand().Border(wxALL));

    m_staticText = new wxStaticText(rbnPanel, wxID_ANY, "This is a sentence in English.");
    m_staticText->Wrap(200);
    box_sizer->Add(m_staticText, wxSizerFlags().Border(wxALL));

    m_btn = new wxButton(rbnPanel, wxID_ANY, "Switch");
    box_sizer->Add(m_btn, wxSizerFlags().Center().Border(wxALL));

    rbnPanel->SetSizerAndFit(first_parent_sizer);

    auto rbnPanel_2 = new wxRibbonPanel(rbnPage, wxID_ANY, "French",
    wxImage(french_xpm));
    rbnPanel_2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    auto first_parent_sizer_2 = new wxBoxSizer(wxVERTICAL);

    auto box_sizer_2 = new wxBoxSizer(wxVERTICAL);
    first_parent_sizer_2->Add(box_sizer_2, wxSizerFlags(1).Expand().Border(wxALL));

    m_staticText_2 = new wxStaticText(rbnPanel_2, wxID_ANY, wxString::FromUTF8("Ceci est une phrase en français."));
    m_staticText_2->Wrap(200);
    box_sizer_2->Add(m_staticText_2, wxSizerFlags().Border(wxALL));

    m_btn_2 = new wxButton(rbnPanel_2, wxID_ANY, "Switch");
    box_sizer_2->Add(m_btn_2, wxSizerFlags().Center().Border(wxALL));

    rbnPanel_2->SetSizerAndFit(first_parent_sizer_2);

    auto ribbonPage2 = new wxRibbonPage(m_rbnBar, wxID_ANY, "Second");

    auto ribbonPanel2 = new wxRibbonPanel(ribbonPage2, wxID_ANY, "Button Panel",
        wxNullBitmap, wxDefaultPosition, wxDefaultSize,
        wxRIBBON_PANEL_DEFAULT_STYLE|wxRIBBON_PANEL_STRETCH);

    auto rbnBtnBar = new wxRibbonButtonBar(ribbonPanel2, wxID_ANY);

    rbnBtnBar->AddButton(wxID_ANY, "Forward", wxArtProvider::GetBitmap(wxART_GO_FORWARD, wxART_OTHER), wxEmptyString, wxRIBBON_BUTTON_NORMAL);

    rbnBtnBar->AddButton(wxID_ANY, "Backward", wxArtProvider::GetBitmap(wxART_GO_BACK, wxART_OTHER), wxEmptyString, wxRIBBON_BUTTON_NORMAL);

    auto ribbonPage_2 = new wxRibbonPage(m_rbnBar, wxID_ANY, "Third");

    auto ribbonPanel_2 = new wxRibbonPanel(ribbonPage_2, wxID_ANY, "Tool Panel");

    auto rbnToolBar = new wxRibbonToolBar(ribbonPanel_2, wxID_ANY);
    {
        rbnToolBar->AddTool(wxID_FILE1, wxArtProvider::GetBitmap(wxART_GOTO_FIRST, wxART_TOOLBAR), wxEmptyString, wxRIBBON_BUTTON_NORMAL);
        rbnToolBar->AddTool(wxID_FILE9, wxArtProvider::GetBitmap(wxART_GOTO_LAST, wxART_TOOLBAR), wxEmptyString, wxRIBBON_BUTTON_NORMAL);
    }
    rbnToolBar->Realize();
    m_rbnBar->Realize();

    auto box_sizer_3 = new wxBoxSizer(wxVERTICAL);
    parent_sizer->Add(box_sizer_3, wxSizerFlags().Expand().Border(wxALL));

    m_scintilla = new wxStyledTextCtrl(this, wxID_ANY);
    {
        m_scintilla->SetLexer(wxSTC_LEX_CPP);
        m_scintilla->SetEOLMode(wxSTC_EOL_LF);
        // Sets text margin scaled appropriately for the current DPI on Windows,
        // 5 on wxGTK or wxOSX
        m_scintilla->SetMarginLeft(wxSizerFlags::GetDefaultBorder());
        m_scintilla->SetMarginRight(wxSizerFlags::GetDefaultBorder());
        m_scintilla->SetMarginWidth(1, 0);  // Remove default margin
        m_scintilla->SetBackSpaceUnIndents(true);
    }
    box_sizer_3->Add(m_scintilla, wxSizerFlags().Expand().Border(wxALL));

    auto stdBtn = CreateStdDialogButtonSizer(wxOK|wxCANCEL);
    parent_sizer->Add(CreateSeparatedSizer(stdBtn), wxSizerFlags().Expand().Border(wxALL));

    SetSizerAndFit(parent_sizer);
    Centre(wxBOTH);

    // Event handlers
    m_btn->Bind(wxEVT_BUTTON,
        [this](wxCommandEvent&)
        {
            m_scintilla->ClearAll();  m_scintilla->AddTextRaw("This is a sentence in English.");
        } );
    m_btn_2->Bind(wxEVT_BUTTON,
        [this](wxCommandEvent&)
        {
            m_scintilla->ClearAll();  m_scintilla->AddTextRaw("Ceci est une phrase en français.");
        } );

    return true;
}
