
#pragma once
#include "Rectangle.h"
#include "Shape.h"

#ifdef DERIVEDSHAPESLIBRARY_EXPORTS
#define DERIVEDSHAPESLIBRARY_API __declspec(dllexport)
#else
#define DERIVEDSHAPESLIBRARY_API __declspec(dllimport)
#endif

//extern "C"{DERIVEDSHAPESLIBRARY_API Shape* CreateMyShape();}


extern "C" {DERIVEDSHAPESLIBRARY_API Rectangles* generateRedRectangle(); }
extern "C" {DERIVEDSHAPESLIBRARY_API Rectangles* generateBlueRectangle(); }

extern "C" {DERIVEDSHAPESLIBRARY_API int MeaningOfLife(); }