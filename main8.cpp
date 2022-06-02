#include <iostream>

using namespace std;

int main()
{
	/*
	int Score = { 0 };
	cin >> Score;
	
	// 100~90 : A
	// 90~80 : B
	// 80~70 : C
	// 70~60 : D
	// 60~50 : E
	// 나머지 점수는 : F
	
	Score /= 10;

	switch (Score)
	{
	case 10:
		[[fallthrough]];
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}


	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > Score && Score >= 70)
	{
		cout << "C" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "D" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	// a, b 2개의 값을 받아서 a - b 가 0보다 크면 true 작으면 false
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	bool result = (a - b > 0);
	//cout << boolalpha << (a - b > 0) << noboolalpha << endl;
	switch (result)
	{
	case true:
		cout << "true" << endl;
		break;
	default:
		cout << "false" << endl;
		break;
	}

	// a, b, c 3개의 값을 받아서 a + b 가 c보다 크면 a + b 작으면 c
	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	bool result = (a + b > c);
	switch (result)
	{
	case true:
		cout << a + b << endl;
		break;
	default:
		cout << c << endl;
		break;
	}

	//숫자 하나를 입력 받아서
	//1이면 "Red" 출력
	//2이면 "Blue" 출력
	//3이면 "Black" 출력
	//4이면 "White" 출력
	int a = { 0 };
	cout << "숫자 하나를 입력? " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Red" << endl;
		break;
	case 2:
		cout << "Blue" << endl;
		break;
	case 3:
		cout << "Black" << endl;
		break;
	case 4:
		cout << "White" << endl;
		break;
	default:
		break;
	}
	*/

	//"주민번호 뒤에 7자리를 입력? "
	//숫자가 7자리 이고
	//맨 앞자리의 수가 1,3이면은 "남자"
	//맨 앞자리의 수가 2,4이면은 "여자"
	//그 밖의 다른 수는 "외계인"
	int a = { 0 };
	cout << "주민번호 뒤에 7자리를 입력? " << endl;
	cin >> a;

	a /= 1000000;
	switch (a)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "남자" << endl;
		break;

	case 2:
		__fallthrough;
	case 4:
		cout << "여자" << endl;
		break;

	default:
		cout << "외계인" << endl;
		break;
	}
}