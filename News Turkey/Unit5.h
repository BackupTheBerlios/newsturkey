//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "Unit1.h"
#include <msxmldom.hpp>
#include <XMLDoc.hpp>
#include <xmldom.hpp>
#include <XMLIntf.hpp>
#include "Unit1.h"
//---------------------------------------------------------------------------
class TfrmSplash : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *lblStatus;
        TProgressBar *ProgressBar1;
        TTimer *StartDelay;
        TTimer *CloseDelay;
        TXMLDocument *XMLSettings;
        void __fastcall CloseDelayTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmSplash(TComponent* Owner);
        int __fastcall LoadSettings();
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSplash *frmSplash;
//---------------------------------------------------------------------------
#endif
