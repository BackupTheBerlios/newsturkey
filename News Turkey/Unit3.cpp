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

TArticle* __fastcall TArticles::Add(const AnsiString Title, const AnsiString Desc, const AnsiString Link)
{

 this->Article[this->count] = (TArticle *) malloc( sizeof( TArticle ) );

 if(this->Article[this->count] == NULL) {
  return NULL;
 }

 this->Article[this->count]->Title = Title;
 this->Article[this->count]->Description = Desc;
 this->Article[this->count]->Link = Link;

 this->count++;

 return this->Article[this->count--];
}

void __fastcall TArticles::Delete(TArticle* Target)
{
 int tmp;
 int i=0;

 tmp = Target->id;

 if( tmp == this->count-- ) {
  free( this->Article[tmp] );
 } else {

  for(i=tmp;i < this->count; i++)
  {
   memmove( this->Article[i], this->Article[i++], sizeof( TArticle ) );
  }

  free( this->Article[tmp] );
 }

 this->count--;
}

TArticle* __fastcall TArticles::GetHandle(int id)
{
 if(id < this->count) {
  return this->Article[id];
 } else {
  return NULL;
 }
}

//Class: TSources------------------------------------------------------------

TSource* __fastcall TSources::AddSource(AnsiString Name, AnsiString Location)
{
 this->Source[this->count] = (TSource *) malloc( sizeof(TSource) );

 if( this->Source[this->count] == NULL ) {
  return NULL;
 }

 this->Source[this->count]->Name = Name;
 this->Source[this->count]->Location = Location;
 this->Source[this->count]->id = this->count;

 this->count++;

 return this->Source[this->count--];
}

void __fastcall TSources::DeleteSource(int id)
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
}

void __fastcall TSources::DeleteSource(TSource* Target)
{
 int tmp;

 tmp = Target->id;

 DeleteSource(tmp);
}

TSource* __fastcall TSources::GetSource(int id)
{
 return this->Source[id];
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
