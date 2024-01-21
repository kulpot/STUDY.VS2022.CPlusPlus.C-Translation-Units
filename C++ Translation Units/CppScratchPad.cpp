// 3 Steps Preprocessor process: 1. Preprocessor, 2. Compiler, 3. Linker
// recursively copy/paste all #include

#include <iostream>
using std::cout;
using std::endl;

// ----------------------- C++ Translation Units --------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=N4khTYkTwtI&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=4

// cl - to invoke CMD line in C++ 

/* 
* --------------- CMD -------------------------------START
* 
* C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units

21/01/2024  08:12 pm    <DIR>          .
21/01/2024  08:12 pm    <DIR>          ..
20/01/2024  11:29 pm             2,581 .gitattributes
20/01/2024  11:29 pm             6,585 .gitignore
21/01/2024  08:15 pm    <DIR>          C++ Translation Units
20/01/2024  11:26 pm             1,483 C++ Translation Units.sln
21/01/2024  08:12 pm    <DIR>          x64
               3 File(s)         10,649 bytes
               4 Dir(s)  452,536,356,864 bytes free

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units>cd C++ Translation Units

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  08:15 pm    <DIR>          .
21/01/2024  08:15 pm    <DIR>          ..
21/01/2024  08:15 pm               545 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:12 pm             3,176 CppScratchPad.cpp
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
               9 File(s)         12,220 bytes
               3 Dir(s)  452,536,348,672 bytes free

 ------------------------------------
 void main()
{
    foo();
}
-------------------------------------
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>cl CppScratchPad.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

CppScratchPad.cpp
CppScratchPad.cpp(64): error C3861: 'foo': identifier not found



* --------------- CMD --------------------------END
*/


void main()
{
    foo();
}





























// ------------------------- C++ Linker Errors ------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=xNOLRakCOyw&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=3

// Linker Errors - if theres is a multiple define in the .obj file 

//void foo()	// 1st define linker error - 2nd in AnotherCppFile.cpp
//{
//
//}
//
//void main()
//{
//	foo();
//}


























//#include "Hero.h"
//#include "Monster.h"

//---------------------------------------COMPILE SEQUENCE FOR MULTIPLE HEADERFILES--------
////-----#include "Hero.h"-----START
////----#include "Vector.h"----START
//#ifndef VECTOR_H		// this is a Header Guard
//#define VECTOR_H		// this is a Header Guard
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//#endif
////-----#include "Vector.h"----END
//class Hero
//{
//	Vector position;
//};
////-----#include "Hero.h"-----END
//
//// -------#include "Monster.h"-----------START
////----#include "Vector.h"----START
//#ifndef VECTOR_H		// VECTOR_H only define once
//#endif
////-----#include "Vector.h"----END
//class Monster
//{
//	Vector position;
//};
//// -------#include "Monster.h"-----------END
//#include <iostream>
//using std::cout;
//using std::endl;

//--------------------------------------------------------------------
////#include "Vector.h"
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//
//class Hero
//{
//	Vector position;
//};
//
//
////#include "Vector.h"
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//
//class Monster
//{
//	Vector position;
//};
//#include <iostream>
//using std::cout;
//using std::endl;

// -------------------------- C++ Header Guards ------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=wRq8pxJEpfc&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=2

// Hero.h and Monster.h are both identical

//void main()
//{
//	Hero hero;
//	Monster monster;
//}




























//#include "AnotherCppFile.h" // Preprocessor ---- Header file ------

// -------------------- C++ Header Files -------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=Wa6irrxFG88&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P



// Code Files - has .cpp extensions
// Header Files - has .h extensions and some .cpp extensions

////// -----Declarations----- should be in header file
////void foo();
////void foo1();
////void foo2();
////void foo3();
////void foo4();
//
//void main()
//{
//	foo();
//	foo2();
//	foo4();
//}