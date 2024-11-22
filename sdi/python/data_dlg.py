###############################################################################
# Code generated by wxUiEditor -- see https://github.com/KeyWorksRW/wxUiEditor/
#
# Do not edit any code above the "End of generated code" comment block.
# Any changes before that block will be lost if it is re-generated!
###############################################################################

"""DataDlg class generated by wxUiEditor."""

import wx
import wx.dataview
import wx.grid
import wx.propgrid

class DataDlg(wx.Dialog):
    def __init__(self, parent, id=wx.ID_ANY, title="Data testing", pos=
                wx.DefaultPosition, size=wx.DefaultSize,
                style=wx.DEFAULT_DIALOG_STYLE|wx.RESIZE_BORDER,
                name=wx.DialogNameStr):
        wx.Dialog.__init__(self)

        if not self.Create(parent, id, title, pos, size, style, name):
            return

        dlg_sizer = wx.BoxSizer(wx.VERTICAL)

        self.notebook = wx.Notebook(self, wx.ID_ANY)
        dlg_sizer.Add(self.notebook, wx.SizerFlags().Border(wx.ALL))

        grid_tab = wx.Panel(self.notebook, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize,
            wx.TAB_TRAVERSAL)
        self.notebook.AddPage(grid_tab, "Grid")

        page_sizer_2 = wx.BoxSizer(wx.VERTICAL)

        self.kicadGrid = wx.grid.Grid(grid_tab, wx.ID_ANY)
        self.kicadGrid.CreateGrid(2, 11)
        self.kicadGrid.EnableDragGridSize(False)
        self.kicadGrid.SetMargins(0, 0)
        font_info = wx.FontInfo(wx.SystemSettings.GetFont(wx.SYS_DEFAULT_GUI_FONT).GetPointSize())
        self.kicadGrid.SetLabelFont(wx.Font(font_info))
        self.kicadGrid.SetDefaultCellAlignment(wx.ALIGN_LEFT, wx.ALIGN_TOP)
        self.kicadGrid.SetColLabelAlignment(wx.ALIGN_CENTER, wx.ALIGN_CENTER)
        self.kicadGrid.SetColLabelSize(24)
        self.kicadGrid.SetColSize(0, 124)
        self.kicadGrid.SetColSize(1, 60)
        self.kicadGrid.SetColSize(2, 110)
        self.kicadGrid.SetColSize(3, 110)
        self.kicadGrid.SetColSize(4, 110)
        self.kicadGrid.SetColSize(5, 60)
        self.kicadGrid.SetColSize(6, 110)
        self.kicadGrid.SetColSize(7, 110)
        self.kicadGrid.SetColSize(8, 110)
        self.kicadGrid.SetColSize(9, 110)
        self.kicadGrid.SetColSize(10, 110)
        self.kicadGrid.SetColLabelValue(0, "Text Items")
        self.kicadGrid.SetColLabelValue(1, "Show")
        self.kicadGrid.SetColLabelValue(2, "Width")
        self.kicadGrid.SetColLabelValue(3, "Height")
        self.kicadGrid.SetColLabelValue(4, "Thickness")
        self.kicadGrid.SetColLabelValue(5, "Italic")
        self.kicadGrid.SetColLabelValue(6, "Layer")
        self.kicadGrid.SetColLabelValue(7, "Orientation")
        self.kicadGrid.SetColLabelValue(8, "Unconstrained")
        self.kicadGrid.SetColLabelValue(9, "X Offset")
        self.kicadGrid.SetColLabelValue(10, "Y Offset")

        self.kicadGrid.EnableDragRowSize(False)
        self.kicadGrid.SetRowLabelAlignment(wx.ALIGN_LEFT, wx.ALIGN_CENTER)
        self.kicadGrid.SetRowLabelSize(160)
        self.kicadGrid.SetRowLabelValue(0, "Reference designator")
        self.kicadGrid.SetRowLabelValue(1, "Value")
        self.kicadGrid.SetMinSize(self.FromDIP(wx.Size(800, 140)))
        page_sizer_2.Add(self.kicadGrid,
            wx.SizerFlags(1).Expand().Border(wx.LEFT|wx.RIGHT|wx.BOTTOM, wx.SizerFlags.GetDefaultBorder()))
        grid_tab.SetSizerAndFit(page_sizer_2)

        prop_grid_tab = wx.Panel(self.notebook, wx.ID_ANY, wx.DefaultPosition,
            wx.DefaultSize, wx.TAB_TRAVERSAL)
        self.notebook.AddPage(prop_grid_tab, "PropertyGrid")

        page_sizer_4 = wx.BoxSizer(wx.VERTICAL)

        self.propertyGrid = wx.propgrid.PropertyGrid(prop_grid_tab, wx.ID_ANY)
        page_sizer_4.Add(self.propertyGrid, wx.SizerFlags().Expand().Border(wx.ALL))

        self.propertyGridICategory = self.propertyGrid.Append(wx.propgrid.PropertyCategory
            ("CategoryName", "CategoryName"))

        self.pgi_string = self.propertyGrid.Append(wx.propgrid.StringProperty("String", ""
            ))

        self.pgi_integer = self.propertyGrid.Append(wx.propgrid.IntProperty("Integer", ""))
        prop_grid_tab.SetSizerAndFit(page_sizer_4)

        tree_tab = wx.Panel(self.notebook, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize,
            wx.TAB_TRAVERSAL)
        self.notebook.AddPage(tree_tab, "Trees")

        page_sizer_3 = wx.BoxSizer(wx.VERTICAL)

        flex_grid_sizer = wx.FlexGridSizer(2, 0, 0)
        flex_grid_sizer.AddGrowableCol(0)
        flex_grid_sizer.AddGrowableCol(1)

        self.static_text = wx.StaticText(tree_tab, wx.ID_ANY, "wxTreeCtrl")
        flex_grid_sizer.Add(self.static_text, wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.static_text2 = wx.StaticText(tree_tab, wx.ID_ANY, "wxTreeListCtrl")
        flex_grid_sizer.Add(self.static_text2, wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.tree_ctrl = wx.TreeCtrl(tree_tab, wx.ID_ANY)
        flex_grid_sizer.Add(self.tree_ctrl, wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.tree_list_ctrl = wx.dataview.TreeListCtrl(tree_tab, wx.ID_ANY)
        flex_grid_sizer.Add(self.tree_list_ctrl, wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.tree_list_ctrl.AppendColumn("Column 1", wx.COL_WIDTH_AUTOSIZE)

        self.tree_list_ctrl.AppendColumn("Column 2", wx.COL_WIDTH_AUTOSIZE)

        page_sizer_3.Add(flex_grid_sizer, wx.SizerFlags(1).Expand().Border(wx.ALL))
        tree_tab.SetSizerAndFit(page_sizer_3)

        dataview_tab = wx.Panel(self.notebook, wx.ID_ANY, wx.DefaultPosition,
            wx.DefaultSize, wx.TAB_TRAVERSAL)
        self.notebook.AddPage(dataview_tab, "DataView")
        dataview_tab.SetBackgroundColour(wx.SystemSettings.GetColour(wx.SYS_COLOUR_BTNFACE))

        page_sizer = wx.BoxSizer(wx.VERTICAL)

        flex_grid_sizer2 = wx.FlexGridSizer(3, 3, 0, 0)
        flex_grid_sizer2.AddGrowableCol(0)
        flex_grid_sizer2.AddGrowableCol(1)
        flex_grid_sizer2.AddGrowableCol(2)

        static_text3 = wx.StaticText(dataview_tab, wx.ID_ANY, "wxDataView")
        flex_grid_sizer2.Add(static_text3, wx.SizerFlags().Expand().Border(wx.ALL))

        self.static_text5 = wx.StaticText(dataview_tab, wx.ID_ANY, "wxDataViewList")
        flex_grid_sizer2.Add(self.static_text5, wx.SizerFlags().Expand().Border(wx.ALL))

        self.static_text4 = wx.StaticText(dataview_tab, wx.ID_ANY, "wxDataViewtree")
        flex_grid_sizer2.Add(self.static_text4, wx.SizerFlags().Expand().Border(wx.ALL))

        self.data_view_ctrl = wx.dataview.DataViewCtrl(dataview_tab, wx.ID_ANY,
            wx.DefaultPosition, wx.DefaultSize, wx.dataview.DV_SINGLE)
        flex_grid_sizer2.Add(self.data_view_ctrl, wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.data_view_column = self.data_view_ctrl.AppendTextColumn("Column 1", 0,
            wx.dataview.DATAVIEW_CELL_INERT, -1, wx.ALIGN_LEFT,
            wx.dataview.DATAVIEW_COL_RESIZABLE)

        self.data_view_column2 = self.data_view_ctrl.AppendTextColumn("Column 2", 0,
            wx.dataview.DATAVIEW_CELL_INERT, -1, wx.ALIGN_LEFT,
            wx.dataview.DATAVIEW_COL_RESIZABLE)

        self.data_view_list_ctrl = wx.dataview.DataViewListCtrl(dataview_tab, wx.ID_ANY)
        self.data_view_list_ctrl.SetMinSize(self.FromDIP(wx.Size(-1, 100)))
        flex_grid_sizer2.Add(self.data_view_list_ctrl,
            wx.SizerFlags(1).Expand().Border(wx.ALL))

        self.data_view_list_column = self.data_view_list_ctrl.AppendTextColumn("List 1",
            wx.dataview.DATAVIEW_CELL_INERT, -1, wx.ALIGN_LEFT,
            wx.dataview.DATAVIEW_COL_RESIZABLE)

        self.data_view_list_column2 = self.data_view_list_ctrl.AppendTextColumn("List 2",
            wx.dataview.DATAVIEW_CELL_INERT, -1, wx.ALIGN_LEFT,
            wx.dataview.DATAVIEW_COL_RESIZABLE)

        self.data_view_tree_ctrl = wx.dataview.DataViewTreeCtrl(dataview_tab, wx.ID_ANY)
        flex_grid_sizer2.Add(self.data_view_tree_ctrl,
            wx.SizerFlags(1).Expand().Border(wx.ALL))

        page_sizer.Add(flex_grid_sizer2, wx.SizerFlags(1).Expand().Border(wx.ALL))
        dataview_tab.SetSizerAndFit(page_sizer)

        box_sizer_14 = wx.BoxSizer(wx.HORIZONTAL)

        staticText_4 = wx.StaticText(self, wx.ID_ANY, "Events:")
        box_sizer_14.Add(staticText_4, wx.SizerFlags().Center().Border(wx.ALL))

        btn = wx.Button(self, wx.ID_ANY, "Clear Events")
        box_sizer_14.Add(btn, wx.SizerFlags().Border(wx.ALL))

        dlg_sizer.Add(box_sizer_14, wx.SizerFlags().Border(wx.ALL))

        self.events_list = wx.ListBox(self, wx.ID_ANY)
        self.events_list.SetMinSize(self.FromDIP(wx.Size(-1, 150)))
        dlg_sizer.Add(self.events_list, wx.SizerFlags(1).Expand().Border(wx.ALL))

        if "wxMac" not in wx.PlatformInfo:
            stdBtn_line = \
                wx.StaticLine(self, wx.ID_ANY, wx.DefaultPosition, wx.Size(20, -1))
            dlg_sizer.Add(stdBtn_line, wx.SizerFlags().Expand().Border(wx.ALL))

        stdBtn = wx.StdDialogButtonSizer()
        stdBtn_ok = wx.Button(self, wx.ID_OK)
        stdBtn.SetAffirmativeButton(stdBtn_ok)
        stdBtn_cancel = wx.Button(self, wx.ID_CANCEL)
        stdBtn.SetCancelButton(stdBtn_cancel)
        stdBtn_ok.SetDefault()
        stdBtn.Realize()
        dlg_sizer.Add(stdBtn, wx.SizerFlags().Expand().Border(wx.ALL))

        if pos != wx.DefaultPosition:
            self.SetPosition(self.FromDIP(pos))
        if size == wx.DefaultSize:
            self.SetSizerAndFit(dlg_sizer)
        else:
            self.SetSizer(dlg_sizer)
            if size.x == wx.DefaultCoord or size.y == wx.DefaultCoord:
                self.Fit()
            self.SetSize(self.FromDIP(size))
            self.Layout()
        self.Centre(wx.BOTH)

        # Bind Event handlers
        btn.Bind(wx.EVT_BUTTON, self.OnClearList)
        self.data_view_list_ctrl.Bind(wx.dataview.EVT_DATAVIEW_SELECTION_CHANGED, self.on_data_view_ctrl_selection_changed)
        self.data_view_tree_ctrl.Bind(wx.dataview.EVT_DATAVIEW_SELECTION_CHANGED, self.on_data_view_ctrl_selection_changed)
        self.kicadGrid.Bind(wx.grid.EVT_GRID_COL_SIZE, self.OnColumnResize)
        self.Bind(wx.EVT_INIT_DIALOG, self.on_init)
        self.propertyGrid.Bind(wx.propgrid.EVT_PG_CHANGED, self.on_changed)
        self.kicadGrid.Bind(wx.EVT_SIZE, self.OnGridSize)
        self.tree_list_ctrl.Bind(wx.dataview.EVT_TREELIST_SELECTION_CHANGED, self.on_tree_list_sel_changed)
        self.tree_ctrl.Bind(wx.EVT_TREE_ITEM_EXPANDED, self.on_tree_item_expanded)

    # Unimplemented Event handler functions
    # Copy any listed and paste them below the comment block, or to your inherited class.
    """
    """

# ************* End of generated code ***********
# DO NOT EDIT THIS COMMENT BLOCK!
#
# Code below this comment block will be preserved
# if the code for this class is re-generated.
# ***********************************************

    def on_init(self, event):
        self.kicadGrid.SetCellValue(0, 0, "cat")
        self.kicadGrid.SetCellValue(0, 1, "dog")

        self.propertyGrid.SetPropertyValue(self.pgi_string, "cat")
        self.propertyGrid.SetPropertyValue(self.pgi_integer, 3)

        root = self.tree_ctrl.AddRoot("Root")
        child = self.tree_ctrl.AppendItem(root, "Child # 1")
        self.tree_ctrl.AppendItem(child, "Grandchild")
        self.tree_ctrl.AppendItem(root, "Child # 2")

        root = self.tree_list_ctrl.GetRootItem()
        self.tree_list_ctrl.AppendItem(root, "cat #1")
        self.tree_list_ctrl.SetItemText(self.tree_list_ctrl.AppendItem(root, "cat #2"), 1, "dog")

        tree_root = self.data_view_tree_ctrl.AppendContainer(wx.dataview.DataViewItem(0), "TheRoot")
        self.data_view_tree_ctrl.AppendItem(tree_root, "Child # 1")
        self.data_view_tree_ctrl.AppendItem(tree_root, "Child # 2")
        self.data_view_tree_ctrl.AppendItem(tree_root, "Child 3, very long, long, long, long")

        data = ["cat", "dog"]
        self.data_view_list_ctrl.AppendItem(data)

    def OnClearList(self, event):
        self.events_list.Clear()

    def OnColumnResize(self, event):
        self.OnEventName("wxEVT_SIZE")

    def OnGridSize(self, event):
        self.OnEventName("wxEVT_SIZE")

    def on_changed(self, event):
        self.OnEventName("wxEVT_PG_CHANGED")

    def on_data_view_ctrl_selection_changed(self, event):
        self.OnEventName("wxEVT_DATAVIEW_SELECTION_CHANGED")

    def on_tree_item_expanded(self, event):
        self.OnEventName("wxEVT_TREE_ITEM_EXPANDED")

    def on_tree_list_sel_changed(self, event):
        self.OnEventName("wxEVT_TREELIST_SELECTION_CHANGED")

    def OnEventName(self, event_name):
        pos = self.events_list.Append(event_name)
        self.events_list.Select(pos)