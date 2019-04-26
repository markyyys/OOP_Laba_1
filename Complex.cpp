#include "Complex.h"
#include <math.h> 

Complex s2;

Complex Complex::plus()
{
	double res1 = (a + c);
	double res2 = (bi + di);

	return Complex(res1, res2);
}

Complex Complex::minus()
{
	double res1 = (a - c);
	double res2 = (bi - di);

	return Complex(res1, res2);
}

Complex Complex::multiply()
{
	double res1 = ((a * c) - (bi * di));
	double res2 = ((a * di) + (bi * a));

	return Complex(res1, res2);
}

Complex Complex::devide()
{
	double res1 = ((a * c) + (bi * di)) / ((c * c) + (di * di));
	double res2 = ((bi * c) - (a * di)) / ((c * c) + (di * di));

	return Complex(res1, res2);
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
