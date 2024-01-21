// 3 Steps Preprocessor process: 1. Preprocessor, 2. Compiler, 3. Linker
// recursively copy/paste all #include

#include <iostream>
using std::cout;
using std::endl;

// ----------------------- C++ Translation Units --------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=N4khTYkTwtI&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=4

void main()
{

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