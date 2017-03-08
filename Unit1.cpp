//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	 for (int i= 0; i < 9; i++){
	 int j;
		for (j = 0; j< 9; j++){
				bord[i][j] = new Sudoku(this);
				bord[i][j]->Parent = this;
				bord[i][j]->Top = 42 + ((j%9)*40);
				bord[i][j]->Left = 17 +((i%9)*40);
				bord[i][j]->setXY("cord" + IntToStr(i) + "_" + IntToStr(j));
				bord[i][j]->Text = "";

		}
	 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rules1Click(TObject *Sender)
{
	ShowMessage("Sudoku originally called Number Place, is a logic-based, combinatorial number-placement puzzle. The objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 sub-grids that compose the grid (also called \"boxes\", \"blocks\", \"regions\", or \"sub-squares\") contains all of the digits from 1 to 9. The puzzle setter provides a partially completed grid, which for a well-posed puzzle has a unique solution.");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Exit1Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::About1Click(TObject *Sender)
{
	ShowMessage("Sudoku originally called Number Place, is a logic-based, combinatorial number-placement puzzle. The objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 sub-grids that compose the grid (also called \"boxes\", \"blocks\", \"regions\", or \"sub-squares\") contains all of the digits from 1 to 9. The puzzle setter provides a partially completed grid, which for a well-posed puzzle has a unique solution.");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Reset1Click(TObject *Sender)
{
	for (int i= 0; i < 9; i++){
		int j;
		for (j = 0; j< 9; j++){
			if (bord[i][j]->Font->Color != LockColour->Color) {
				bord[i][j]->Text = "";
			}

		}
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NewClick(TObject *Sender)
{
	for (int i= 0; i < 9; i++){
		int j;
		for (j = 0; j< 9; j++){
			bord[i][j]->Text = "";
			bord[i][j]->Font->Color = FontColour->Color;
			bord[i][j]->ReadOnly = false;
		}
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LockColour1Click(TObject *Sender)
{
	Form3->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LockClick(TObject *Sender)
{
	if (Lock->Caption == "Lock") {
		for (int i= 0; i < 9; i++){
			int j;
			for (j = 0; j< 9; j++){
				if (bord[i][j]->Text != "") {
					bord[i][j]->ReadOnly = true;
					bord[i][j]->Font->Color =  LockColour->Color;
				}
			}
		 }
	Lock->Caption = "Locked";
	}
	else{
		for (int i= 0; i < 9; i++){
			int j;
			for (j = 0; j< 9; j++){
				bord[i][j]->Font->Color = FontColour->Color;
				bord[i][j]->ReadOnly = false;
			}
		}
	Lock->Caption = "Lock";
	}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColourSet(){
    for (int i= 0; i < 9; i++){
			int j;
			for (j = 0; j< 9; j++){
				if(bord[i][j]->ReadOnly == true){
					bord[i][j]->Font->Color = LockColour->Color;
				}
				else{
					bord[i][j]->Font->Color = FontColour->Color;
				}

			}
		}
}
