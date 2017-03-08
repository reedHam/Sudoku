object Form1: TForm1
  Left = 680
  Top = 270
  Caption = 'Form1'
  ClientHeight = 409
  ClientWidth = 386
  Color = clMenuBar
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 12
    Top = -24
    Width = 3
    Height = 433
    Brush.Color = clBlack
  end
  object Shape2: TShape
    Left = 133
    Top = -24
    Width = 4
    Height = 462
    Brush.Color = clBlack
  end
  object Shape3: TShape
    Left = 252
    Top = -24
    Width = 4
    Height = 449
    Brush.Color = clBlack
  end
  object Shape4: TShape
    Left = 0
    Top = 38
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Shape5: TShape
    Left = 0
    Top = 156
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Shape6: TShape
    Left = -46
    Top = 278
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Shape7: TShape
    Left = -48
    Top = 278
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Shape9: TShape
    Left = 0
    Top = 400
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Shape10: TShape
    Left = 372
    Top = -24
    Width = 3
    Height = 449
    Brush.Color = clBlack
  end
  object Label1: TLabel
    Left = 142
    Top = -1
    Width = 105
    Height = 39
    Caption = 'Sudoku'
    Color = clGradientInactiveCaption
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentColor = False
    ParentFont = False
  end
  object Shape8: TShape
    Left = -50
    Top = 278
    Width = 497
    Height = 3
    Brush.Color = clBlack
  end
  object Lock: TButton
    Left = 272
    Top = 7
    Width = 83
    Height = 25
    Caption = 'Lock'
    TabOrder = 0
    OnClick = LockClick
  end
  object MainMenu1: TMainMenu
    Left = 16
    object File1: TMenuItem
      Caption = '&File'
      object Exit1: TMenuItem
        Caption = 'E&xit'
        OnClick = Exit1Click
      end
      object Reset1: TMenuItem
        Caption = '&Reset'
        OnClick = Reset1Click
      end
      object New: TMenuItem
        Caption = 'New'
        OnClick = NewClick
      end
    end
    object Options: TMenuItem
      Caption = '&Options'
      object LockColour1: TMenuItem
        Caption = 'Colour Select'
        OnClick = LockColour1Click
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object Rules1: TMenuItem
        Caption = '&Rules'
        OnClick = Rules1Click
      end
    end
    object About1: TMenuItem
      Caption = '&About'
      OnClick = About1Click
    end
  end
  object LockColour: TColorDialog
    Left = 64
  end
  object FontColour: TColorDialog
    Color = clWhite
    Left = 120
  end
end
