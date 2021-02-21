//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnReadEncoderClick(TObject *Sender)
{
	Form1->lblEncoderValue->Caption = _mockAbsoluteEncoder.GetPosition();
}
//---------------------------------------------------------------------------

