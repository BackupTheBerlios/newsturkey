//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit6.h"

//Class: NTSetting-----------------------------------------------------------

bool __fastcall NTSetting::SetValue(AnsiString value)
{
 this->SettingStr = value;
 return TRUE;
}

AnsiString* __fastcall NTSetting::Read()
{
 return &this->SettingStr;
}

//Class: NTSettingsDB--------------------------------------------------------

void __fastcall NTSettingsDB::AddSetting(AnsiString name, AnsiString value, void* AssocObj)
{
 NTSetting tmpSetting;

 tmpSetting.SettingName = name;
 tmpSetting.SetValue(value);

 Setting.push_back(tmpSetting);

 count++;
}

void __fastcall NTSettingsDB::Flush(AnsiString filename)
{
}

void __fastcall NTSettingsDB::Load(AnsiString filename)
{
 TRegistry *Registry = new TRegistry(KEY_READ);
 TStringList *ValueNames = new TStringList;
 int i;
 int setting;
 AnsiString tmp;

 try {
  Registry->RootKey = HKEY_LOCAL_MACHINE;

  Registry->OpenKey("\\SOFTWARE\\HAVOC\\NewsTurkey\\",false);

  Registry->GetValueNames(ValueNames);

  for(i = 0;i < ValueNames->Count;i++)
  {
   setting = Registry->ReadInteger(ValueNames->Values[i]);
   //this->AddSetting(ValueNames->Values[i]., tmp.sprintf("%d", setting) );
  }
 } __finally {
  delete Registry;
  delete ValueNames;
 }
}

void __fastcall NTSettingsDB::PropertySync()
{
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
 