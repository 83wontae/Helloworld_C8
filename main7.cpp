#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
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

	cout << "16����(A + b) = " << hex << uppercase << a + b << nouppercase << endl;//uppercase �빮�� ��ȯ
	*/

	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;


	cout << boolalpha << (a - b > 0) << noboolalpha << endl;

	if (a - b > 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}