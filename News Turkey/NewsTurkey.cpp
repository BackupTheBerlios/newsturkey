//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", frmSettings);
USEFORM("Unit4.cpp", frmNewSource);
USEFORM("Unit5.cpp", frmSplash);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "News Turkey";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TfrmSettings), &frmSettings);
                 Application->CreateForm(__classid(TfrmNewSource), &frmNewSource);
                 Application->CreateForm(__classid(TfrmSplash), &frmSplash);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
