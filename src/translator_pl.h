/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2000 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef TRANSLATOR_PL_H
#define TRANSLATOR_PL_H

#include "translator.h"

class TranslatorPolish : public Translator
{
  public:

    // --- Language contol methods -------------------
    
    /*! Used for identification of the language. May resemble 
     * the string returned by latexBabelPackage(), but it is not used
     * for the same purpose. The identification should not be translated.
     * It should be replaced by the name of the language in English
     * (e.g. Czech, Japanese, Russian, etc.). It should be equal to 
     * the identification in language.h.
     */
    QCString idLanguage()
    { return "polish"; }
    /*! Used to get the command(s) for the language support. This method
     *  was designed for languages which do not prefer babel package.
     *  If this methods returns empty string, then the latexBabelPackage()
     *  method is used to generate the command for using the babel package.
     */
    QCString latexLanguageSupportCommand()
    {
      return "\\usepackage{polski} \\usepackage[latin2]{inputenc} \\usepackage[T1]{fontenc}";
    }
    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage() 
    { return "polish"; }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Funkcje Powi�zane"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Zauwa�, �e to nie s� metody klas.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "Opis Szczeg�owy"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Dokumentacja Sk�adowych Definicji Typu"; }
    
    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Dokumentacja Sk�adowych Wyliczanych"; }
    
    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Dokumentacja Funkcji Sk�adowych"; }
    
    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "Dokumentacja Atrybut�w Sk�adowych"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore() 
    { return "Wi�cej..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Lista wszystkich sk�adowych."; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Lista Sk�adowych"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "To jest kompletna lista sk�adowych dla "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return ", uwzgl�dniaj�ca wszystkie dziedziczone sk�adowe."; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="Wygenerowano automatycznie z kodu �r�d�owego programem Doxygen";
      if (s) result+=(QCString)" dla "+s;
      result+="."; 
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "nazwa wyliczenia"; }
    
    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "warto�� wyliczenia"; }
    
    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "zdefiniowana w"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trVerbatimText(const char *f)
    { return (QCString)"Tutaj znajduje si� zawarto�� pliku nag��wkowego "+f+"."; }
    
    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    QCString trModules()
    { return "Modu�y"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Hierarchia Klas"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "Lista Klas"; }
    
    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "Lista Plik�w"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "Pliki Nag��wkowe"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "Sk�adowe Klas"; }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "Sk�adowe Plik�w"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "Dodatkowe Strony"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "Przyk�ady"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Szukaj"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Ta lista dziedziczenia posortowana jest z grubsza, "
             "cho� nie ca�kowicie, alfabetycznie:";
    }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si� lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="plik�w z ich kr�tkimi opisami:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "Tutaj znajduj� si� klasy, struktury, "
             "unie i interfejsy wraz z ich kr�tkimi opisami:"; 
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si� lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="sk�adowych wraz z odno�nikami do ";
      if (extractAll) 
        result+="dokumentacji klas dla ka�dej sk�adowej:";
      else 
        result+="klas, do kt�rych dana sk�adowa nale�y:";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Tutaj znajduje si� lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="sk�adowych wraz z odno�nikami do ";
      if (extractAll) 
        result+="dokumentacji plik�w dla ka�dej sk�adowej:";
      else 
        result+="plik�w, do kt�rych dana sk�adowa nale�y:";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "Tutaj znajduj� si� pliki nag��wkowe tworz�ce API:"; }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Tutaj znajduje si� lista wszystkich przyk�ad�w:"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Tutaj znajduje si� lista wszystkich stron dokumentacji:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Tutaj znajduje si� lista wszystkich grup:"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    QCString trNoDescriptionAvailable()
    { return "Brak opisu"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Dokumentacja"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "Indeks Grup"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "Indeks Hierarchiczny"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "Indeks Klas"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex() 
    { return "Indeks Plik�w"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Dokumentacja Grup"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "Dokumentacja Klas"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "Dokumentacja Plik�w"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "Dokumentacja Przyk�ad�w"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "Dokumentacja Stron"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Podr�cznik Referencji"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    QCString trDefines()
    { return "Definicje"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "Prototypy Funkcji"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "Definicje Typ�w"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Wyliczenia"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "Funkcje"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trVariables()
    { return "Zmienne"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "Warto�ci Wylicze�"; }
    
    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "Autor"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Dokumentacja Definicji"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "Dokumentacja Prototyp�w Funkcji"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Dokumentacja Definicji Typ�w"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Dokumentacja Typ�w Wyliczanych"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "Dokumentacja Warto�ci Wyliczanych"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "Dokumentacja Funkcji"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "Dokumentacja Zmiennych"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "Komponenty"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    QCString trFiles()
    { return "Pliki"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Wygenerowano "+date;
      if (projName) result+=(QCString)" dla "+projName;
      result+=(QCString)" programem";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return "napisanym przez";
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Diagram dziedziczenia dla "+clName;
    }
    
    /*! this text is generated when the \internal command is used. */
    QCString trForInternalUseOnly()
    { return "Tylko do u�ytku wewn�trznego."; }

    /*! this text is generated when the \reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "Reimplementowana z wewn�trzych przyczyn; nie dotyczy API."; }

    /*! this text is generated when the \warning command is used. */
    QCString trWarning()
    { return "Ostrze�enie"; }

    /*! this text is generated when the \bug command is used. */
    QCString trBugsAndLimitations()
    { return "B��dy i ograniczenia"; }

    /*! this text is generated when the \version command is used. */
    QCString trVersion()
    { return "Wersja"; }

    /*! this text is generated when the \date command is used. */
    QCString trDate()
    { return "Data"; }

    /*! this text is generated when the \author command is used. */
    QCString trAuthors()
    { return "Autorzy"; }

    /*! this text is generated when the \return command is used. */
    QCString trReturns()
    { return "Powroty"; }

    /*! this text is generated when the \sa command is used. */
    QCString trSeeAlso()
    { return "Zobacz r�wnie�"; }

    /*! this text is generated when the \param command is used. */
    QCString trParameters()
    { return "Parametry"; }

    /*! this text is generated when the \exception command is used. */
    QCString trExceptions()
    { return "Wyj�tki"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "Wygenerowano przez"; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    QCString trNamespaceList()
    { return "Lista Obszar�w Nazw"; }

    /*! used as an introduction to the namespace list */
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Tutaj znajduj� si� wszystkie ";
      if (!extractAll) result+="udokumentowane ";
      result+="obszary nazw wraz z ich kr�tkimi opisami:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    QCString trFriends()
    { return "Przyjaciele"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    QCString trRelatedFunctionDocumentation()
    { return "Dokumentacja Przyjaci� i Funkcji Zwi�zanych"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result="Referencje";
      if (isTemplate) result+=" Szablonu";
      switch(compType)
      {
        case ClassDef::Class:      result+=" Klasy "; break;
        case ClassDef::Struct:     result+=" Struktury "; break;
        case ClassDef::Union:      result+=" Unii "; break;
        case ClassDef::Interface:  result+=" Interfejsu "; break;
        case ClassDef::Exception:  result+=" Wyj�tku "; break;
      }
      result+=(QCString)clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    QCString trFileReference(const char *fileName)
    {
      QCString result="Referencje Pliku ";
      result+=fileName; 
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result="Referencje Obszaru Nazw ";
      result+=namespaceName;
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    QCString trPublicMembers()
    { return "Metody Publiczne"; }
    QCString trPublicSlots()
    { return "Sloty Publiczne"; }
    QCString trSignals()
    { return "Sygna�y"; }
    QCString trStaticPublicMembers()
    { return "Statyczne Metody Publiczne"; }
    QCString trProtectedMembers()
    { return "Metody Chronione"; }
    QCString trProtectedSlots()
    { return "Sloty Chronione"; }
    QCString trStaticProtectedMembers()
    { return "Statyczne Metody Chronione"; }
    QCString trPrivateMembers()
    { return "Metody Prywatne"; }
    QCString trPrivateSlots()
    { return "Sloty Prywatne"; }
    QCString trStaticPrivateMembers()
    { return "Statyczne Metody Prywatne"; }
    /*! \endmgroup */ 
    
    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    QCString trWriteList(int numEntries)
    {
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++) 
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list 
                                   // (order is left to right)
        
        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry 
            result+=", ";
          else                // the fore last entry
            result+=" i ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritsList(int numEntries)
    {
      return "Dziedziczy "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritedByList(int numEntries)
    {
      return "Dziedziczona przez "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementowana z "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementowana w "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    QCString trNamespaceMembers()
    { return "Sk�adowe Obszaru Nazw"; }

    /*! This is an introduction to the page with all namespace members */
    QCString trNamespaceMemberDescription(bool extractAll)
    { 
      QCString result="Tutaj znajduje si� lista wszystkich ";
      if (!extractAll) result+="udokumentowanych ";
      result+="sk�adowych wraz z odno�nikami do ";
      if (extractAll) 
        result+="dokumentacji obszar�w nazw dla ka�dej sk�adowej:";
      else 
        result+="obszar�w nazw do kt�rych sk�adowe te nale��:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    QCString trNamespaceIndex()
    { return "Indeks Obszar�w Nazw"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    QCString trNamespaceDocumentation()
    { return "Dokumentacja Obszar�w Nazw"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    QCString trNamespaces()
    { return "Obszary Nazw"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"Dokumentacja dla te";
      switch(compType)
      {
        case ClassDef::Class:      result+="j klasy"; break;
        case ClassDef::Struct:     result+="j struktury"; break;
        case ClassDef::Union:      result+="j unii"; break;
        case ClassDef::Interface:  result+="go interfejsu"; break;
        case ClassDef::Exception:  result+="go wyj�tku"; break;
      }
      result+=" zosta�a wygenerowana z plik";
      if (single) result+="u:"; else result+="�w:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "Lista Alfabetyczna"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "Zwracane warto�ci"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "Strona G��wna"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "str."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "�r�d�a";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "Definicja w linii @0 pliku @1.";
    }
    QCString trDefinedInSourceFile()
    {
      return "Definicja w pliku @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Do wycofania";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Diagram wsp�pracy dla "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Wykres zale�no�ci za��czania dla "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "Dokumentacja Konstruktora i Destruktora"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "Id� do kodu �r�d�owego tego pliku.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "Id� do dokumentacji tego pliku.";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "Warunek wst�pny";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "Warunek ko�cowy";
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "Inwariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "Inicjalizator:";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "kod �r�d�owy";
    }
    QCString trGraphicalHierarchy()
    {
      return "Graficzna Hierarchia Klas";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "Id� do graficznej hierarchi klas";
    }
    QCString trGotoTextualHierarchy()
    {
      return "Id� do tekstowej hierarchi klas";
    }
    QCString trPageIndex()
    {
      return "Indeks Stron";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    QCString trNote()
    {
      return "Nota";
    }
    QCString trPublicTypes()
    {
      return "Typy Publiczne";
    }
    QCString trPublicAttribs()
    {
      return "Atrybuty Publiczne";
    }
    QCString trStaticPublicAttribs()
    {
      return "Statyczne Atrybuty Publiczne";
    }
    QCString trProtectedTypes()
    {
      return "Typy Chronione";
    }
    QCString trProtectedAttribs()
    {
      return "Atrybuty Chronione";
    }
    QCString trStaticProtectedAttribs()
    {
      return "Statyczne Atrybuty Chronione";
    }
    QCString trPrivateTypes()
    {
      return "Typy Prywatne";
    }
    QCString trPrivateAttribs()
    {
      return "Atrybuty Prywatne";
    }
    QCString trStaticPrivateAttribs()
    {
      return "Statyczne Atrybuty Prywatne";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    QCString trTodo()
    {
      return "Do Zrobienia";
    }
    /*! Used as the header of the todo list */
    QCString trTodoList()
    {
      return "Lista Do Zrobienia";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    QCString trReferencedBy()
    {
      return "Referencje wed�ug";
    }
    QCString trRemarks()
    {
      return "Spostrze�enia";
    }
    QCString trAttention()
    {
      return "Uwaga";
    }
    QCString trInclByDepGraph()
    {
      return "Ten wykres pokazuje, kt�re pliki bezpo�rednio lub "
             "po�rednio za��czaj� ten plik:";
    }
    QCString trSince()
    {
      return "Od";
    }
};

#endif