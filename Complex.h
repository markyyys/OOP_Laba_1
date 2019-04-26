#include <string>
#include <conio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

class Complex
{
private:

public:
	int n;
	int a;
	int bi;
	int c;
	int di;
	char sign;
	double result;
	double resultR;
	double resultF;
	
	Complex plus();
	//double plusF(int, int);

	Complex minus();

	Complex multiply();

	Complex devide();

	double module(int, int);

	Complex();
	Complex(double resultR,double resultF) : resultR(resultR), resultF(resultF){}
	~Complex();
};
