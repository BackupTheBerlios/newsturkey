//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit3.h"

//Class: TArticle------------------------------------------------------------

void __fastcall TArticle::BrowseToMe( TCppWebBrowser* Browser )
{
 wchar_t temp;

 Browser->Navigate(this->Link.WideChar(&temp, this->Link.WideCharBufSize()), NULL, NULL, NULL, NULL);
}

//Class: TArticles-----------------------------------------------------------

__fastcall TArticles::TArticles()
{
 //vector<TArticle> Article;
}

TArticle* __fastcall TArticles::Add(const AnsiString Title, const AnsiString Desc, const AnsiString Link)
{
 TArticle artToAdd;

 artToAdd.Title = Title;
 artToAdd.Description = Desc;
 artToAdd.Link = Link;

 Article.push_back( artToAdd );

 return &Article.back();
}

/*void __fastcall TArticles::Delete(TArticle* Target)
{

} */

/*TArticle* __fastcall TArticles::GetHandle(int id)
{
 if(id < this->count) {
  return this->Article[id];
 } else {
  return NULL;
 }
}*/

//Class: TSources------------------------------------------------------------

TSource* __fastcall TSources::AddSource(AnsiString Name, AnsiString Location)
{
 TSource srcToAdd;
 TTreeNode* NewlyAddedNode;

 srcToAdd.Name = Name;
 srcToAdd.Location = Location;

 Source.push_back(srcToAdd);

 NewlyAddedNode = Form1->NavMenu->Items->AddChild(Form1->SourcesNode, Name);

 NewlyAddedNode->ImageIndex = -1;
 NewlyAddedNode->SelectedIndex = -1;
 NewlyAddedNode->StateIndex = -1;

 return &Source.back();
}

/*void __fastcall TSources::DeleteSource(int id)
{
 int i;

 if(id == this->count--)
 {
  free( this->Source[id] );
 } else {

  for(i=id; i < this->count;i++)
  {
   memmove( this->Source[i], this->Source[i++], sizeof( TSource ) );
  }

  free( this->Source[id] );
 }

 this->count--;
} */

/*void __fastcall TSources::DeleteSource(TSource* Target)
{
 int tmp;

 tmp = Target->id;

 DeleteSource(tmp);
} */

/*TSource* __fastcall TSources::GetSource(int id)
{
 return this->Source[id];
} */

//---------------------------------------------------------------------------

#pragma package(smart_init)
