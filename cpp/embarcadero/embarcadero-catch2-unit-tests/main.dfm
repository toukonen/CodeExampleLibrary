object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 336
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lblEncoderValue: TLabel
    Left = 216
    Top = 48
    Width = 4
    Height = 13
    Caption = '-'
  end
  object btnReadEncoder: TButton
    Left = 72
    Top = 43
    Width = 75
    Height = 25
    Caption = 'Read encoder'
    TabOrder = 0
    OnClick = btnReadEncoderClick
  end
end
