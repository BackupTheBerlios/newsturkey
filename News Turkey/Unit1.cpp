//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma link "TB2Dock"
#pragma link "TB2Item"
#pragma link "TB2Toolbar"
#pragma link "TB2ToolWindow"
#pragma link "TB2ExtItems"
#pragma link "TBX"
#pragma link "TBXSwitcher"
#pragma link "TB2Dock"
#pragma link "TB2ExtItems"
#pragma link "TB2Item"
#pragma link "TB2Toolbar"
#pragma link "TBXStatusBars"
#pragma link "TBXDkPanels"
#pragma link "abfComponents"
#pragma link "abfComponents"
#pragma link "TB2Dock"
#pragma link "TB2ExtItems"
#pragma link "TB2Item"
#pragma link "TB2Toolbar"
#pragma link "TBX"
#pragma link "TBXDkPanels"
#pragma link "TBXExtItems"
#pragma link "TBXStatusBars"
#pragma link "TBXSwitcher"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
 CppWebBrowser1->GoHome();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CppWebBrowser1ProgressChange(TObject *Sender,
      long Progress, long ProgressMax)
{
 /* long a;
 unsigned long b;
 AnsiString c;

 if(Progress > 0) {
  a = Progress*100;
  b = a/ProgressMax;

  sbStatus->Panels->Items[1]->Text = c.sprintf("%ld%%", b);
 } else {
  sbStatus->Panels->Items[1]->Text = "";
 } */

 pbProgress->Max = ProgressMax;
 pbProgress->Position = Progress;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Exit1Click(TObject *Sender)
{
 exit(0);        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ListSources()
{
 _di_IXMLNode ItemNode;
 _di_IXMLNode DataNode;
 int i;

 ItemNode = RSSChannel->ChildNodes->FindNode("item");

 while(ItemNode != NULL)
 {
  DataNode = ItemNode->ChildNodes->FindNode("title");
  ArticleList->AddItem(DataNode->Text, NULL);
  ItemNode = RSSChannel->ChildNodes->FindSibling(ItemNode, 1);
 }
}
//----------------------------------------------------------------------------

void __fastcall TForm1::XMLDocAfterOpen(TObject *Sender)
{
 RSSRoot = XMLDoc->ChildNodes->FindNode("rss");
 if(RSSRoot == NULL) {
    Application->MessageBoxA("Document is not a valid RSS file. Sorry.", "Error", NULL);
    XMLDoc->Active = FALSE;
    return;
 }

 RSSChannel = RSSRoot->ChildNodes->FindNode("channel");
 pbProgress->Position++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TBItem1Click(TObject *Sender)
{
 _di_IXMLNode ANode;
 AnsiString fname;

 ArticleList->Clear();

 if(XMLDoc->FileName == NULL) {
  Application->MessageBoxA("News Turkey can't get news unless a source to get news from is selected.", "News Turkey Error", NULL);
  return;
 }

 XMLDoc->Active = TRUE;

 if(XMLDoc->Active == FALSE) { //This is to predvent Access Violations if there is a problem parsing the file
  return;
 }

 ListSources();

 ANode = RSSChannel->ChildNodes->FindNode("title");

 if(DirectoryExists(ANode->Text) == FALSE) {
  CreateDir(ANode->Text);
 }

 XMLDoc->SaveToFile(fname.sprintf("CNET News.com - Front Door\\feed.xml"));

 XMLDoc->Active = FALSE;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArticleListDblClick(TObject *Sender)
{
 TListItem *SelectedNode;
 _di_IXMLNode BNode;
 _di_IXMLNode CNode;
 _di_IXMLNode ANode;


 SelectedNode = ArticleList->Selected;

 XMLDoc->Active = TRUE;

 if(SelectedNode->Index >= 0) {
  ANode = RSSChannel->ChildNodes->FindNode("item");
  BNode = RSSChannel->ChildNodes->FindSibling(ANode, SelectedNode->Index);
  CNode = BNode->ChildNodes->FindNode("link");

  //NOTE: CNode is coming up null... I need to figure out why
  if(CNode != NULL) {
   CppWebBrowser1->Navigate(CNode->Text.c_bstr(), NULL, NULL, NULL, NULL);
  } else {
   Application->MessageBoxA("CNode Null", "Error", NULL);
  }
 }

 XMLDoc->Active = FALSE;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Settings1Click(TObject *Sender)
{
 frmSettings->Show();
 frmSettings->PageControl1->ActivePageIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1_OLDClick(TObject *Sender)
{
 exit(0);        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TBEditItem1Click(TObject *Sender)
{
//if(TBEditItem1->Text == "Search Query Here") {
  //TBEditItem1->Text = "";
 //}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnStopClick(TObject *Sender)
{
 CppWebBrowser1->Stop();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnForwardClick(TObject *Sender)
{
 CppWebBrowser1->GoForward();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnBackClick(TObject *Sender)
{
 CppWebBrowser1->GoBack();        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::opNewSrcClick(TObject *Sender)
{
 frmNewSource->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NavMenuChange(TObject *Sender, TTreeNode *Node)
{
 TSource newSrc;

 if(Node->Parent == SourcesNode) {
  ArticleList->Clear();

  newSrc = TurkeySources.Source.at(Node->Index);

  XMLDoc->FileName = newSrc.Location;

 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::opAboutClick(TObject *Sender)
{
 frmSettings->Show();
 frmSettings->PageControl1->ActivePageIndex = 4;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XMLDocBeforeOpen(TObject *Sender)
{
 StatusBar->Panels->Items[0]->Caption = "Parsing XML File...";
 pbProgress->Max = 4;
 pbProgress->Position = 1;      
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XMLDocBeforeClose(TObject *Sender)
{
 pbProgress->Position++;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XMLDocAfterClose(TObject *Sender)
{
 pbProgress->Position = 0;
 StatusBar->Panels->Items[0]->Caption = "Done.";
}
//---------------------------------------------------------------------------


