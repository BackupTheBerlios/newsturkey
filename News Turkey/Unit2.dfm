object frmSettings: TfrmSettings
  Left = 197
  Top = 131
  BorderStyle = bsSingle
  Caption = 'News Turkey Settings'
  ClientHeight = 406
  ClientWidth = 407
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object btnOK: TButton
    Left = 96
    Top = 376
    Width = 97
    Height = 25
    Caption = 'OK'
    TabOrder = 0
  end
  object btnCancel: TButton
    Left = 200
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Cancel'
    TabOrder = 1
    OnClick = btnCancelClick
  end
  object btnApply: TButton
    Left = 304
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Apply'
    TabOrder = 2
    OnClick = btnApplyClick
  end
  object PageControl1: TPageControl
    Left = 8
    Top = 8
    Width = 393
    Height = 361
    ActivePage = TabSheet4
    TabIndex = 4
    TabOrder = 3
    object TabSheet1: TTabSheet
      Caption = 'General'
      object Label7: TLabel
        Left = 40
        Top = 8
        Width = 310
        Height = 13
        Caption = 
          'NOTE: This settings screen does not work yet, it will soon thoug' +
          'h.'
        Enabled = False
      end
      object GroupBox1: TGroupBox
        Left = 8
        Top = 32
        Width = 369
        Height = 97
        Caption = 'Start Up'
        TabOrder = 0
        object chkSplash: TCheckBox
          Left = 8
          Top = 24
          Width = 201
          Height = 17
          Caption = 'Enable Splash Screen'
          TabOrder = 0
        end
        object chkAutoStart: TCheckBox
          Left = 8
          Top = 48
          Width = 185
          Height = 17
          Caption = 'Start News Turkey with Windows'
          TabOrder = 1
        end
        object chkStartRefresh: TCheckBox
          Left = 8
          Top = 72
          Width = 329
          Height = 17
          Caption = 'Automatically refresh all feeds on startup'
          TabOrder = 2
        end
      end
      object GroupBox2: TGroupBox
        Left = 8
        Top = 136
        Width = 369
        Height = 73
        Caption = 'Source Management'
        TabOrder = 1
        object chkEnableRSSDB: TCheckBox
          Left = 8
          Top = 24
          Width = 345
          Height = 17
          Caption = 'Enable using the RSSDirectory to find feeds'
          TabOrder = 0
        end
        object chkEnableInstantAdd: TCheckBox
          Left = 8
          Top = 48
          Width = 281
          Height = 17
          Caption = 'Enable Instant Add (might require reboot to take effect)'
          TabOrder = 1
        end
      end
      object GroupBox3: TGroupBox
        Left = 8
        Top = 216
        Width = 369
        Height = 105
        Caption = 'Misc.'
        TabOrder = 2
        object chkAnimateTaskbar: TCheckBox
          Left = 8
          Top = 24
          Width = 321
          Height = 17
          Caption = 'Animate Taskbar Icon when new information is avalible'
          TabOrder = 0
        end
        object chkWhales: TCheckBox
          Left = 8
          Top = 48
          Width = 297
          Height = 17
          Caption = 'Save the Whales :-)'
          TabOrder = 1
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Sources'
      ImageIndex = 1
      object GroupBox4: TGroupBox
        Left = 8
        Top = 8
        Width = 369
        Height = 137
        Caption = 'Sources'
        TabOrder = 0
        object lvSourceCfg: TListView
          Left = 8
          Top = 16
          Width = 353
          Height = 81
          Columns = <
            item
              AutoSize = True
              Caption = 'Source Name'
            end
            item
              Caption = 'Status'
              Width = 60
            end>
          TabOrder = 0
          ViewStyle = vsReport
        end
        object btnAddSource: TButton
          Left = 8
          Top = 104
          Width = 169
          Height = 25
          Caption = 'Add Source'
          TabOrder = 1
          OnClick = btnAddSourceClick
        end
        object btnRemoveSource: TButton
          Left = 192
          Top = 104
          Width = 169
          Height = 25
          Caption = 'Remove Source'
          Enabled = False
          TabOrder = 2
        end
      end
      object GroupBox5: TGroupBox
        Left = 8
        Top = 152
        Width = 369
        Height = 73
        Caption = 'Source Options'
        TabOrder = 1
        object chkEnableWebAdd: TCheckBox
          Left = 16
          Top = 24
          Width = 329
          Height = 17
          Caption = 'Enable Web Add'
          TabOrder = 0
        end
        object chkAutoNames: TCheckBox
          Left = 16
          Top = 48
          Width = 345
          Height = 17
          Caption = 'Automatically Detect Source Names'
          TabOrder = 1
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Internet Connection'
      ImageIndex = 2
      object GroupBox6: TGroupBox
        Left = 8
        Top = 8
        Width = 369
        Height = 89
        Caption = 'Internet Connection'
        TabOrder = 0
        object rDialUp: TRadioButton
          Left = 8
          Top = 24
          Width = 345
          Height = 17
          Caption = 
            'I Dial-Up to the Internet via a modem. My connection isn'#39't alway' +
            's on.'
          TabOrder = 0
        end
        object rBroadband: TRadioButton
          Left = 8
          Top = 48
          Width = 353
          Height = 17
          Caption = 'I have a Broadband/LAN internet connection that is always on.'
          TabOrder = 1
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'License'
      ImageIndex = 4
      object Label6: TLabel
        Left = 24
        Top = 0
        Width = 314
        Height = 13
        Caption = 'News Turkey is distributed under the GNU General Public License.'
        WordWrap = True
      end
      object Memo1: TMemo
        Left = 8
        Top = 16
        Width = 369
        Height = 305
        Lines.Strings = (
          #9#9'    GNU GENERAL PUBLIC LICENSE'
          #9#9'       Version 2, June 1991'
          ''
          ' Copyright (C) 1989, 1991 Free Software Foundation, Inc.'
          
            '                       59 Temple Place, Suite 330, Boston, MA  0' +
            '2111-1307  '
          'USA'
          ' Everyone is permitted to copy and distribute verbatim copies'
          ' of this license document, but changing it is not allowed.'
          ''
          #9#9#9'    Preamble'
          ''
          '  The licenses for most software are designed to take away your'
          
            'freedom to share and change it.  By contrast, the GNU General Pu' +
            'blic'
          
            'License is intended to guarantee your freedom to share and chang' +
            'e free'
          
            'software--to make sure the software is free for all its users.  ' +
            'This'
          'General Public License applies to most of the Free Software'
          
            'Foundation'#39's software and to any other program whose authors com' +
            'mit to'
          
            'using it.  (Some other Free Software Foundation software is cove' +
            'red by'
          
            'the GNU Library General Public License instead.)  You can apply ' +
            'it to'
          'your programs, too.'
          ''
          
            '  When we speak of free software, we are referring to freedom, n' +
            'ot'
          
            'price.  Our General Public Licenses are designed to make sure th' +
            'at you'
          
            'have the freedom to distribute copies of free software (and char' +
            'ge for'
          
            'this service if you wish), that you receive source code or can g' +
            'et it'
          
            'if you want it, that you can change the software or use pieces o' +
            'f it'
          'in new free programs; and that you know you can do these things.'
          ''
          
            '  To protect your rights, we need to make restrictions that forb' +
            'id'
          
            'anyone to deny you these rights or to ask you to surrender the r' +
            'ights.'
          
            'These restrictions translate to certain responsibilities for you' +
            ' if you'
          'distribute copies of the software, or if you modify it.'
          ''
          
            '  For example, if you distribute copies of such a program, wheth' +
            'er'
          
            'gratis or for a fee, you must give the recipients all the rights' +
            ' that'
          
            'you have.  You must make sure that they, too, receive or can get' +
            ' the'
          
            'source code.  And you must show them these terms so they know th' +
            'eir'
          'rights.'
          ''
          
            '  We protect your rights with two steps: (1) copyright the softw' +
            'are, and'
          
            '(2) offer you this license which gives you legal permission to c' +
            'opy,'
          'distribute and/or modify the software.'
          ''
          
            '  Also, for each author'#39's protection and ours, we want to make c' +
            'ertain'
          
            'that everyone understands that there is no warranty for this fre' +
            'e'
          
            'software.  If the software is modified by someone else and passe' +
            'd on, we'
          
            'want its recipients to know that what they have is not the origi' +
            'nal, so'
          
            'that any problems introduced by others will not reflect on the o' +
            'riginal'
          'authors'#39' reputations.'
          ''
          '  Finally, any free program is threatened constantly by software'
          
            'patents.  We wish to avoid the danger that redistributors of a f' +
            'ree'
          
            'program will individually obtain patent licenses, in effect maki' +
            'ng the'
          
            'program proprietary.  To prevent this, we have made it clear tha' +
            't any'
          
            'patent must be licensed for everyone'#39's free use or not licensed ' +
            'at all.'
          ''
          '  The precise terms and conditions for copying, distribution and'
          'modification follow.'
          #12
          #9#9'    GNU GENERAL PUBLIC LICENSE'
          '   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND '
          'MODIFICATION'
          ''
          
            '  0. This License applies to any program or other work which con' +
            'tains'
          
            'a notice placed by the copyright holder saying it may be distrib' +
            'uted'
          
            'under the terms of this General Public License.  The "Program", ' +
            'below,'
          
            'refers to any such program or work, and a "work based on the Pro' +
            'gram"'
          
            'means either the Program or any derivative work under copyright ' +
            'law:'
          
            'that is to say, a work containing the Program or a portion of it' +
            ','
          
            'either verbatim or with modifications and/or translated into ano' +
            'ther'
          
            'language.  (Hereinafter, translation is included without limitat' +
            'ion in'
          'the term "modification".)  Each licensee is addressed as "you".'
          ''
          
            'Activities other than copying, distribution and modification are' +
            ' not'
          'covered by this License; they are outside its scope.  The act of'
          
            'running the Program is not restricted, and the output from the P' +
            'rogram'
          'is covered only if its contents constitute a work based on the'
          
            'Program (independent of having been made by running the Program)' +
            '.'
          'Whether that is true depends on what the Program does.'
          ''
          
            '  1. You may copy and distribute verbatim copies of the Program'#39 +
            's'
          'source code as you receive it, in any medium, provided that you'
          
            'conspicuously and appropriately publish on each copy an appropri' +
            'ate'
          'copyright notice and disclaimer of warranty; keep intact all the'
          
            'notices that refer to this License and to the absence of any war' +
            'ranty;'
          
            'and give any other recipients of the Program a copy of this Lice' +
            'nse'
          'along with the Program.'
          ''
          
            'You may charge a fee for the physical act of transferring a copy' +
            ', and'
          
            'you may at your option offer warranty protection in exchange for' +
            ' a fee.'
          ''
          
            '  2. You may modify your copy or copies of the Program or any po' +
            'rtion'
          'of it, thus forming a work based on the Program, and copy and'
          
            'distribute such modifications or work under the terms of Section' +
            ' 1'
          'above, provided that you also meet all of these conditions:'
          ''
          
            '    a) You must cause the modified files to carry prominent noti' +
            'ces'
          
            '    stating that you changed the files and the date of any chang' +
            'e.'
          ''
          
            '    b) You must cause any work that you distribute or publish, t' +
            'hat in'
          
            '    whole or in part contains or is derived from the Program or ' +
            'any'
          
            '    part thereof, to be licensed as a whole at no charge to all ' +
            'third'
          '    parties under the terms of this License.'
          ''
          
            '    c) If the modified program normally reads commands interacti' +
            'vely'
          '    when run, you must cause it, when started running for such'
          
            '    interactive use in the most ordinary way, to print or displa' +
            'y an'
          '    announcement including an appropriate copyright notice and a'
          
            '    notice that there is no warranty (or else, saying that you p' +
            'rovide'
          
            '    a warranty) and that users may redistribute the program unde' +
            'r'
          
            '    these conditions, and telling the user how to view a copy of' +
            ' this'
          
            '    License.  (Exception: if the Program itself is interactive b' +
            'ut'
          
            '    does not normally print such an announcement, your work base' +
            'd on'
          '    the Program is not required to print an announcement.)'
          #12
          'These requirements apply to the modified work as a whole.  If'
          
            'identifiable sections of that work are not derived from the Prog' +
            'ram,'
          
            'and can be reasonably considered independent and separate works ' +
            'in'
          
            'themselves, then this License, and its terms, do not apply to th' +
            'ose'
          
            'sections when you distribute them as separate works.  But when y' +
            'ou'
          
            'distribute the same sections as part of a whole which is a work ' +
            'based'
          
            'on the Program, the distribution of the whole must be on the ter' +
            'ms of'
          
            'this License, whose permissions for other licensees extend to th' +
            'e'
          
            'entire whole, and thus to each and every part regardless of who ' +
            'wrote it.'
          ''
          
            'Thus, it is not the intent of this section to claim rights or co' +
            'ntest'
          
            'your rights to work written entirely by you; rather, the intent ' +
            'is to'
          'exercise the right to control the distribution of derivative or'
          'collective works based on the Program.'
          ''
          
            'In addition, mere aggregation of another work not based on the P' +
            'rogram'
          
            'with the Program (or with a work based on the Program) on a volu' +
            'me of'
          
            'a storage or distribution medium does not bring the other work u' +
            'nder'
          'the scope of this License.'
          ''
          
            '  3. You may copy and distribute the Program (or a work based on' +
            ' it,'
          
            'under Section 2) in object code or executable form under the ter' +
            'ms of'
          
            'Sections 1 and 2 above provided that you also do one of the foll' +
            'owing:'
          ''
          
            '    a) Accompany it with the complete corresponding machine-read' +
            'able'
          
            '    source code, which must be distributed under the terms of Se' +
            'ctions'
          
            '    1 and 2 above on a medium customarily used for software inte' +
            'rchange; '
          'or,'
          ''
          
            '    b) Accompany it with a written offer, valid for at least thr' +
            'ee'
          
            '    years, to give any third party, for a charge no more than yo' +
            'ur'
          
            '    cost of physically performing source distribution, a complet' +
            'e'
          
            '    machine-readable copy of the corresponding source code, to b' +
            'e'
          
            '    distributed under the terms of Sections 1 and 2 above on a m' +
            'edium'
          '    customarily used for software interchange; or,'
          ''
          
            '    c) Accompany it with the information you received as to the ' +
            'offer'
          
            '    to distribute corresponding source code.  (This alternative ' +
            'is'
          '    allowed only for noncommercial distribution and only if you'
          
            '    received the program in object code or executable form with ' +
            'such'
          '    an offer, in accord with Subsection b above.)'
          ''
          
            'The source code for a work means the preferred form of the work ' +
            'for'
          
            'making modifications to it.  For an executable work, complete so' +
            'urce'
          
            'code means all the source code for all modules it contains, plus' +
            ' any'
          'associated interface definition files, plus the scripts used to'
          
            'control compilation and installation of the executable.  However' +
            ', as a'
          'special exception, the source code distributed need not include'
          
            'anything that is normally distributed (in either source or binar' +
            'y'
          
            'form) with the major components (compiler, kernel, and so on) of' +
            ' the'
          
            'operating system on which the executable runs, unless that compo' +
            'nent'
          'itself accompanies the executable.'
          ''
          'If distribution of executable or object code is made by offering'
          'access to copy from a designated place, then offering equivalent'
          'access to copy the source code from the same place counts as'
          
            'distribution of the source code, even though third parties are n' +
            'ot'
          'compelled to copy the source along with the object code.'
          #12
          
            '  4. You may not copy, modify, sublicense, or distribute the Pro' +
            'gram'
          'except as expressly provided under this License.  Any attempt'
          
            'otherwise to copy, modify, sublicense or distribute the Program ' +
            'is'
          
            'void, and will automatically terminate your rights under this Li' +
            'cense.'
          
            'However, parties who have received copies, or rights, from you u' +
            'nder'
          
            'this License will not have their licenses terminated so long as ' +
            'such'
          'parties remain in full compliance.'
          ''
          
            '  5. You are not required to accept this License, since you have' +
            ' not'
          
            'signed it.  However, nothing else grants you permission to modif' +
            'y or'
          
            'distribute the Program or its derivative works.  These actions a' +
            're'
          
            'prohibited by law if you do not accept this License.  Therefore,' +
            ' by'
          'modifying or distributing the Program (or any work based on the'
          
            'Program), you indicate your acceptance of this License to do so,' +
            ' and'
          
            'all its terms and conditions for copying, distributing or modify' +
            'ing'
          'the Program or works based on it.'
          ''
          
            '  6. Each time you redistribute the Program (or any work based o' +
            'n the'
          
            'Program), the recipient automatically receives a license from th' +
            'e'
          
            'original licensor to copy, distribute or modify the Program subj' +
            'ect to'
          'these terms and conditions.  You may not impose any further'
          
            'restrictions on the recipients'#39' exercise of the rights granted h' +
            'erein.'
          
            'You are not responsible for enforcing compliance by third partie' +
            's to'
          'this License.'
          ''
          
            '  7. If, as a consequence of a court judgment or allegation of p' +
            'atent'
          
            'infringement or for any other reason (not limited to patent issu' +
            'es),'
          
            'conditions are imposed on you (whether by court order, agreement' +
            ' or'
          
            'otherwise) that contradict the conditions of this License, they ' +
            'do not'
          'excuse you from the conditions of this License.  If you cannot'
          
            'distribute so as to satisfy simultaneously your obligations unde' +
            'r this'
          
            'License and any other pertinent obligations, then as a consequen' +
            'ce you'
          'may not distribute the Program at all.  For example, if a patent'
          
            'license would not permit royalty-free redistribution of the Prog' +
            'ram by'
          
            'all those who receive copies directly or indirectly through you,' +
            ' then'
          
            'the only way you could satisfy both it and this License would be' +
            ' to'
          'refrain entirely from distribution of the Program.'
          ''
          
            'If any portion of this section is held invalid or unenforceable ' +
            'under'
          
            'any particular circumstance, the balance of the section is inten' +
            'ded to'
          'apply and the section as a whole is intended to apply in other'
          'circumstances.'
          ''
          
            'It is not the purpose of this section to induce you to infringe ' +
            'any'
          
            'patents or other property right claims or to contest validity of' +
            ' any'
          'such claims; this section has the sole purpose of protecting the'
          'integrity of the free software distribution system, which is'
          'implemented by public license practices.  Many people have made'
          'generous contributions to the wide range of software distributed'
          
            'through that system in reliance on consistent application of tha' +
            't'
          
            'system; it is up to the author/donor to decide if he or she is w' +
            'illing'
          
            'to distribute software through any other system and a licensee c' +
            'annot'
          'impose that choice.'
          ''
          
            'This section is intended to make thoroughly clear what is believ' +
            'ed to'
          'be a consequence of the rest of this License.'
          #12
          
            '  8. If the distribution and/or use of the Program is restricted' +
            ' in'
          
            'certain countries either by patents or by copyrighted interfaces' +
            ', the'
          
            'original copyright holder who places the Program under this Lice' +
            'nse'
          
            'may add an explicit geographical distribution limitation excludi' +
            'ng'
          
            'those countries, so that distribution is permitted only in or am' +
            'ong'
          
            'countries not thus excluded.  In such case, this License incorpo' +
            'rates'
          'the limitation as if written in the body of this License.'
          ''
          
            '  9. The Free Software Foundation may publish revised and/or new' +
            ' '
          'versions'
          
            'of the General Public License from time to time.  Such new versi' +
            'ons will'
          
            'be similar in spirit to the present version, but may differ in d' +
            'etail to'
          'address new problems or concerns.'
          ''
          
            'Each version is given a distinguishing version number.  If the P' +
            'rogram'
          
            'specifies a version number of this License which applies to it a' +
            'nd "any'
          
            'later version", you have the option of following the terms and c' +
            'onditions'
          
            'either of that version or of any later version published by the ' +
            'Free'
          
            'Software Foundation.  If the Program does not specify a version ' +
            'number '
          'of'
          
            'this License, you may choose any version ever published by the F' +
            'ree '
          'Software'
          'Foundation.'
          ''
          
            '  10. If you wish to incorporate parts of the Program into other' +
            ' free'
          
            'programs whose distribution conditions are different, write to t' +
            'he author'
          
            'to ask for permission.  For software which is copyrighted by the' +
            ' Free'
          'Software Foundation, write to the Free Software Foundation; we '
          'sometimes'
          
            'make exceptions for this.  Our decision will be guided by the tw' +
            'o goals'
          
            'of preserving the free status of all derivatives of our free sof' +
            'tware and'
          'of promoting the sharing and reuse of software generally.'
          ''
          #9#9#9'    NO WARRANTY'
          ''
          '  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, '
          'THERE IS NO WARRANTY'
          'FOR THE PROGRAM, TO THE EXTENT PERMITTED BY '
          'APPLICABLE LAW.  EXCEPT WHEN'
          'OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS '
          'AND/OR OTHER PARTIES'
          'PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY '
          'KIND, EITHER EXPRESSED'
          'OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED '
          'WARRANTIES OF'
          'MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  '
          'THE ENTIRE RISK AS'
          'TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH '
          'YOU.  SHOULD THE'
          'PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL '
          'NECESSARY SERVICING,'
          'REPAIR OR CORRECTION.'
          ''
          '  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR '
          'AGREED TO IN WRITING'
          'WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO '
          'MAY MODIFY AND/OR'
          'REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE '
          'TO YOU FOR DAMAGES,'
          'INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR '
          'CONSEQUENTIAL DAMAGES ARISING'
          'OUT OF THE USE OR INABILITY TO USE THE PROGRAM '
          '(INCLUDING BUT NOT LIMITED'
          'TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR '
          'LOSSES SUSTAINED BY'
          'YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO '
          'OPERATE WITH ANY OTHER'
          'PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS '
          'BEEN ADVISED OF THE'
          'POSSIBILITY OF SUCH DAMAGES.'
          ''
          #9#9'     END OF TERMS AND CONDITIONS'
          #12
          #9'    How to Apply These Terms to Your New Programs'
          ''
          
            '  If you develop a new program, and you want it to be of the gre' +
            'atest'
          
            'possible use to the public, the best way to achieve this is to m' +
            'ake it'
          
            'free software which everyone can redistribute and change under t' +
            'hese '
          'terms.'
          ''
          
            '  To do so, attach the following notices to the program.  It is ' +
            'safest'
          
            'to attach them to the start of each source file to most effectiv' +
            'ely'
          
            'convey the exclusion of warranty; and each file should have at l' +
            'east'
          
            'the "copyright" line and a pointer to where the full notice is f' +
            'ound.'
          ''
          
            '    <one line to give the program'#39's name and a brief idea of wha' +
            't it does.>'
          '    Copyright (C) <year>  <name of author>'
          ''
          
            '    This program is free software; you can redistribute it and/o' +
            'r modify'
          
            '    it under the terms of the GNU General Public License as publ' +
            'ished by'
          
            '    the Free Software Foundation; either version 2 of the Licens' +
            'e, or'
          '    (at your option) any later version.'
          ''
          
            '    This program is distributed in the hope that it will be usef' +
            'ul,'
          '    but WITHOUT ANY WARRANTY; without even the implied warranty '
          'of'
          '    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  '
          'See the'
          '    GNU General Public License for more details.'
          ''
          
            '    You should have received a copy of the GNU General Public Li' +
            'cense'
          '    along with this program; if not, write to the Free Software'
          '    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  '
          '02111-1307  USA'
          ''
          ''
          
            'Also add information on how to contact you by electronic and pap' +
            'er mail.'
          ''
          
            'If the program is interactive, make it output a short notice lik' +
            'e this'
          'when it starts in an interactive mode:'
          ''
          '    Gnomovision version 69, Copyright (C) year name of author'
          '    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details '
          'type `show w'#39'.'
          
            '    This is free software, and you are welcome to redistribute i' +
            't'
          '    under certain conditions; type `show c'#39' for details.'
          ''
          'The hypothetical commands `show w'#39' and `show c'#39' should show the '
          'appropriate'
          
            'parts of the General Public License.  Of course, the commands yo' +
            'u use '
          'may'
          
            'be called something other than `show w'#39' and `show c'#39'; they could' +
            ' even '
          'be'
          'mouse-clicks or menu items--whatever suits your program.'
          ''
          
            'You should also get your employer (if you work as a programmer) ' +
            'or your'
          
            'school, if any, to sign a "copyright disclaimer" for the program' +
            ', if'
          'necessary.  Here is a sample; alter the names:'
          ''
          
            '  Yoyodyne, Inc., hereby disclaims all copyright interest in the' +
            ' program'
          
            '  `Gnomovision'#39' (which makes passes at compilers) written by Jam' +
            'es '
          'Hacker.'
          ''
          '  <signature of Ty Coon>, 1 April 1989'
          '  Ty Coon, President of Vice'
          ''
          
            'This General Public License does not permit incorporating your p' +
            'rogram '
          'into'
          
            'proprietary programs.  If your program is a subroutine library, ' +
            'you may'
          
            'consider it more useful to permit linking proprietary applicatio' +
            'ns with the'
          
            'library.  If this is what you want to do, use the GNU Library Ge' +
            'neral'
          'Public License instead of this License.'
          '')
        ReadOnly = True
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'About'
      ImageIndex = 3
      object Label1: TLabel
        Left = 72
        Top = 16
        Width = 277
        Height = 55
        Caption = 'News Turkey'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 224
        Top = 64
        Width = 107
        Height = 24
        Caption = 'ALPHA 1079'
        Color = clRed
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = -19
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        Transparent = True
      end
      object Label4: TLabel
        Left = 8
        Top = 304
        Width = 377
        Height = 20
        Alignment = taCenter
        AutoSize = False
        Caption = '2004 Havoc Software Productions'
        Enabled = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label5: TLabel
        Left = 128
        Top = 88
        Width = 244
        Height = 13
        Caption = 'Powered by 100% ALL AMERICAN Grade-A Turkey'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlue
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        Transparent = True
      end
      object Image1: TImage
        Left = 48
        Top = 64
        Width = 49
        Height = 48
        Picture.Data = {
          055449636F6E0000010001003030000000000000A80E00001600000028000000
          30000000600000000100080000000000800A0000000000000000000000000000
          000000000000000006070F0002031F000B0F1F0010051D00191A1E0002042F00
          0C112F0017192E0002043F000C0F3E001E09380013183E00292A2E0025343F00
          01024F000E114E00181B4E0002035F0012155E00191E5E002B0D5000082C5400
          23254100353241003A3D4000242D5B0001016F00080C6E000F146E0002037F00
          08107E00131B7E00371165003F147400182972002B307800394F5E001A4C7C00
          3D446E0036427D00484D4E0043465E004E575E00575E5E005C5A6D0043487D00
          455A7300595A7D00696E6E0069697D006C737D0002038F000D128E00161A8D00
          01029F000A0F9E00141B9C001F2695002A339A000202AF00090FAE00161CAD00
          0102BF000C13BE00171FBD002129B5002B35B500461681004F24880000488F00
          1C5F9F003B4294003643AC000E67BF002F74B3004C50920065489D004A688100
          527C9E00787E80006C7093005A5CAB004E51B500776EAD006569BB006872BC00
          0102CF001A08CF000C14CD00151CCE000203DF00090DDE000F16DD00230BC000
          1B24D600232DDA000D04E7000001EF000509EE000717EE00151DED000401F700
          0000FF000203FE000408FE00090DFE000C13FD000018FF000F18FC00131DFD00
          1925ED000025FF001B25FC00003BFF002329EC002933EC00353EEB00212DFC00
          2B35FB00323DFB000068CF00106ACE001D7FDE003076D800024EFF003F44ED00
          3745FC000061FF000077FE00484FD6005261CC00676ED3004B55E900535CEA00
          4040FF00535DFA005670EC007371EB006C70F9007B7EF900897BB8006B8A9E00
          4383BE00798FB7001D87EE000080FF000E87FE001C8FFE002188F6003D88FF00
          2A97FE00399FFE0072AEDD00518FFD006D8FEC0040A0FF0047A6FE0055AEFD00
          6AA2FC0073A9FC0064B6FD0072BEFD00818B8D008B909D008E9A9D009E9E9E00
          8586AC008E8CAC009597AD009294BB0082A6BD009FA1BC0094A9BD009DB5BD00
          A0ADAE00ABBDBD00BFBFBF009998C9008FB5CD009DBCCD0080B5DD00AEB2C700
          B3BBCC00B7B7DB008A94EF009DA5F9008EBFFD009BBFFE009DC5DD00ACC5CC00
          BACCCC00B5C6DD0085C0ED0080C5FD008FCDFD009DD5FC00B5CEEC00A5D1ED00
          BACCFC00AAD7FE00ABDDFC00B6D9FC00BAE4FC00C7CBCB00C8DBDC00D0D0D000
          DEDFDF00C6C4EB00C7D2EC00CEDAEC00C7C5FA00C8D3FB00D8D8FB00D3E1EC00
          D6ECEC00C8ECFC00DBEDF400D3E1FB00DCE3FB00D5EDFC00DEE9FB00D6F4FC00
          EEEFEF00E0EEFB00E2F3FB00E4F9FC00E5FCFC00F2FEFE00FFFFFF0000000000
          901B000001001800000000001CF3120000000000AA9BF500B39BF5008CF61200
          2400020000ECFD0089704000050000002400020000F0FD0048F3120002000000
          40A3F50090020200F99BF500E049FC0023A3F5002BA3F5000000000008020000
          FFFFFF00E4E4E4E4E4E4E4E4DFCDE4E4E4E4E4E4E4C9C2CE0DE69C9C9C9C9C9C
          9C9C9C9C2603878787969C9C9C9CBC8787878787E2E2E3E3E3E3E3BFBFE3E3E3
          E3E3E3E3E3C3C2E38F8192929292929292929292806467676780929292927D67
          67676767E3E3E3E3E3B0CDE3E3E3D8C29797D8E3E3E39EC2A2C2929292929292
          92929267676767676746E6799281676767676767E2E2E3E3BFE3E3E3DED893A2
          D89EC9C9C3E3CBDEE3D8929292929292929280676767676767924603927D6767
          67676767E3E3D7AFE3E3E3A194C2A2E3E3C3989DDEE3E3C497989E9792929292
          9292706767676767699292039270676767676767E2E2E3E392A2DEC9D8E39498
          C2E3C2C998C2E3D8E3E39798C392929292806767676767698192927972676767
          67676766E3E3E3E3DEC2E398CBE3DEC3DEA1CB9EE3E3E3C49D94A198C9A19292
          928067676767677D92929292676767676767675EE2E2E3E3C2C293A1D8E3DEC2
          97C2E3C3E3D8D8C2D8A1CBD8E398C9979280676767676C929292928067676767
          67675844E3E3E3E3DEA1DEA1939DDECBE3C9989498DEDEE39E94A1E3E3C4C2E3
          9880676767679292929270676767676767614444E2E2E3E3E3C297A29D9DE3C9
          E397C4D8CBC393E3C3C2C9CBC39EA2D8CBBB676767699292927D673709090937
          61444444E3E3E3E3E39EC2E3DEC397A1DED8C4A2979398E3E3DE9D98A2CBE3E3
          C2D86B67677D9292923F0731E5E5E55003154444E2BFE3E3E3E39D97CBCBCBC4
          A29DE3E3CBDEC2A1E3D8C4DE9ECBE3E3C9E39F6770927D703CDFE5E5E5E5E5E5
          E5E51544E3BFD7E3E3E3CBC3E3A2E39EA2E3E3E39E9392DEE3CBC29494E3E3E3
          A194946B6967676203E5E5E5E5E5E5E5E5E50D21E2E2B0E3E3E3E3C39E93E3D8
          A2E3E394C2E3D8CBDEE3C2D8D8DEC2DE97C2C2C76967673450E5E5E5E5E5E5E5
          E5E5A60BE3E3D7BFE3E3E3D8E3E39893C2E3E3E3E39E94C4E3E3A197989D9DE2
          C9E293CBDEE24D0DE501E6E6E650E5E5E5E5E519E2E2E3B0E3E3E3C99D97CBC9
          C9CBA297E3CB98DEC3CBA1CBE3E3C29EA1DEE2C4A2C99519E5E6E6E6E6E6E5E5
          E5E5E550E3E3E3BFE3E3E3A19EC3C4A1E3A2A1A1DECBC2939DC4C9E3D8E294A2
          D8E2E2E2C39DE219E5E6E6E6E6E6B1E5E5E5E531E2E2E3E3E3E3E3DEA1979EC9
          E3E3C39497CBE3C9C9C2E3D8DEE39EBD4B4EAEE1DCC29E16CFCCB105E60DE5E5
          E5E5DF04E3E3E3E3BFE3E3E3C2A2DEC4C4D8C39DC9DECB9397C4E3E3C9470301
          0C140AE6168FE3A531A6A30505CEE5E5E5E55015E2E2E3E3B0E3E3E3E3C4A193
          93DEE2E2C39797DEA2C9DEE27A033B8B7F7171822401C5A207E5CE50DFE5E5E5
          E5E50522E3E3E3E3E3B0E3E3E3A1E3E3E298989EE3E3E39E9DA2A301606E6237
          0909090F345F1407D205B1E5E5E5E5E5B10D4444E2E2E3E3E3B0E3E3E3E3C298
          E2A1C4DEC94E5026A3E20153671B0117434C303A1A0171101A991919CEE5CE19
          04214444E3E3E3E2E3CDCDE3E3E2A29EE2C9DEA1A2B301330825067167078390
          010117E6080D5F8503E2E3CD18040B2144444444E2E2D7B0B0B0A3D7E3CD4E7C
          7B8EB0B0B0B0B0013D5F6B676A48238A676B1E091F82247F7108CAE2E3E3C044
          44444444E2E20108090A17CDA5032302E60CE607090AE6013F69620F01606E6B
          67691DE60301E601740730A0E3E3E3B245444444E2E10D526E7F84CDE6537165
          436E60436E76E6536A671EE6E6696767696E7F1E012D9F0C205AE67CE2E2E3E3
          D9544444E2E2DB2D6E421829287806011267E6015B6767671E123C386E37E612
          67570202386F27BA116E8603D4E3E3E3E3E3E2E2E2E2DB51675BE63324760384
          E667E6903867675BE609676767010623670FE602E63D19D417696B37BAE2E2E2
          E3E3E3E3E2E2E1A96767E68D0A76E6D5086901AD1D6767621E026767670A2414
          6767712409072DAC0167676E32E0E2E3E3E3E2E2E2A30151776B3E01E66906AC
          A36E123A016734576767670F066F06E66B37E61F1B030D146E5BE6093801B2E2
          E3E3E3E3E2CD017E69676742366E13A3B076340662675B6767696734E6696313
          366B40436E13147367091307773B01E3E3E3E2E2E2E119133F3F3F3F676A3929
          DE3E73031257673F0FE637671D3C3F3B03093C696B606E676908B99B136E39BF
          E1E3E3E3E3E3E3E3E3E3E3E3E3B0292CBFC62C05A1191201BEE3E2CBC293A1E2
          C3C99E91C1DED3BA9F94C4E2B92FE6E60DD7E2E2E2E2E3E3E3E3E3E3E3E3D7E3
          E3E3D8B593C101E6D7E3979DC3C2A2DEE298A2C9CBE2E294949DDEE39E989EE3
          E3E3E3E3E3E3E3E3E3E3E3E3E3E2B0E3E3E297949EE3BF26A1E29DE2E2C99897
          E2CBA2C99E92DED8D8DEC397C29DE3E3E3E3E2E2E22CE629E2E3E3E3E32CD7BF
          E2E2E2CB949EC9C9E3DE98D8E29EDEE2D8E297E2E2CB9D94A1E3C9C9C39793D8
          E3E3E3E3E3A501D1A5E2E2E2CDE6E2B0E2E2E298C9D8C3E2E29D9DCBDEA2C494
          C9DEC3D8C4CBA2C9C4D8C4DEA1CBDEE3E3E3E2E2E2DA18480DE1E2E22901E2B0
          E25050ABCBC99CBDB0D7E2D84B8E97DEE2B02C164AE2C2D89E979DC9A1DEE3E3
          E3E3D7B0E2E2D6E61423880D488CB70D17716B6001B0DE019A1798B401360E94
          0184716E74104BD8E3CBE3E3E3E3E3B0B0E3E2E2E2E2E0083D026B066B76080C
          7867676E48014FE66E40CD2C1F6302AF06766912346AE6CDE2E2E3E3BFB0B0E3
          E3E3E3E3E2E2E02D6D0134596767E6436B1BE6E6595AE6E669670DE663693D01
          015D57E61B670CA4E3E3CDB0D7E3E3E3E3E3E2E2E2E2E2D2763C0F671E1E023F
          676B755202120148673F3F4067015B5DB60149766A6305B6BFE2E3E3E3E3E3E3
          E3E3E3E3E2E2E2DA4162625BE61C1212675741421206E6716712626767040969
          2A19566B3401A8E0E3E3E3E3E3E3E3E3E3E3E2E2E2E2E2D435676709070737E6
          570FE6E60601026767011B695D89033E010D5157E60219E2E2E3E3E3E3E3E3E3
          E3E3E3E3E2E23101716762A7A9066B091A125F766B1BE66B1E4E183B38D72C23
          7417E612576B1A51E3E3E3E3E3E3E3E3E3E3E2E2E2E2E20D0A1B09DB30010902
          562A01E6E6E6A73A3929AF0107BF50030A17E62A01E6E633E2E2E2E2E2E2E2E2
          E2E2E2E2E2E2E2D0552E30E2D5B85251D2D5DBB6D5DBE105E6E6B0B02BE2CDAD
          56AAB0DDD3D0D5E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
          E2E2E2E2E2D7B0CDE2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
          E2E2E2E200000000000000470000000000000000000000000000008300000000
          00000034000000000000000A0000000000000014000000000000001C00000000
          0000001400000000000000240000000000000000000000000000007800000000
          00000073000000000000002400000000000000C4000000000000000000000000
          0000005000000000000000500000000000000000000000000000000900000000
          0000007800000000000000000000000000000000000000000000000200000000
          000000C000000000000000000000000000000005000000000000003E00000000
          0000000000000000000077340000000000000002000000000000000800000000
          0000000900000000000077060000000000000089000000000000000400000000
          000000BC00000000000000500000000000000089000000000000000400000000
          000077CD00000000000000C000000000000077E0000000000000770000000000
          0000004F000000000000003300000000000000BC000000000000005000000000
          00000001}
      end
      object Memo2: TMemo
        Left = 24
        Top = 120
        Width = 337
        Height = 169
        Lines.Strings = (
          'News Turkey is distributed under the terms of the GNU General '
          'Public License.If you do not agree to these terms, it is asked '
          'you uninstall this '
          'program.'
          ''
          'Now, as always with my projects, I figure why do something '
          'yourself, when it is already been done for you, that is why I '
          'made use of a number of external libraries'
          'during the development of News Turkey. Most of these are '
          'VCL Components.'
          'You will need these libraries/components to develop with the '
          'News Turkey source code.'
          ''
          'LIST OF LIBRARIES USED -'
          'abfComponents (http://www.abfdev.com)'
          'Toolbar2000 v2.1.2 (http://www.jrsoftware.org)'
          'TBX v2.0 (http://www.g32.org)'
          ''
          
            'Each of these libraries have their own licences and not created ' +
            'or '
          'owned by '
          'Havoc Software Prodcutions.'
          ''
          '-Compman (a.k.a. havocsoft)')
        ReadOnly = True
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
  end
end
