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
 /* _di_IXMLNode TurkeySettingsRoot;
 _di_IXMLNode TmpNode;
 //This is the function that will load all info into
 //News Turkey.

 //Step 1: Load and parse Config File

 if(!FileExists("settings.xml")) {
  //No config file exists, we need to create one.
  //Download XML File Template
  XMLSettings->FileName = "http://havoc.compteks.net/newsturkey/xmltempl.xml";
  XMLSettings->Active = TRUE;

  TurkeySettingsRoot->NodeName = "turkeysettings";

  //Cat. Nodes
  TmpNode->NodeName = "general";
  TurkeySettingsRoot->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "sources"
  TurkeySettingsRoot->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "internetcon";
  TurkeySettingsRoot->ChildNodes->Add(TmpNode);

  //Property Nodes

  //Cat: General
  TmpNode->NodeName = "startatboot";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[0]->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "refreshatstart";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[0]->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "instantadd";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[0]->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "animateicon";
  TmpNode->Text = "1";
  TurkeySettingsRoot->ChildNodes->Nodes[0]->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "savethewhales";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[0]->ChildNodes->Add(TmpNode);

  //Cat: Sources
  TmpNode->NodeName = "webadd";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[1]->ChildNodes->Add(TmpNode);
  TmpNode->NodeName = "autodetectnames";
  TmpNode->Text = "0";
  TurkeySettingsRoot->ChildNodes->Nodes[1]->ChildNodes->Add(TmpNode);

  //Cat: InternetCon
  TmpNode->NodeName = "contype";
  TmpNode->Text = "1";
  TurkeySettingsRoot->ChildNodes->Nodes[2]->ChildNodes->Add(TmpNode);

  //The Settings Root is created, add it to the document.
  XMLSettings->ChildNodes->Add(TurkeySettingsRoot);

  //Save it!
  XMLSettings->SaveToFile("settings.xml");

 }

 //Step 2: Setup the Location List pointers */

 Form1->SourcesNode = Form1->NavMenu->Items->Item[0];
 Form1->FeedDBNode = Form1->NavMenu->Items->Item[1];
 Form1->PopFeedsNode = Form1->NavMenu->Items->Item[2];

 //Step 3: Build the Source List data

 //Later in development there will be a loop here
 //to load sources from a config file...

 Form1->TurkeySources.AddSource("C|Net News", "http://news.com.com/2547-1_3-0-20.xml");
 Form1->TurkeySources.AddSource("CompTeks.net", "http://forums.compteks.net/ssi.php?a=out&f=6&show=10&type=rss");

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

