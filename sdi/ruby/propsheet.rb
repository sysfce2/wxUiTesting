###############################################################################
# Code generated by wxUiEditor -- see https://github.com/KeyWorksRW/wxUiEditor/
#
# Do not edit any code above the "End of generated code" comment block.
# Any changes before that block will be lost if it is re-generated!
###############################################################################

WX_GLOBAL_CONSTANTS = true unless defined? WX_GLOBAL_CONSTANTS

require 'wx/core'

require_relative 'images'
require 'zlib'
require 'base64'
require 'stringio'

class PropSheetBase < Wx::PropertySheetDialog
  def initialize(parent, id = Wx::ID_ANY, title = 'wxPropertySheetDialog',
                 pos = Wx::DEFAULT_POSITION, size = Wx::DEFAULT_SIZE,
                 style = Wx::DEFAULT_DIALOG_STYLE)
    super()
    set_sheet_style(Wx::PROPSHEET_NOTEBOOK)
    set_sheet_inner_border(20)

    create(parent, id, title, pos, size, style, name)

    create_buttons(Wx::OK|Wx::CANCEL)

    page1 = Wx::Panel.new(get_book_ctrl, Wx::ID_ANY, Wx::DEFAULT_POSITION,
      Wx::DEFAULT_SIZE, Wx::TAB_TRAVERSAL)
    get_book_ctrl.add_page(page1, 'Page 1')

    page_sizer_1 = Wx::BoxSizer.new(Wx::VERTICAL)

    @staticText1 = Wx::StaticText.new(page1, Wx::ID_ANY,
      'TODO: replace this control with something more useful...')
    @staticText1.wrap(200)
    page_sizer_1.add(@staticText1, Wx::SizerFlags.new.border(Wx::ALL))
    page1.set_sizer_and_fit(page_sizer_1)

    page2 = Wx::Panel.new(get_book_ctrl, Wx::ID_ANY, Wx::DEFAULT_POSITION,
      Wx::DEFAULT_SIZE, Wx::TAB_TRAVERSAL)
    get_book_ctrl.add_page(page2, 'Page 2')

    page_sizer_2 = Wx::BoxSizer.new(Wx::VERTICAL)

    @staticText2 = Wx::StaticText.new(page2, Wx::ID_ANY,
      'TODO: replace this control with something more useful...')
    @staticText2.wrap(200)
    page_sizer_2.add(@staticText2, Wx::SizerFlags.new.border(Wx::ALL))
    page2.set_sizer_and_fit(page_sizer_2)

    page3 = Wx::Panel.new(get_book_ctrl, Wx::ID_ANY, Wx::DEFAULT_POSITION,
      Wx::DEFAULT_SIZE, Wx::TAB_TRAVERSAL)
    get_book_ctrl.add_page(page3, 'Page 3')

    page_sizer_3 = Wx::BoxSizer.new(Wx::VERTICAL)

    @staticText3 = Wx::StaticText.new(page3, Wx::ID_ANY,
      'TODO: replace this control with something more useful...')
    @staticText3.wrap(200)
    page_sizer_3.add(@staticText3, Wx::SizerFlags.new.border(Wx::ALL))
    page3.set_sizer_and_fit(page_sizer_3)

    layout_dialog(Wx::BOTH)
  end
end
# ************* End of generated code ***********
# DO NOT EDIT THIS COMMENT BLOCK!
#
# Code below this comment block will be preserved
# if the code for this class is re-generated.
# ***********************************************
