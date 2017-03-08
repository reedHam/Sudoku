//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::LockColourClick(TObject *Sender)
{
	Form1->LockColour->Color = ColorListBox1->Selected;
    Shape1->Brush->Color =  ColorListBox1->Selected;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FontColourClick(TObject *Sender)
{
	Form1->FontColour->Color = ColorListBox1->Selected;
	Shape2->Brush->Color =  ColorListBox1->Selected;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form1->ColourSet();
}
//---------------------------------------------------------------------------

