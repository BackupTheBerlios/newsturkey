//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include "SHDocVw_OCX.h"
#include <Menus.hpp>
#include <OleCtrls.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <ExtCtrls.hpp>
#include <msxmldom.hpp>
#include <XMLDoc.hpp>
#include <xmldom.hpp>
#include <XMLIntf.hpp>
#include "TB2Dock.hpp"
#include "TB2Item.hpp"
#include "TB2Toolbar.hpp"
#include "TB2ToolWindow.hpp"
#include "Unit2.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TStatusBar *sbStatus;
        TCppWebBrowser *CppWebBrowser1;
        TXMLDocument *XMLDoc;
        TPanel *Panel1;
        TMainMenu *MainMenu1;
        TMenuItem *File1_OLD;
        TMenuItem *Exit1_OLD;
        TTBPopupMenu *TBPopupMenu1;
        TTBItem *TBItem1;
        TTreeView *NavMenu;
        TImageList *ImageList1;
        TListView *ArticleList;
        TImageList *ImageList2;
        TMenuItem *Settings1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall CppWebBrowser1ProgressChange(TObject *Sender,
          long Progress, long ProgressMax);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall XMLDocAfterOpen(TObject *Sender);
        void __fastcall TBItem1Click(TObject *Sender);
        void __fastcall ArticleListDblClick(TObject *Sender);
        void __fastcall Settings1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void __fastcall ListSources();
        _di_IXMLNode RSSRoot;
        _di_IXMLNode RSSChannel;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
