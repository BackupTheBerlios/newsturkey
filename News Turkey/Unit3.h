//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H

#include <Classes.hpp>

__declspec(delphiclass) class TArticle {

public:
        AnsiString Title;
        AnsiString Link;

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
                TSource* Source[];
                //TSource* __fastcall AddSource(TXMLDocument* XDC);
                void __fastcall DeleteSource(int id);
                void __fastcall DeleteSource(TSource* Target);
                TSource* __fastcall GetSource(int id);
};
//---------------------------------------------------------------------------
#endif
