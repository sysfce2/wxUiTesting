////////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor -- see https://github.com/KeyWorksRW/wxUiEditor/
//
// DO NOT EDIT THIS FILE! Your changes will be lost if it is re-generated!
////////////////////////////////////////////////////////////////////////////////

#include <wx/artprov.h>
#include <wx/event.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/valgen.h>
#include <wx/valtext.h>
#include <wx/window.h>

#include "../custom_ctrls/split_button.h"

#include "commonctrls_base.h"

#include "../art/clr_hourglass_gif.hxx"
#include "../art/empty.xpm"

#include <wx/animate.h>
#include <wx/mstream.h>  // Memory stream classes

// Convert a data array into a wxAnimation
inline wxAnimation GetAnimFromHdr(const unsigned char* data, size_t size_data)
{
    wxMemoryInputStream strm(data, size_data);
    wxAnimation animation;
    animation.Load(strm);
    return animation;
};

bool CommonCtrlsBase::Create(wxWindow* parent, wxWindowID id, const wxString& title,
        const wxPoint& pos, const wxSize& size, long style, const wxString &name)
{
    if (!wxDialog::Create(parent, id, title, pos, size, style, name))
        return false;

    auto parent_sizer = new wxBoxSizer(wxVERTICAL);

    auto box_sizer6 = new wxBoxSizer(wxVERTICAL);
    parent_sizer->Add(box_sizer6, wxSizerFlags().Expand().Border(wxALL));

    m_infoBar = new wxInfoBar(this);
    m_infoBar->SetShowHideEffects(wxSHOW_EFFECT_EXPAND, wxSHOW_EFFECT_NONE);
    box_sizer6->Add(m_infoBar, wxSizerFlags().Expand().Border(wxALL));

    auto box_sizer = new wxBoxSizer(wxHORIZONTAL);
    parent_sizer->Add(box_sizer, wxSizerFlags().Expand().Border(wxALL));

    m_staticText = new wxStaticText(this, wxID_ANY, "Text:");
    box_sizer->Add(m_staticText, wxSizerFlags().Center().Border(wxLEFT|wxTOP|wxBOTTOM, wxSizerFlags::GetDefaultBorder()));

    m_textCtrl = new wxTextCtrl(this, wxID_ANY, "Text \"ctrl\"", wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
    {
        wxArrayString tmp_array;
        tmp_array.push_back(wxString::FromUTF8("foo"));
        tmp_array.push_back(wxString::FromUTF8("bar"));
        m_textCtrl->AutoComplete(tmp_array);
    }
    m_textCtrl->SetValidator(wxTextValidator(wxFILTER_NONE, &m_textCtrlValidate));
    m_textCtrl->SetToolTip("Auto-complete contains \"foo\" and \"bar\"");
    box_sizer->Add(m_textCtrl, wxSizerFlags().Border(wxALL));

    m_staticText2 = new wxStaticText(this, wxID_ANY, "More text:");
    box_sizer->Add(m_staticText2, wxSizerFlags().Center().Border(wxLEFT|wxTOP|wxBOTTOM, wxSizerFlags::GetDefaultBorder()));

    m_textCtrl2 = new wxTextCtrl(this, wxID_ANY, "Another ctrl");
    box_sizer->Add(m_textCtrl2, wxSizerFlags().Border(wxALL));

    m_checkBox = new wxCheckBox(this, wxID_ANY, "2-state Checkbox");
    box_sizer->Add(m_checkBox, wxSizerFlags().Center().Border(wxALL));

    auto box_sizer2 = new wxBoxSizer(wxHORIZONTAL);
    parent_sizer->Add(box_sizer2, wxSizerFlags().Expand().Border(wxALL));

    m_btn = new wxButton(this, wxID_ANY, "First btn");
    m_btn->SetInitialSize(wxSize(120 > GetBestSize().x ? 120 : -1, -1));
    box_sizer2->Add(m_btn, wxSizerFlags().Border(wxALL));

    auto btn2 = new wxButton(this, wxID_ANY, "Popup");
    box_sizer2->Add(btn2, wxSizerFlags().Border(wxALL));

    m_radioBtn = new wxRadioButton(this, wxID_ANY, "First radio", wxDefaultPosition, wxDefaultSize, wxRB_GROUP);
    box_sizer2->Add(m_radioBtn, wxSizerFlags().Center().Border(wxALL));

    m_radioBtn2 = new wxRadioButton(this, wxID_ANY, "Second radio");
    box_sizer2->Add(m_radioBtn2, wxSizerFlags().Center().Border(wxALL));

    m_checkBox2 = new wxCheckBox(this, wxID_ANY, "Checkbox");
    box_sizer2->Add(m_checkBox2, wxSizerFlags().Center().Border(wxALL));

    auto static_box = new wxStaticBoxSizer(wxVERTICAL, this, "Combos and Choices");
    parent_sizer->Add(static_box, wxSizerFlags().Expand().Border(wxALL));

    auto box_sizer3 = new wxBoxSizer(wxHORIZONTAL);
    static_box->Add(box_sizer3, wxSizerFlags().Expand().Border(wxALL));

    auto static_box_sizer2 = new wxStaticBoxSizer(wxVERTICAL, static_box->GetStaticBox(), "Combo");
    box_sizer3->Add(static_box_sizer2, wxSizerFlags().Expand().Border(wxALL));

    m_staticText3 = new wxStaticText(static_box_sizer2->GetStaticBox(), wxID_ANY, "Unsorted");
    static_box_sizer2->Add(m_staticText3, wxSizerFlags().Border(wxALL));

    m_comboBox = new wxComboBox(static_box_sizer2->GetStaticBox(), wxID_ANY, wxEmptyString);
    m_comboBox->Append("item #1");
    m_comboBox->Append("item #2");
    m_comboBox->Append("item #0");
    m_comboBox->SetStringSelection("item #2");
    m_comboBox->SetToolTip("Item #0 should be selected by default");
    static_box_sizer2->Add(m_comboBox, wxSizerFlags().Expand().Border(wxALL));

    m_staticText4 = new wxStaticText(static_box_sizer2->GetStaticBox(), wxID_ANY, "Sorted");
    static_box_sizer2->Add(m_staticText4, wxSizerFlags().Border(wxALL));

    m_comboBox2 = new wxComboBox(static_box_sizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, nullptr, wxCB_SORT);
    m_comboBox2->Append("item #1");
    m_comboBox2->Append("item #2");
    m_comboBox2->Append("item #0");
    m_comboBox2->SetStringSelection("item #2");
    m_comboBox2->SetToolTip("Item #2 should be selected by default");
    static_box_sizer2->Add(m_comboBox2, wxSizerFlags().Border(wxALL));

    auto static_box_sizer3 = new wxStaticBoxSizer(wxVERTICAL, static_box->GetStaticBox(), "Choice");
    box_sizer3->Add(static_box_sizer3, wxSizerFlags().Expand().Border(wxALL));

    m_staticText5 = new wxStaticText(static_box_sizer3->GetStaticBox(), wxID_ANY, "Unsorted");
    static_box_sizer3->Add(m_staticText5, wxSizerFlags().Border(wxALL));

    m_choice = new wxChoice(static_box_sizer3->GetStaticBox(), wxID_ANY);
    m_choice->Append("item #1");
    m_choice->Append("item #2");
    m_choice->Append("item #0");
    m_choice->SetSelection(2);
    m_choice->SetToolTip("Item #0 should be selected by default");
    static_box_sizer3->Add(m_choice, wxSizerFlags().Border(wxALL));

    m_staticText6 = new wxStaticText(static_box_sizer3->GetStaticBox(), wxID_ANY, "Sorted");
    static_box_sizer3->Add(m_staticText6, wxSizerFlags().Border(wxALL));

    m_choice2 = new wxChoice(static_box_sizer3->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, nullptr, wxCB_SORT);
    m_choice2->Append("item #1");
    m_choice2->Append("item #2");
    m_choice2->Append("item #0");
    m_choice2->SetSelection(2);
    m_choice2->SetToolTip("Item #2 should be selected by default");
    static_box_sizer3->Add(m_choice2, wxSizerFlags().Border(wxALL));

    auto static_box_sizer4 = new wxStaticBoxSizer(wxVERTICAL, static_box->GetStaticBox(), "List");
    box_sizer3->Add(static_box_sizer4, wxSizerFlags().Expand().Border(wxALL));

    m_staticText7 = new wxStaticText(static_box_sizer4->GetStaticBox(), wxID_ANY, "Unsorted");
    static_box_sizer4->Add(m_staticText7, wxSizerFlags().Border(wxALL));

    m_listbox = new wxListBox(static_box_sizer4->GetStaticBox(), wxID_ANY);
    m_listbox->Append("item #1");
    m_listbox->Append("item #2");
    m_listbox->Append("item #0");
    static_box_sizer4->Add(m_listbox, wxSizerFlags().Border(wxALL));

    m_staticText8 = new wxStaticText(static_box_sizer4->GetStaticBox(), wxID_ANY, "Sorted");
    static_box_sizer4->Add(m_staticText8, wxSizerFlags().Border(wxALL));

    m_listBox2 = new wxListBox(static_box_sizer4->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, nullptr, wxLB_SINGLE|wxLB_SORT);
    m_listBox2->Append("item #1");
    m_listBox2->Append("item #2");
    m_listBox2->Append("item #0");
    static_box_sizer4->Add(m_listBox2, wxSizerFlags().Border(wxALL));

    auto static_box_sizer5 = new wxStaticBoxSizer(wxVERTICAL, static_box->GetStaticBox(), "Checked");
    box_sizer3->Add(static_box_sizer5, wxSizerFlags().Expand().Border(wxALL));

    m_staticText9 = new wxStaticText(static_box_sizer5->GetStaticBox(), wxID_ANY, "Unsorted");
    static_box_sizer5->Add(m_staticText9, wxSizerFlags().Border(wxALL));

    m_checkList = new wxCheckListBox(static_box_sizer5->GetStaticBox(), wxID_ANY);
    m_checkList->Append("item #1");
    m_checkList->Append("item #2");
    m_checkList->Append("item #0");
    static_box_sizer5->Add(m_checkList, wxSizerFlags().Border(wxALL));

    m_staticText10 = new wxStaticText(static_box_sizer5->GetStaticBox(), wxID_ANY, "Sorted");
    static_box_sizer5->Add(m_staticText10, wxSizerFlags().Border(wxALL));

    m_checkList2 = new wxCheckListBox(static_box_sizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, nullptr, wxLB_SINGLE|wxLB_SORT);
    m_checkList2->Append("item #1");
    m_checkList2->Append("item #2");
    m_checkList2->Append("item #0");
    static_box_sizer5->Add(m_checkList2, wxSizerFlags().Border(wxALL));

    auto flex_grid_sizer = new wxFlexGridSizer(4, 0, 0);
    parent_sizer->Add(flex_grid_sizer, wxSizerFlags().Expand().Border(wxALL));

    m_staticText11 = new wxStaticText(this, wxID_ANY, "On Windows 10, the items may be be clipped unless they have a trailing space.");
    m_staticText11->Wrap(200);
    flex_grid_sizer->Add(m_staticText11, wxSizerFlags().Border(wxALL));

    wxString radioBox_choices[] = {
        "Button zero ",
        "Button one ",
        "Button two ",
    };
    m_radioBox = new wxRadioBox(this, wxID_ANY, "Radio Box",
        wxDefaultPosition, wxDefaultSize, 3, radioBox_choices, 0, wxRA_SPECIFY_ROWS);
    m_radioBox->SetValidator(wxGenericValidator(&m_valRadio));
    flex_grid_sizer->Add(m_radioBox, wxSizerFlags().Border(wxALL));

    auto bmp = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxArtProvider::GetBitmap(wxART_GO_HOME, wxART_OTHER)));
    flex_grid_sizer->Add(bmp, wxSizerFlags().Border(wxALL));

    m_bmpComboBox = new wxBitmapComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, nullptr, wxCB_READONLY);
    flex_grid_sizer->Add(m_bmpComboBox, wxSizerFlags().Border(wxALL));

    m_checkPlayAnimation = new wxCheckBox(this, wxID_ANY, "Play Animation");
    auto static_box_2 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, m_checkPlayAnimation), wxVERTICAL);
    flex_grid_sizer->Add(static_box_2, wxSizerFlags().Border(wxALL));

    m_toggleBtn = new wxToggleButton(static_box_2->GetStaticBox(), wxID_ANY, "Play Animation", wxDefaultPosition, wxDefaultSize,
        wxBU_EXACTFIT);
    static_box_2->Add(m_toggleBtn, wxSizerFlags().Border(wxALL));

    m_animation_ctrl = new wxAnimationCtrl(static_box_2->GetStaticBox(), wxID_ANY, GetAnimFromHdr(clr_hourglass_gif, sizeof(clr_hourglass_gif)));
    m_animation_ctrl->SetInactiveBitmap(wxImage(empty_xpm));
    static_box_2->Add(m_animation_ctrl, wxSizerFlags().Border(wxALL));

    m_split_button = new wxue_ctrl::SplitButton(this, wxID_ANY, "Play");
    {
        const int ID_PLAY { 100 };
        const int ID_STOP { 101 };
        m_split_button->GetMenu().Append(ID_PLAY, "Play");
        m_split_button->GetMenu().Append(ID_STOP, "Stop");

        m_split_button->Bind(wxEVT_MENU,
            [this](wxCommandEvent&)
            {
                m_animation_ctrl->Play();
                m_checkPlayAnimation->SetValue(true);
            }, ID_PLAY);

        m_split_button->Bind(wxEVT_MENU,
            [this](wxCommandEvent&)
            {
                m_animation_ctrl->Stop();
                m_checkPlayAnimation->SetValue(false);
            }, ID_STOP);

        m_split_button->Bind(wxEVT_BUTTON,
            [this](wxCommandEvent&)
            {
                m_animation_ctrl->Play();
                m_checkPlayAnimation->SetValue(true);
            } );
    }
    flex_grid_sizer->Add(m_split_button, wxSizerFlags().DoubleBorder(wxALL));

    flex_grid_sizer->AddSpacer(0);

    m_edit_listbox = new wxEditableListBox(this, wxID_ANY, "My Editable ListBox", wxDefaultPosition, wxDefaultSize,
        wxEL_ALLOW_NEW|wxEL_ALLOW_EDIT|wxEL_ALLOW_DELETE);
    {
        wxArrayString tmp_array;
        tmp_array.push_back(wxString::FromUTF8("item #1"));
        tmp_array.push_back(wxString::FromUTF8("item #2"));
        tmp_array.push_back(wxString::FromUTF8("item #3"));
        m_edit_listbox->SetStrings(tmp_array);
    }
    flex_grid_sizer->Add(m_edit_listbox, wxSizerFlags().Border(wxALL));

    auto box_sizer5 = new wxBoxSizer(wxHORIZONTAL);
    parent_sizer->Add(box_sizer5, wxSizerFlags().Expand().Border(wxALL));

    m_staticText12 = new wxStaticText(this, wxID_ANY, "Slider:");
    box_sizer5->Add(m_staticText12, wxSizerFlags().Center().Border(wxLEFT|wxTOP|wxBOTTOM, wxSizerFlags::GetDefaultBorder()));

    m_slider = new wxSlider(this, wxID_ANY, 50, 0, 100);
    m_slider->SetValue(50);
    box_sizer5->Add(m_slider, wxSizerFlags().Border(wxALL));

    m_staticText13 = new wxStaticText(this, wxID_ANY, "Gauge:");
    box_sizer5->Add(m_staticText13, wxSizerFlags().Center().Border(wxLEFT|wxTOP|wxBOTTOM, wxSizerFlags::GetDefaultBorder()));

    m_gauge = new wxGauge(this, wxID_ANY, 100);
    m_gauge->SetValue(0);
    box_sizer5->Add(m_gauge, wxSizerFlags().Center().Border(wxALL));

    auto stdBtn = CreateStdDialogButtonSizer(wxOK|wxCANCEL|wxHELP);
    parent_sizer->Add(CreateSeparatedSizer(stdBtn), wxSizerFlags().Expand().Border(wxALL));

    SetSizerAndFit(parent_sizer);
    Centre(wxBOTH);

    // Event handlers
    Bind(wxEVT_CONTEXT_MENU, &CommonCtrlsBase::OnContextMenu, this);
    m_textCtrl->Bind(wxEVT_TEXT_ENTER,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_TEXT_ENTER event");
            Fit();
        } );
    m_checkBox->Bind(wxEVT_CHECKBOX,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_CHECKBOX event");
            Fit();

        } );
    m_btn->Bind(wxEVT_BUTTON,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_BUTTON event");
            Fit();
        } );
    btn2->Bind(wxEVT_BUTTON, &CommonCtrlsBase::OnPopupBtn, this);
    m_radioBtn->Bind(wxEVT_RADIOBUTTON,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_RADIOBUTTON event");
            Fit();
        } );
    m_radioBtn2->Bind(wxEVT_RADIOBUTTON, &CommonCtrlsBase::OnRadio, this);
    m_checkBox2->Bind(wxEVT_CHECKBOX, &CommonCtrlsBase::OnCheckBox, this);
    m_comboBox->Bind(wxEVT_COMBOBOX,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_COMBOBOX event");
            Fit();
        } );
    m_comboBox2->Bind(wxEVT_COMBOBOX,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_COMBOBOX event");
            Fit();
        } );
    m_comboBox2->Bind(wxEVT_COMBOBOX_CLOSEUP,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_COMBOBOX_CLOSEUP event");
            Fit();
        } );
    m_choice->Bind(wxEVT_CHOICE,
        [this](wxCommandEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_CHOICE event");
            Fit();
        } );
    m_choice2->Bind(wxEVT_CHOICE, &CommonCtrlsBase::OnChoice, this);
    m_listbox->Bind(wxEVT_LISTBOX, &CommonCtrlsBase::OnListBox, this);
    m_listBox2->Bind(wxEVT_LISTBOX, &CommonCtrlsBase::OnListBox, this);
    m_checkList->Bind(wxEVT_CHECKLISTBOX, &CommonCtrlsBase::OnListChecked, this);
    m_radioBox->Bind(wxEVT_RADIOBOX, &CommonCtrlsBase::OnRadioBox, this);
    m_checkPlayAnimation->Bind(wxEVT_CHECKBOX,
        [this](wxCommandEvent&)
        {
            if (m_checkPlayAnimation->GetValue()) 
            {
                m_animation_ctrl->Play();
            }
            else 
            {  
                m_animation_ctrl->Stop();
            }

        } );
    m_toggleBtn->Bind(wxEVT_TOGGLEBUTTON,
        [this](wxCommandEvent&)
        {
            if (m_toggleBtn->GetValue()) 
            {
                m_animation_ctrl->Play();
                m_checkPlayAnimation->SetValue(true);
            }
            else 
            {  
                m_animation_ctrl->Stop();
                m_checkPlayAnimation->SetValue(false);
            }

            m_infoBar->ShowMessage("wxEVT_TOGGLEBUTTON event");
            Fit();
        } );
    m_edit_listbox->Bind(wxEVT_LIST_BEGIN_DRAG,
        [this](wxListEvent&)
        {
            m_infoBar->ShowMessage("wxEVT_LIST_BEGIN_DRAG event");
            Fit();
        } );
    m_slider->Bind(wxEVT_SLIDER, &CommonCtrlsBase::OnSlider, this);

    return true;
}

void CommonCtrlsBase::OnContextMenu(wxContextMenuEvent& event)
{
    wxMenu menu;
    auto pmenu = &menu;  // convenience variable for the auto-generated code

    auto menu_item = new wxMenuItem(pmenu, wxID_ANY, "Play Animation");
    pmenu->Append(menu_item);

    auto menu_item_2 = new wxMenuItem(pmenu, wxID_ANY, "Stop Animation");
    pmenu->Append(menu_item_2);

    pmenu->AppendSeparator();

    auto menu_item_3 = new wxMenuItem(pmenu, wxID_ANY, "Set Slider to 25");
    pmenu->Append(menu_item_3);

    auto menu_item_4 = new wxMenuItem(pmenu, wxID_ANY, "Set Slider to 75");
    pmenu->Append(menu_item_4);

    auto menu_item_5 = new wxMenuItem(pmenu, wxID_ANY, "Set Gauge to 25");
    pmenu->Append(menu_item_5);

    auto menu_item_6 = new wxMenuItem(pmenu, wxID_ANY, "Set Gauge to 75");
    pmenu->Append(menu_item_6);

    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_animation_ctrl->Play(); },
        menu_item->GetId());
    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_animation_ctrl->Stop(); },
        menu_item_2->GetId());
    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_slider->SetValue(25); },
        menu_item_3->GetId());
    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_slider->SetValue(75); },
        menu_item_4->GetId());
    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_gauge->SetValue(25); },
        menu_item_5->GetId());
    menu.Bind(wxEVT_MENU,
        [this](wxCommandEvent&) { m_gauge->SetValue(75); },
        menu_item_6->GetId());

    wxStaticCast(event.GetEventObject(), wxWindow)->PopupMenu(&menu);
}
