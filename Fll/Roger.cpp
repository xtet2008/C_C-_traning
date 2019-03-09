#include "pro_ext.h"

void function1(ParamBlk *p)
{ 
	_Execute("messagebox('It juse for test to run foxpro coding in c++ !',0+64,'Roger')");
} 

FoxInfo myFoxInfo[] =
{ 
	{"Roger" ,(FPFI) function1, 2, ".?.?"} 
};

extern "C" FoxTable _FoxTable =
{ 
	(FoxTable FAR *)0, sizeof(myFoxInfo)/sizeof(FoxInfo), myFoxInfo							
}; 