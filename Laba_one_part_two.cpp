// Laba_one_part_two.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	double x1, y1, x2, y2, x3, y3, z;
	int i = 1;
	while (i > 0)
	{
		printf_s("x1="); scanf_s("%lf", &x1);
		printf_s("y1="); scanf_s("%lf", &y1);
		printf_s("x2="); scanf_s("%lf", &x2);
		printf_s("y2="); scanf_s("%lf", &y2);
		printf_s("x3="); scanf_s("%lf", &x3);
		printf_s("y3="); scanf_s("%lf", &y3);
		double r12, r23, r31;
		r12 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		r23 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
		r31 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
		double d1, d2, d3;
		d1 = r12 + r31;
		d2 = r12 + r23;
		d3 = r23 + r31;
		if (d1 > d2 && d1 > d3)
			printf_s("1 dot is farther");
		else if (d2 > d1 && d2 > d3) 
			printf_s("2 dot is farther");
		else if (d3 > d1 && d3 > d2) 
			printf_s("3 dot is farther");
		else if (d1 == d2 && d1 > d3) 
			printf_s("1 and 2 dots are at the same distance farther on 3 dot");
		else if (d2 == d3 && d2 > d1) 
			printf_s("2 and 3 dots are at the same distance farther on 1 dot");
		else if (d3 == d1 && d3 > d2) 
			printf_s("3 and 1 dots are at the same distance farther on 2 dot");
		else if (d1 == d2 && d1 == d3) 
			printf_s("1, 2 and 3 dots are at the same distance");

		printf_s(" \n\r "); 
		printf_s("To check the following three dots: enter any number greater than zero. \n\r To complete the work, enter zero"); scanf_s("%lf", &z);
	i = z;
	} 

	return 0;
}
