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
 TRegistry *Registry = new TRegistry(KEY_WRITE);
 AnsiString tmp;

 if(btnOK->Tag == 1) {
  pStage2->Show();
  btnOK->Tag++;
 } else {
  pStage2->Hide();
  frmNewSource->Hide();
  Registry->RootKey = HKEY_LOCAL_MACHINE;
  if(Form1->TurkeySources.AddSource(txtSrcName->Text, txtSrc->Text) != NULL) {
   if(!Registry->OpenKey( tmp.sprintf("\\SOFTWARE\\HAVOC\\NewsTurkey\\Sources\\%s\\", txtSrcName->Text), true)) {
    Application->MessageBoxA("Could not open Source Key", "Error", NULL);
   }

   Registry->WriteString("url", txtSrc->Text);
   Application->MessageBoxA("Source Added", "News Turkey", NULL);
  }

  btnOK->Tag = 1;
 }

 delete Registry;
}
//---------------------------------------------------------------------------

void __fastcall TfrmNewSource::CancelClick(TObject *Sender)
{
 frmNewSource->Hide();        
}
//---------------------------------------------------------------------------

