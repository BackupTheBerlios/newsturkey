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
#include "abfComponents.hpp"
#include "TB2Dock.hpp"
#include "TB2ExtItems.hpp"
#include "TB2Item.hpp"
#include "TB2Toolbar.hpp"
#include "TBX.hpp"
#include "TBXDkPanels.hpp"
#include "TBXExtItems.hpp"
#include "TBXStatusBars.hpp"
#include "TBXSwitcher.hpp"
#include <AppEvnts.hpp>
#include <Registry.hpp>
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "TBXExtItems.hpp"
#include "TBX.hpp"
#include "TBXSwitcher.hpp"
#include "TB2Dock.hpp"
#include "TB2ExtItems.hpp"
#include "TB2Item.hpp"
#include "TB2Toolbar.hpp"
#include "TBXStatusBars.hpp"
#include "TBXDkPanels.hpp"
#include "abfComponents.hpp"
#include <AppEvnts.hpp>
#pragma link "TBXOfficeXPTheme"
#pragma include "TBXOfficeXPTheme.pas"
#include "Unit3.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TCppWebBrowser *CppWebBrowser1;
        TXMLDocument *XMLDoc;
        TPanel *Panel1;
        TTBXPopupMenu *TBPopupMenu1;
        TTBXItem *TBItem1;
        TTreeView *NavMenu;
        TImageList *ImageList1;
        TListView *ArticleList;
        TProgressBar *pbProgress;
        TImageList *ImageList2;
        TTBXStatusBar *StatusBar;
        TTBXSwitcher *TBXSwitcher1;
        TTBXDock *TBXDock1;
        TTBXToolbar *TBXToolbar1;
        TTBXSubmenuItem *mnuFile;
        TTBXItem *opNewSrc;
        TTBXItem *opExit;
        TTBXSubmenuItem *mnuTools;
        TTBXSubmenuItem *mnuHelp;
        TTBXItem *opOps;
        TTBXItem *opHelpFile;
        TTBXItem *opAbout;
        TTBXToolbar *TBXToolbar2;
        TTBXItem *btnNewSrc;
        TTBXItem *btnOps;
        TTBXItem *btnAbout;
        TTBXSeparatorItem *TBXSeparatorItem1;
        TTBXSeparatorItem *TBXSeparatorItem2;
        TTBXToolbar *TBXToolbar3;
        TTBXItem *btnBack;
        TTBXItem *btnForward;
        TTBXItem *btnStop;
        TTBXToolbar *TBXToolbar4;
        TTBXLabelItem *TBXLabelItem1;
        TTBXEditItem *txtRSSDBQuery;
        TTBXSeparatorItem *TBXSeparatorItem3;
        TTBXItem *btnSearchRSSDB;
        TTBXLink *TBXLink1;
        TabfOneInstance *abfOneInstance1;
        TImageList *MnuImgs;
        TabfTrayIcon *TrayIcon;
        TTBXPopupMenu *TaskbarPopupMnu;
        TTBXItem *TBXItem1;
        TTBXItem *TBXItem2;
        TTBXItem *TBXItem3;
        TTBXLabelItem *TBXLabelItem2;
        TApplicationEvents *ApplicationEvents1;
        TXMLDocument *ProgramUpdateChecker;
        TXMLDocument *SettingsFileManager;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall CppWebBrowser1ProgressChange(TObject *Sender,
          long Progress, long ProgressMax);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall XMLDocAfterOpen(TObject *Sender);
        void __fastcall TBItem1Click(TObject *Sender);
        void __fastcall ArticleListDblClick(TObject *Sender);
        void __fastcall Settings1Click(TObject *Sender);
        void __fastcall Exit1_OLDClick(TObject *Sender);
        void __fastcall TBEditItem1Click(TObject *Sender);
        void __fastcall btnStopClick(TObject *Sender);
        void __fastcall btnForwardClick(TObject *Sender);
        void __fastcall btnBackClick(TObject *Sender);
        void __fastcall opNewSrcClick(TObject *Sender);
        void __fastcall NavMenuChange(TObject *Sender, TTreeNode *Node);
        void __fastcall opAboutClick(TObject *Sender);
        void __fastcall XMLDocBeforeOpen(TObject *Sender);
        void __fastcall XMLDocBeforeClose(TObject *Sender);
        void __fastcall XMLDocAfterClose(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void __fastcall ListSources();
        _di_IXMLNode RSSRoot;
        _di_IXMLNode RSSChannel;
        TSources TurkeySources;
        TTreeNode* SourcesNode;
        TTreeNode* FeedDBNode;
        TTreeNode* PopFeedsNode;
        NTSettingsDB TurkeySettings;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
