//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmNewSource *frmNewSource;
//---------------------------------------------------------------------------
__fastcall TfrmNewSource::TfrmNewSource(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmNewSource::btnOKClick(TObject *Sender)
{
 if(btnOK->Tag == 1) {
  pStage2->Show();
  btnOK->Tag++;
 } else {
  pStage2->Hide();
  frmNewSource->Hide();
  if(Form1->TurkeySources.AddSource(txtSrcName->Text, txtSrc->Text) != NULL) {
   Application->MessageBoxA("Source Added", "News Turkey", NULL);
  }

  btnOK->Tag = 1;
 }
}
//---------------------------------------------------------------------------

