//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H

//Internal Application Settings Database

//Headers required
#include <Classes.hpp>
#include <vector>
#include <msxmldom.hpp>
#include <XMLDoc.hpp>
#include <xmldom.hpp>
#include <XMLIntf.hpp>
using namespace std;

//Setting Types
#define NT_INT 0
#define NT_BOOL 1
#define NT_STRING 2

//Classes...
class NTSetting
{
        public:
                AnsiString SettingName;
                void* AssocObj;
                bool __fastcall SetValue(AnsiString value);
                AnsiString* __fastcall Read();
                AnsiString SettingStr;
};

class NTSettingsDB
{
        public:
                int count;
                vector<NTSetting> Setting;
                void __fastcall AddSetting(AnsiString name, AnsiString value, void* AssocObj);
                void __fastcall Flush(AnsiString filename);
                void __fastcall Load(AnsiString filename);
                void __fastcall PropertySync();
};

#include "Unit1.h"

//---------------------------------------------------------------------------
#endif
 