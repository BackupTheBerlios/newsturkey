//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H

#include <Classes.hpp>
#include "SHDocVw_OCX.h"
#include <XMLDoc.hpp>

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
                TArticle* Article[];
                int count;
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
                TSource* Source[];
                TSource* __fastcall AddSource(AnsiString Name, AnsiString Link);
                void __fastcall DeleteSource(int id);
                void __fastcall DeleteSource(TSource* Target);
                TSource* __fastcall GetSource(int id);
};
//---------------------------------------------------------------------------
#endif
