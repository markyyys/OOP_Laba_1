#include "Complex.h"
#include <math.h> 

Complex s2;

void Complex::plus()
{
	resultR = (a + c);
	resultF = (bi + di);
}

void Complex::minus()
{
	resultR = (a - c);
	resultF = (bi - di);
}

void Complex::multiply()
{
	resultR = ((a * c) - (bi * di));
	resultF = ((a * di) + (bi * a));
}

void Complex::devide()
{
	resultR = ((a * c) + (bi * di)) / ((c * c) + (di * di));
	resultF = ((bi * c) - (a * di)) / ((c * c) + (di * di));
}

double Complex::module(int a, int b)
{
	double res = sqrt(pow(a, 2) + pow(b, 2));

	return(res);
}


Complex::Complex()
{
	
}

Complex::~Complex()
{
	
}
