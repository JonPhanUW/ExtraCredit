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


	std::stringstream testStream;

	Rectangles* redRectPtr = generateRedRectangle();
	testStream << redRectPtr->getColor();

	Rectangles* blueRectPtr = generateBlueRectangle();
	testStream << blueRectPtr->getColor();

	std::cout << testStream.str();

	const int testInt = MeaningOfLife();
	std::cout << testInt;

}


//===== Load - time Dynamic Link Libraries / Shared Libraries =====


//Ensure that the Shape class's public member functions, and the Color enum, are exported via __declspec(dllexport) when building Shape.dll,
//and imported via __declspec(dllimport) when compiling code that uses Shape.h. See examples in Assignment 7 starter code


//Create a DerivedShapes.dll / .so that provides an implementation of Rectangle, which sets Shape::m_color to be Color::Red


//Create a different implementation of a DerivedShapes .dll/.so that provides an implementation of Rectangle,
//which sets Shape::m_color to be Color::Blue
//--Ensure that these 2 dll / so's are built to different directories.


//Both DerivedShapes .dll/.so's should expose a free function:
//--`int MeaningOfLife()`
//----The "red".dll / .so should return 42.
//----The "blue" one shall return some non - 42 value of your choosing.



//Ensure that your project files / makefiles enforce build order dependency(you should be able to build all with ONE action).


//Investigate load order rules

//Windows: investigate DLL load rules(https ://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-search-order 


//Create a LoadTimeLinkedShapes(.exe) which

//uses Shape and DerivedShapes libraries,
//runs unit tests verifying the color of a created Shape,
//runs unit tests verifying that `MeaningOfLife()` returns the expected value.


//Manipulate DLL location, environment variable, etc. to be able to run LoadTimeLinkedShapes(.exe) in two modes:

//1. The program finds and loads the "red" DerivedShapes.dll first, and verifies that a created Rectangle is red, and that `MeaningOfLife()` returns the expected value.
//2. The program finds and loads the "blue" DerivedShapes.dll first, and verifies that a created Rectangle is blue, and that `MeaningOfLife()` returns the expected value.
//The "manipulation" should not require re - compiling your LoadTimeLinkedShapes(.exe).




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
