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
 RSSChannel = RSSRoot->ChildNodes->FindNode("channel");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TBItem1Click(TObject *Sender)
{
 _di_IXMLNode ANode;
 AnsiString fname;

 ArticleList->Clear();

 XMLDoc->Active = TRUE;
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
 if(Node->Parent == SourcesNode) {
  ArticleList->Clear();

  if(Node->Index == 0) {
   XMLDoc->FileName = "http://news.com.com/2547-1_3-0-20.xml";
  } else if(Node->Index == 1) {
   XMLDoc->FileName = "http://gaim.sourceforge.net/rss.php/news";
  }

 }
}
//---------------------------------------------------------------------------

