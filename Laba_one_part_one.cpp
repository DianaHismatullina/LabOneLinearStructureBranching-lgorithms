// Laba_one_part_one.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	double x, y, a;
	printf_s("x="); scanf_s("%lf", &x);
	printf_s("y="); scanf_s("%lf", &y);
	a = (pow(x,2) + y / 2 - pow(pow(x,2) / y, 1. / 3)) / (fabs(pow(x,3)) + sqrt(fabs(x*y)) + 1);
	printf_s("a=%f", a);
	system("pause");
return 0;

}

