/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//네모 그리기
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

	// a, b 2개의 값을 받아서 16진수로 a + b 출력
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	cout << "16진수(A + b) = " << hex << uppercase << a + b << nouppercase << endl;//uppercase 대문자 변환
	
	// a, b 2개의 값을 받아서 a - b 가 0보다 크면 true 작으면 false
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
	
	// a, b, c 3개의 값을 받아서 a + b 가 c보다 크면 a + b 작으면 c
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
	
	//(2진법 10101010 + 8진법 111 - 16진법 ff) 결과 출력
	int a = 0b10101010;//2진법 표기법
	int b = 0111;//8진법 표기법
	int c = 0xff;//16진법 표기법

	cout << a + b - c << endl;
	
	// a, b, c 3개의 값을 받아서
	// a는 c보다 작다
	// a는 b보다 크다
	// 위에 2개의 조건식이 참이면 true
	// 하나라도 거짓이면 false
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