//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSplash *frmSplash;
//---------------------------------------------------------------------------
__fastcall TfrmSplash::TfrmSplash(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

int __fastcall TfrmSplash::LoadSettings()
{
 AnsiString S;
 TRegistry *Registry = new TRegistry(KEY_READ);
 TRegKeyInfo srcKeyInfo;
 TStringList *srcKeyNames = new TStringList;
 int i;

 //This is the function that will load all info into
 //News Turkey.

 //Step 1: Load and parse Config File

 if(!FileExists("settings.xml")) {
  //No config file exists, we need to create one.

  //For configuragation we use the internal Settings Database
  //NTSettingsDB... TurkeySettings is our door.
  //The definition of TurkeySettings is in Unit1.h, so
  //don't look for it here.

  //Properties

  //Cat: General
  /* Form1->TurkeySettings.AddSetting("startatboot", "0", (void *) frmSettings->chkAutoStart->Checked);
  Form1->TurkeySettings.AddSetting("refreshatstart", "0", (void *)frmSettings->chkStartRefresh->Checked);
  Form1->TurkeySettings.AddSetting("instantadd", "0", (void *)frmSettings->chkEnableInstantAdd->Checked);
  Form1->TurkeySettings.AddSetting("animateicon", "1", (void *)frmSettings->chkAnimateTaskbar->Checked);
  Form1->TurkeySettings.AddSetting("savethewhales", "0", (void *)frmSettings->chkWhales->Checked);

  //Cat: Sources
  Form1->TurkeySettings.AddSetting("webadd", "0", (void *)frmSettings->chkEnableWebAdd->Checked);
  Form1->TurkeySettings.AddSetting("autodetectnames", "0", (void *)frmSettings->chkAutoNames->Checked);

  //Cat: InternetCon
  Form1->TurkeySettings.AddSetting("contype", "0", NULL);

  //Wonderful, our settings are now in the Database.
  //Now, let's wrap up by writing them to a file...
  Form1->TurkeySettings.OutToXML("settings.xml");

  //And the database is filled with info!
 } else {
  //if the config file exists, the SettingsDB can manage
  //loading the values itself. :)
  Form1->TurkeySettings.LoadFromXML("settings.xml"); */
 }

 //One final thing to do, we need to sync the property
 //pages in the program with the values in the DB.
 Form1->TurkeySettings.PropertySync();

 //Step 2: Setup the Location List pointers

 Form1->SourcesNode = Form1->NavMenu->Items->Item[0];
 Form1->FeedDBNode = Form1->NavMenu->Items->Item[1];
 Form1->PopFeedsNode = Form1->NavMenu->Items->Item[2];

 //Step 3: Build the Source List data

 //Later in development there will be a loop here
 //to load sources from a config file...

 //Form1->TurkeySources.AddSource("C|Net News", "http://news.com.com/2547-1_3-0-20.xml");
 //Form1->TurkeySources.AddSource("CompTeks.net", "http://forums.compteks.net/ssi.php?a=out&f=6&show=10&type=rss");
 
            Registry->RootKey = HKEY_LOCAL_MACHINE;
            // False because we do not want to create it if it doesn't exist
            if(!Registry->OpenKey("\\SOFTWARE\\HAVOC\\NewsTurkey\\Sources\\",false))
            {
             Application->MessageBoxA("KEY NOT OPENED", "Error", NULL);
            }
            if(!Registry->GetKeyInfo(srcKeyInfo)) {
             return 0;
            }

            try {
                Registry->GetKeyNames(srcKeyNames);

                for(i=0;i < srcKeyInfo.NumSubKeys;i++)
                {
                        Registry->OpenKey( S.sprintf("\\SOFTWARE\\HAVOC\\NewsTurkey\\Sources\\%s\\", srcKeyNames->Strings[i]), false);
                        Form1->TurkeySources.AddSource( srcKeyNames->Strings[i], Registry->ReadString("url"));
                }

            } __finally {
                delete srcKeyNames;
            }

            delete Registry;

 //Step 4: Check for New information from Havoc Software Productions

 //Step 5: If neccicary, check for updated feeds

 return 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmSplash::CloseDelayTimer(TObject *Sender)
{
 LoadSettings();
 frmSplash->Hide();
 CloseDelay->Enabled = FALSE;        
}
//---------------------------------------------------------------------------

