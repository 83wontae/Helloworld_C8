/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	cout << "* * * * * * * * * *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "* * * * * * * * * *" << endl;

	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	cout << "16진수(A + b) = " << hex << uppercase << a + b << nouppercase << endl;//uppercase 대문자 변환
	

	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;


	//cout << boolalpha << (a - b > 0) << noboolalpha << endl;

	if (a - b > 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	

	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	if (a + b > c)
	{
		cout << a + b << endl;
	}
	else
	{
		cout << c << endl;
	}
	

	int a = 0b10101010;//2진법 표기법
	int b = 0111;//8진법 표기법
	int c = 0xff;//16진법 표기법

	cout << a + b - c << endl;
	
	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	if (c > a && a > b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}
*/