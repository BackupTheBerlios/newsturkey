//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H

#include <Classes.hpp>
#include "SHDocVw_OCX.h"
#include <XMLDoc.hpp>
#include <vector>
using namespace std;

class TArticle {

public:
        int id;
        AnsiString Title;
        AnsiString Link;
        AnsiString Description;
        void __fastcall BrowseToMe( TCppWebBrowser* Browser );

};

class TArticles {
        public:
                int count;
                vector<TArticle> Article;
                __fastcall TArticles();
                TArticle* __fastcall Add(const AnsiString Title, const AnsiString Desc, const AnsiString Link);
                void __fastcall Delete(TArticle* Target);
                TArticle* __fastcall GetHandle(int id);
};

class TSource {
        public:
                AnsiString Name;
                AnsiString Location;
                int id;
                TArticles Articles;
};

class TSources {
        public:
                int count;
                vector<TSource> Source;
                TSource* __fastcall AddSource(AnsiString Name, AnsiString Link);
                void __fastcall DeleteSource(int id);
                void __fastcall DeleteSource(TSource* Target);
                TSource* __fastcall GetSource(int id);
};


//Aparantly Borland's Compiler does not pay
//as much attention to #ifndef compiler directives
//as I thought... this is why this needs to be
//included after TSources is defined... gotta love BCC
#include "Unit1.h"
//---------------------------------------------------------------------------
#endif
