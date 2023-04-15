#include <iostream>
#include <sstream>
#include <memory>
#include "Shape.h"
#include "Triangle.h"
#include "TestHarness.h"
#include "ProjectCode_API.h"
#include"DerivedShapes.h"
#include <windows.h> 
#include <stdio.h> 
//#include "../../DIIA/DerivedShapes/DerivedShapes.h"
//#include "../../DIIB/DerivedShapes/DerivedShapes.h"

//typedef int(__cdecl* MYPROC)(LPCWSTR);

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

	//TestResult tr;
	//TestRegistry::runAllTests(tr);

	//char test; 
	//std::cin >> test; 

	//HINSTANCE dsLib;
	//MYPROC ProcAdd;
	//BOOL fFreeResult, fRunTimeLinkSuccess = FALSE;

	//// Get a handle to the DLL module.

	//dsLib = LoadLibrary(TEXT("DerivedShape.dll"));

	//// If the handle is valid, try to get the function address.

	//if (dsLib != NULL)
	//{
	//	ProcAdd = (MYPROC)GetProcAddress(dsLib, "DerivedShape");

	//	// If the function address is valid, call the function.

	//	if (NULL != ProcAdd)
	//	{
	//		fRunTimeLinkSuccess = TRUE;
	//		(ProcAdd)(L"Message sent to the DLL function\n");
	//	}
	//	// Free the DLL module.

	//	fFreeResult = FreeLibrary(dsLib);
	//}

	//// If unable to call the DLL function, use an alternative.
	//if (!fRunTimeLinkSuccess)
	//	printf("Message printed from executable\n");


}

