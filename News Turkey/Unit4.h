//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
class TfrmNewSource : public TForm
{
__published:	// IDE-managed Components
        TImage *Image2;
        TLabel *Label1;
        TImage *Image1;
        TPanel *pStage1;
        TButton *Cancel;
        TButton *btnOK;
        TLabel *Label2;
        TEdit *txtSrc;
        TLabel *Label3;
        TLabel *Label4;
        TPanel *pStage2;
        TLabel *Label5;
        TEdit *txtSrcName;
        void __fastcall btnOKClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmNewSource(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmNewSource *frmNewSource;
//---------------------------------------------------------------------------
#endif
