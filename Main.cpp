#include "Complex.h"
#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

int Number = 0;

int main()
{
	setlocale(0, "");
	Complex s1;

	cout << "Введите номер задания: ";
	cin >> Number;
	cout << endl;

	switch (Number)
	{
	case 1:

		cout << "Введите пример: ";
		cin >> s1.a >> s1.bi >> s1.sign >> s1.c >> s1.di;
		cout << endl;
		cout << "        Ответ: ";

		switch (s1.sign)
		{
		case '+':
			s1 = s1.plus();
			
			if (s1.resultF < 0)
				cout << s1.resultR << "+(" << s1.resultF << ")*i";
			else
				cout << s1.resultR << "+" << s1.resultF << "*i";
			_getch();
			return 1;
			break;

		case '-':
			s1 = s1.minus();
		
			if (s1.resultF < 0)
				cout << s1.resultR << "+(" << s1.resultF << ")*i";
			else
				cout << s1.resultR << "+" << s1.resultF << "*i";
			_getch();
			return -1;
			break;

		case '*':
			s1 = s1.multiply();
			
			if (s1.resultF < 0)
				cout << s1.resultR << "+(" << s1.resultF << ")*i";
			else
				cout << s1.resultR << "+" << s1.resultF << "*i";
			_getch();
			return 0;
			break;

		case '/':
			s1 = s1.devide();
		
			if (s1.resultF < 0)
				cout << s1.resultR << "+(" << s1.resultF << ")*i";
			else
				cout << s1.resultR << "+" << s1.resultF << "*i";
			_getch();
			return 0;
			break;

		default:
			break;
		}
		break;

	case 2:
		double check = 0;
		ifstream fin("complex.txt");
		fin >> s1.n;
		int **p = new int* [s1.n];

		for (int i = 0; i < s1.n; i++)
			p[i] = new int[2];

		for (int i = 0; i < s1.n; i++)
		{
			fin >> s1.a >> s1.bi >> s1.sign;
			p[i][0] = s1.a;
			p[i][1] = s1.bi;
			s1.result = s1.module(p[i][0], p[i][1]);
			if (s1.result > check)
				check = s1.result;
		}
		cout << check;

		_getch();
		break;
	}

}
