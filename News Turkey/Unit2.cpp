//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSettings *frmSettings;
//---------------------------------------------------------------------------
__fastcall TfrmSettings::TfrmSettings(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfrmSettings::btnCancelClick(TObject *Sender)
{
 frmSettings->Hide();        
}
//---------------------------------------------------------------------------


void __fastcall TfrmSettings::btnAddSourceClick(TObject *Sender)
{
 frmNewSource->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TfrmSettings::FormShow(TObject *Sender)
{
 TRegistry *Registry = new TRegistry(KEY_READ);
 int setting;

 Registry->RootKey = HKEY_LOCAL_MACHINE;

 Registry->OpenKey("\\SOFTWARE\\HAVOC\\NewsTurkey\\",false);

 setting = Registry->ReadInteger("whales");

 if(setting == 1) {
  chkWhales->Checked = TRUE;
 } else {
  chkWhales->Checked = FALSE;
 }

 delete Registry;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSettings::btnApplyClick(TObject *Sender)
{
 TRegistry *Registry = new TRegistry(KEY_WRITE);
 int setting;

 Registry->RootKey = HKEY_LOCAL_MACHINE;

 Registry->OpenKey("\\SOFTWARE\\HAVOC\\NewsTurkey\\",false);

 if(chkWhales->Checked == TRUE) {
  Registry->WriteInteger("whales", 1);
 } else {
  Registry->WriteInteger("whales", 0);
 }

 delete Registry;
}
//---------------------------------------------------------------------------

