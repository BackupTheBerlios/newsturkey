object frmSettings: TfrmSettings
  Left = 314
  Top = 188
  BorderStyle = bsSingle
  Caption = 'News Turkey Settings'
  ClientHeight = 406
  ClientWidth = 407
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object btnOK: TButton
    Left = 96
    Top = 376
    Width = 97
    Height = 25
    Caption = 'OK'
    TabOrder = 0
  end
  object btnCancel: TButton
    Left = 200
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Cancel'
    TabOrder = 1
  end
  object btnApply: TButton
    Left = 304
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Apply'
    TabOrder = 2
  end
  object PageControl1: TPageControl
    Left = 8
    Top = 8
    Width = 393
    Height = 361
    ActivePage = TabSheet1
    TabIndex = 0
    TabOrder = 3
    object TabSheet1: TTabSheet
      Caption = 'General'
      object GroupBox1: TGroupBox
        Left = 8
        Top = 16
        Width = 369
        Height = 97
        Caption = 'Start Up'
        TabOrder = 0
        object CheckBox1: TCheckBox
          Left = 8
          Top = 24
          Width = 201
          Height = 17
          Caption = 'Enable Splash Screen'
          TabOrder = 0
        end
        object CheckBox2: TCheckBox
          Left = 8
          Top = 48
          Width = 185
          Height = 17
          Caption = 'Start News Turkey with Windows'
          TabOrder = 1
        end
        object CheckBox3: TCheckBox
          Left = 8
          Top = 72
          Width = 329
          Height = 17
          Caption = 'Automatically refresh all feeds on startup'
          TabOrder = 2
        end
      end
      object GroupBox2: TGroupBox
        Left = 8
        Top = 120
        Width = 369
        Height = 73
        Caption = 'Source Management'
        TabOrder = 1
        object CheckBox4: TCheckBox
          Left = 8
          Top = 24
          Width = 345
          Height = 17
          Caption = 'Enable using the RSSDirectory to find feeds'
          TabOrder = 0
        end
        object CheckBox5: TCheckBox
          Left = 8
          Top = 48
          Width = 281
          Height = 17
          Caption = 'Enable Instant Add (might require reboot to take effect)'
          TabOrder = 1
        end
      end
      object GroupBox3: TGroupBox
        Left = 8
        Top = 200
        Width = 369
        Height = 121
        Caption = 'Misc.'
        TabOrder = 2
        object CheckBox6: TCheckBox
          Left = 8
          Top = 24
          Width = 321
          Height = 17
          Caption = 'Animate Taskbar Icon when new information is avalible'
          TabOrder = 0
        end
        object CheckBox7: TCheckBox
          Left = 8
          Top = 48
          Width = 297
          Height = 17
          Caption = 'Save the Whales :-)'
          TabOrder = 1
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Sources'
      ImageIndex = 1
    end
    object TabSheet3: TTabSheet
      Caption = 'Internet Connection'
      ImageIndex = 2
    end
    object TabSheet4: TTabSheet
      Caption = 'About'
      ImageIndex = 3
      object Label1: TLabel
        Left = 56
        Top = 16
        Width = 277
        Height = 55
        Caption = 'News Turkey'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 264
        Top = 64
        Width = 50
        Height = 24
        Caption = 'BETA'
        Color = clRed
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = -19
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        Transparent = True
      end
      object Label3: TLabel
        Left = 48
        Top = 120
        Width = 295
        Height = 144
        Caption = 
          'This program is subject to the terms of the GNU General Public L' +
          'icense. It is provided as open-source, free-of-charge software w' +
          'ith sourcecode avalible to download. If you do not agree to the ' +
          'terms of the GNU GPL, then please uninstall this program.'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Verdana'
        Font.Style = []
        ParentFont = False
        WordWrap = True
      end
      object Label4: TLabel
        Left = 8
        Top = 304
        Width = 377
        Height = 20
        Alignment = taCenter
        AutoSize = False
        Caption = '2004 Havoc Software Productions'
        Enabled = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label5: TLabel
        Left = 16
        Top = 64
        Width = 244
        Height = 13
        Caption = 'Powered by 100% ALL AMERICAN Grade-A Turkey'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlue
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        Transparent = True
      end
    end
  end
end
