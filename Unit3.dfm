object Form3: TForm3
  Left = 1055
  Top = 260
  AutoSize = True
  Caption = 'Form3'
  ClientHeight = 224
  ClientWidth = 121
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 0
    Top = 176
    Width = 25
    Height = 24
  end
  object Shape2: TShape
    Left = 0
    Top = 199
    Width = 25
    Height = 24
  end
  object ColorListBox1: TColorListBox
    Left = 0
    Top = 0
    Width = 121
    Height = 177
    Style = [cbStandardColors, cbPrettyNames]
    TabOrder = 0
  end
  object OK: TButton
    Left = 24
    Top = 176
    Width = 97
    Height = 25
    Caption = 'Lock Colour'
    TabOrder = 1
    OnClick = LockColourClick
  end
  object FontColour: TButton
    Left = 24
    Top = 199
    Width = 97
    Height = 25
    Caption = 'Font Colour'
    TabOrder = 2
    OnClick = FontColourClick
  end
end
