object Form1: TForm1
  Left = 196
  Top = 116
  Width = 678
  Height = 445
  Caption = 'News Turkey'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnShow = FormShow
  DesignSize = (
    670
    391)
  PixelsPerInch = 96
  TextHeight = 13
  object SourceList: TTreeView
    Left = 0
    Top = 8
    Width = 665
    Height = 161
    Anchors = [akLeft, akTop, akRight]
    Indent = 19
    PopupMenu = TBPopupMenu1
    TabOrder = 0
    OnDblClick = SourceListDblClick
    Items.Data = {
      010000002E0000000000000000000000FFFFFFFFFFFFFFFF0000000000000000
      15437C4E6574204E6577732046726F6E7420446F6F72}
  end
  object sbStatus: TStatusBar
    Left = 0
    Top = 372
    Width = 670
    Height = 19
    Panels = <
      item
        Text = 'News Turkey: Ready to Go!'
        Width = 500
      end
      item
        Width = 50
      end>
    SimplePanel = False
    SizeGrip = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 176
    Width = 665
    Height = 193
    Anchors = [akLeft, akTop, akRight, akBottom]
    BevelOuter = bvNone
    TabOrder = 2
    object CppWebBrowser1: TCppWebBrowser
      Left = 0
      Top = 0
      Width = 665
      Height = 193
      Align = alClient
      TabOrder = 0
      OnProgressChange = CppWebBrowser1ProgressChange
      ControlData = {
        4C000000BB440000F21300000000000000000000000000000000000000000000
        000000004C000000000000000000000001000000E0D057007335CF11AE690800
        2B2E126208000000000000004C0000000114020000000000C000000000000046
        8000000000000000000000000000000000000000000000000000000000000000
        00000000000000000100000000000000000000000000000000000000}
    end
  end
  object XMLDoc: TXMLDocument
    FileName = 'http://news.com.com/2547-1_3-0-20.xml'
    AfterOpen = XMLDocAfterOpen
    Left = 264
    Top = 80
    DOMVendorDesc = 'MSXML'
  end
  object MainMenu1: TMainMenu
    Left = 296
    Top = 80
    object File1: TMenuItem
      Caption = 'File'
      object Exit1: TMenuItem
        Caption = 'Exit'
      end
    end
  end
  object TBPopupMenu1: TTBPopupMenu
    Left = 216
    Top = 80
    object TBItem1: TTBItem
      Caption = 'Get News'
      OnClick = TBItem1Click
    end
  end
end
