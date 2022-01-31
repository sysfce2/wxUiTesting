//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: Crafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "crafter_base.hpp"


// Declare the bitmap loading function
extern void wxCBB93InitBitmapResources();

static bool bBitmapLoaded = false;


CrafterBase::CrafterBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCBB93InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* parent_sizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(parent_sizer);
    
    m_auinotebook1 = new wxAuiNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxAUI_NB_DEFAULT_STYLE);
    m_auinotebook1->SetName(wxT("m_auinotebook1"));
    
    parent_sizer->Add(m_auinotebook1, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_panel1 = new wxPanel(m_auinotebook1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_auinotebook1, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_auinotebook1->AddPage(m_panel1, _("Common"), false);
    
    wxGridBagSizer* parent_sizer1 = new wxGridBagSizer(0, 0);
    m_panel1->SetSizer(parent_sizer1);
    
    m_infoCtrl1 = new wxInfoBar(m_panel1, wxID_ANY);
    m_infoCtrl1->SetSize(wxDLG_UNIT(m_panel1, wxSize(-1,-1)));
    
    parent_sizer1->Add(m_infoCtrl1, wxGBPosition(0,0), wxGBSpan(1,3), wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxArrayString m_radioBox1Arr;
    m_radioBox1Arr.Add(_("First"));
    m_radioBox1Arr.Add(_("Second"));
    m_radioBox1Arr.Add(_("Third"));
    m_radioBox1 = new wxRadioBox(m_panel1, wxID_ANY, _("wxRadioBox"), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), m_radioBox1Arr, 1, wxRA_SPECIFY_COLS);
    m_radioBox1->SetSelection(1);
    
    parent_sizer1->Add(m_radioBox1, wxGBPosition(1,0), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    m_collPane4 = new wxCollapsiblePane(m_panel1, wxID_ANY, _("collapsible"), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1,-1)), wxCP_DEFAULT_STYLE);
    
    parent_sizer1->Add(m_collPane4, wxGBPosition(1,1), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer8 = new wxBoxSizer(wxVERTICAL);
    m_collPane4->GetPane()->SetSizer(boxSizer8);
    
    m_staticText10 = new wxStaticText(m_collPane4->GetPane(), wxID_ANY, _("これは日本語の文章です。"), wxDefaultPosition, wxDLG_UNIT(m_collPane4->GetPane(), wxSize(-1,-1)), 0);
    
    boxSizer8->Add(m_staticText10, 0, wxALL, WXC_FROM_DIP(5));
    
    m_bitmap2 = new wxStaticBitmap(m_collPane4->GetPane(), wxID_ANY, wxArtProvider::GetBitmap(wxART_GO_UP, wxART_BUTTON, wxDefaultSize), wxDefaultPosition, wxDLG_UNIT(m_collPane4->GetPane(), wxSize(-1,-1)), 0 );
    
    boxSizer8->Add(m_bitmap2, 0, wxALL, WXC_FROM_DIP(5));
    
    m_textCtrlWithValidator = new wxTextCtrl(m_panel1, wxID_ANY, wxT("initial"), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlWithValidator->SetHint(wxT(""));
    #endif
    
    parent_sizer1->Add(m_textCtrlWithValidator, wxGBPosition(1,2), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    wxArrayString m_choice1Arr;
    m_choice1Arr.Add(_("First"));
    m_choice1Arr.Add(_("Second"));
    m_choice1Arr.Add(_("Third"));
    m_choice1 = new wxChoice(m_panel1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), m_choice1Arr, 0);
    m_choice1->SetSelection(1);
    
    parent_sizer1->Add(m_choice1, wxGBPosition(2,0), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    m_bitmap21 = new wxStaticBitmap(m_panel1, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("french")), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), 0 );
    
    parent_sizer1->Add(m_bitmap21, wxGBPosition(2,1), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    m_slider1 = new wxSlider(m_panel1, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), wxSL_LABELS|wxSL_HORIZONTAL);
    
    parent_sizer1->Add(m_slider1, wxGBPosition(2,2), wxGBSpan(1,1), wxALL, WXC_FROM_DIP(5));
    
    m_panel12 = new wxPanel(m_auinotebook1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_auinotebook1, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_auinotebook1->AddPage(m_panel12, _("Data"), false);
    
    wxFlexGridSizer* fgSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    fgSizer1->SetFlexibleDirection( wxBOTH );
    fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    m_panel12->SetSizer(fgSizer1);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer1->Add(bSizer6, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    wxArrayString m_propertyGridManager1Arr;
    wxUnusedVar(m_propertyGridManager1Arr);
    wxArrayInt m_propertyGridManager1IntArr;
    wxUnusedVar(m_propertyGridManager1IntArr);
    m_propertyGridManager1 = new wxPropertyGridManager(m_panel12, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1,-1)), wxPG_DESCRIPTION|wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED|wxPG_AUTO_SORT);
    
    bSizer6->Add(m_propertyGridManager1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_propertyGridItem1 = m_propertyGridManager1->Append(  new wxStringProperty( _("String"), wxPG_LABEL, wxT("")) );
    m_propertyGridItem1->SetHelpString(_("String property item"));
    
    m_propertyGridManager1Arr.Clear();
    m_propertyGridManager1IntArr.Clear();
    m_propertyGridItem2 = m_propertyGridManager1->Append(  new wxEnumProperty( _("Edit Enum"), wxPG_LABEL, m_propertyGridManager1Arr, m_propertyGridManager1IntArr, 0) );
    m_propertyGridItem2->SetHelpString(wxT(""));
    
    m_grid1 = new wxGrid(m_panel12, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1, -1)), wxWANTS_CHARS);
    m_grid1->CreateGrid(3, 3);
    m_grid1->SetRowLabelValue(0, _("Row 1"));
    m_grid1->SetRowLabelValue(1, _("2"));
    m_grid1->SetRowLabelValue(2, _("3"));
    m_grid1->SetColLabelValue(0, _("First"));
    m_grid1->SetColLabelValue(1, _("B"));
    m_grid1->SetColLabelValue(2, _("C"));
    m_grid1->SetRowLabelAlignment(wxALIGN_LEFT, wxALIGN_TOP);
    m_grid1->SetColLabelAlignment(wxALIGN_CENTRE, wxALIGN_CENTRE);
    #if wxVERSION_NUMBER >= 2904
    m_grid1->UseNativeColHeader(false);
    #endif
    m_grid1->EnableEditing(true);
    
    bSizer6->Add(m_grid1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_ribbonBar1 = new wxRibbonBar(m_panel12, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1,-1)), wxRIBBON_BAR_DEFAULT_STYLE);
    m_ribbonBar1->SetArtProvider(new wxRibbonDefaultArtProvider);
    
    fgSizer1->Add(m_ribbonBar1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_ribbonPage1 = new wxRibbonPage(m_ribbonBar1, wxID_ANY, _("MyRibbonPage"), wxNullBitmap, 0);
    
    m_ribbonPanel1 = new wxRibbonPanel(m_ribbonPage1, wxID_ANY, _("Toolbar"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPage1, wxSize(-1,-1)), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonToolBar1 = new wxRibbonToolBar(m_ribbonPanel1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanel1, wxSize(-1,-1)), 0);
    m_ribbonToolBar1->SetRows(1, -1);
    
    m_ribbonToolBar1->AddTool(wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("undo")), wxNullBitmap, _("Help String"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonToolBar1->AddTool(wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("redo")), wxNullBitmap, _("Help String"), wxRIBBON_BUTTON_DROPDOWN);
    
    m_ribbonToolBar1->AddTool(wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("toggle_button")), wxNullBitmap, _("Help String"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonToolBar1->AddTool(wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("ribbon_button_hybrid")), wxNullBitmap, _("Help String"), wxRIBBON_BUTTON_HYBRID);
    m_ribbonToolBar1->Realize();
    
    m_ribbonPanel2 = new wxRibbonPanel(m_ribbonPage1, wxID_ANY, _("RibbonButton"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPage1, wxSize(-1,-1)), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar1 = new wxRibbonButtonBar(m_ribbonPanel2, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanel2, wxSize(-1,-1)), 0);
    
    m_ribbonButtonBar1->AddButton(wxID_ANY, _("Undo"), wxXmlResource::Get()->LoadBitmap(wxT("undo")), _("Help String"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar1->AddButton(wxID_ANY, _("Drop"), wxXmlResource::Get()->LoadBitmap(wxT("redo")), _("Help String"), wxRIBBON_BUTTON_DROPDOWN);
    
    m_ribbonButtonBar1->AddButton(wxID_ANY, _("Toggle"), wxXmlResource::Get()->LoadBitmap(wxT("toggle_button")), _("Help String"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBar1->AddButton(wxID_ANY, _("Hybrid"), wxXmlResource::Get()->LoadBitmap(wxT("ribbon_button_hybrid")), _("Help String"), wxRIBBON_BUTTON_HYBRID);
    m_ribbonButtonBar1->Realize();
    
    m_ribbonPanel3 = new wxRibbonPanel(m_ribbonPage1, wxID_ANY, _("Gallery"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPage1, wxSize(-1,-1)), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonGallery62 = new wxRibbonGallery(m_ribbonPanel3, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanel3, wxSize(-1,-1)), 0);
    
    m_ribbonGallery62->Append( wxXmlResource::Get()->LoadBitmap(wxT("undo")), wxID_ANY);
    
    m_ribbonGallery62->Append( wxXmlResource::Get()->LoadBitmap(wxT("redo")), wxID_ANY);
    m_ribbonBar1->Realize();
    m_panel3 = new wxPanel(m_auinotebook1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_auinotebook1, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_auinotebook1->AddPage(m_panel3, _("Additional"), false);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxVERTICAL);
    m_panel3->SetSizer(bSizer3);
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer3->Add(bSizer4, 0, wxALL, WXC_FROM_DIP(5));
    
    m_toggleBtn1 = new wxToggleButton(m_panel3, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), 0);
    m_toggleBtn1->SetValue(false);
    
    bSizer4->Add(m_toggleBtn1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_searchCtrl1 = new wxSearchCtrl(m_panel3, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), 0);
    m_searchCtrl1->ShowSearchButton(true);
    m_searchCtrl1->ShowCancelButton(false);
    
    bSizer4->Add(m_searchCtrl1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_colourPicker1 = new wxColourPickerCtrl(m_panel3, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), wxCLRP_DEFAULT_STYLE);
    
    bSizer4->Add(m_colourPicker1, 0, wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer3->Add(bSizer5, 0, wxALL, WXC_FROM_DIP(5));
    
    m_spinCtrl1 = new wxSpinCtrl(m_panel3, wxID_ANY, wxT("5"), wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), wxSP_ARROW_KEYS);
    m_spinCtrl1->SetRange(0, 10);
    m_spinCtrl1->SetValue(5);
    
    bSizer5->Add(m_spinCtrl1, 0, wxALL, WXC_FROM_DIP(5));
    
    m_hyperlink1 = new wxHyperlinkCtrl(m_panel3, wxID_ANY, _("wxFB Website"), wxT("http://www.wxformbuilder.org"), wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), wxHL_DEFAULT_STYLE);
    wxFont m_hyperlink1Font(9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial"));
    m_hyperlink1->SetFont(m_hyperlink1Font);
    
    bSizer5->Add(m_hyperlink1, 0, wxALL, WXC_FROM_DIP(5));
    
    bSizer5->Add(0, 0, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_animCtrl1 = new wxAnimationCtrl(m_panel3, wxID_ANY, wxNullAnimation, wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), wxAC_DEFAULT_STYLE);
    m_animCtrl1->SetInactiveBitmap(wxNullBitmap);
    
    bSizer5->Add(m_animCtrl1, 0, wxALL, WXC_FROM_DIP(5));
    
    wxStaticBoxSizer* sbSizer1 = new wxStaticBoxSizer( new wxStaticBox(m_panel3, wxID_ANY, _("Static Box")), wxHORIZONTAL);
    
    bSizer3->Add(sbSizer1, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_richText1 = new wxRichTextCtrl(m_panel3, wxID_ANY, wxT("wxRichTextCtrl!"), wxDefaultPosition, wxDLG_UNIT(m_panel3, wxSize(-1, -1)), wxWANTS_CHARS|wxBORDER_NONE|wxHSCROLL|wxVSCROLL);
    
    sbSizer1->Add(m_richText1, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    SetName(wxT("CrafterBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500,300)));
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
}

CrafterBase::~CrafterBase()
{
}