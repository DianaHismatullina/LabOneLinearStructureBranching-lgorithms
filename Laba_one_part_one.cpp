// Laba_one_part_one.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	double x, y, a; // ����������� ����������
	// ���� ���������� � ����������
	printf_s("x="); scanf_s("%lf", &x);
	printf_s("y="); scanf_s("%lf", &y);
	// ��������� �������� ���������
	a = (x*x + y / 2 - pow(x*x / y, 1. / 3)) / (fabs(x*x*x) + sqrt(fabs(x*y)) + 1);
	// ����� �������� ���������
	printf_s("a=%f", a);
	// ������������� ��������� �� ������� ����� �������
	system("pause");

return 0;

}

