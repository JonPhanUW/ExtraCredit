#include <iostream>
#include <sstream>
#include <memory>
#include "Shape.h"
#include "Triangle.h"
#include "TestHarness.h"
#include "ProjectCode_API.h"
#include"DerivedShapes.h"
//#include "../../DIIA/DerivedShapes/DerivedShapes.h"
//#include "../../DIIB/DerivedShapes/DerivedShapes.h"


int main()
{

//std::string str = "D:\\UW\\ExtraCredit\\ExtraCredit\\DIIB\\DerivedShapes\\x64\\Debug\\DerivedShapes.dll";
//std::wstring temp = std::wstring(str.begin(), str.end());
//LPCWSTR path1 = temp.c_str();

//std::string str2 = "D:\\UW\\ExtraCredit\\ExtraCredit\\DIIB\\DerivedShapes\\x64\\Debug\\DerivedShapes.dll";
//std::wstring temp2 = std::wstring(str.begin(), str.end());
//LPCWSTR path2 = temp.c_str();

//HINSTANCE hDll1 = LoadLibrary(path1);
//HINSTANCE hDll2 = LoadLibrary(path2);


//SetDllDirectory(path1);

	TestResult tr;
	TestRegistry::runAllTests(tr);

	char test; 
	std::cin >> test; 

	

}






//===== Run - time dynamic linking =====

//Investigate run - time dynamic linking OS API functions :
//
//Windows: investigate
//LoadLibrary(https ://learn.microsoft.com/en-us/windows/win32/dlls/using-run-time-dynamic-linking 
//
//
//	GetProcAddress(GetProcAddress function(libloaderapi.h) - Win32 apps | Microsoft Learn
//		
//Create a RuntimeLinkedShapes(.exe) that asks the user whether to load the "red" or "blue" DerivedShapes.dll,
//and then demonstrates that it has done so by creating a Rectangle that is the appropriate color.



//===== Statically-linked libraries =====

//Create a different set of.vcxproj / makefile's that build Shape and one of the DerivedShapes libraries as static libraries (.lib/.a).
//You should be able to use the same source code.
//--Create a StaticallyLoadedShapes(.exe) that links to those static libraries.
//Ensure that your project files / makefiles enforce build order dependency(you should be able to build all with ONE action).
//Demonstrate that the resulting.exe can be run from anywhere, and does not depend on the existence of the corresponding.lib files.
