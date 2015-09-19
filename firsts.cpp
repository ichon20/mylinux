// firsts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//const point test
//int const point test
//changed test1 branch

void main() {
    int val1, val2;
	val1 = 1;
	val2 = 2;
	const int* pInt;
	int const* pConst;

	pInt = &val1;
	pConst=&val2;

	printf("Hello test\n");
	*pInt = 10;
	*pConst=val1;
}
