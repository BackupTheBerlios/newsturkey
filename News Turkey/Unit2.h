//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include "Unit4.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
class TfrmSettings : public TForm
{
__published:	// IDE-managed Components
        TButton *btnOK;
        TButton *btnCancel;
        TButton *btnApply;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TTabSheet *TabSheet4;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label5;
        TGroupBox *GroupBox1;
        TCheckBox *chkSplash;
        TCheckBox *chkAutoStart;
        TCheckBox *chkStartRefresh;
        TGroupBox *GroupBox2;
        TCheckBox *chkEnableRSSDB;
        TCheckBox *chkEnableInstantAdd;
        TGroupBox *GroupBox3;
        TCheckBox *chkAnimateTaskbar;
        TCheckBox *chkWhales;
        TTabSheet *TabSheet5;
        TLabel *Label6;
        TMemo *Memo1;
        TLabel *Label7;
        TGroupBox *GroupBox4;
        TListView *lvSourceCfg;
        TButton *btnAddSource;
        TButton *btnRemoveSource;
        TGroupBox *GroupBox5;
        TCheckBox *btnEnableWebAdd;
        TCheckBox *btnAutoNames;
        TGroupBox *GroupBox6;
        TRadioButton *rDialUp;
        TRadioButton *rBroadband;
        TMemo *Memo2;
        void __fastcall btnCancelClick(TObject *Sender);
        void __fastcall btnAddSourceClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmSettings(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSettings *frmSettings;
//---------------------------------------------------------------------------
#endif
