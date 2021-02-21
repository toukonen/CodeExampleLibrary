//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include "Encoders/AbsoluteEncoders/MockAbsoluteEncoder.hpp"
using namespace Encoders::AbsoluteEncoders;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *btnReadEncoder;
	TLabel *lblEncoderValue;
	void __fastcall btnReadEncoderClick(TObject *Sender);
private:	// User declarations
	MockAbsoluteEncoder _mockAbsoluteEncoder = MockAbsoluteEncoder();
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
