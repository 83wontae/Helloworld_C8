#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	/*
	int myArray[5] = { 0 };
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0부터 시작을 해서 5개 생성했으므로 없다

	int myArray1[] = { 1,2,3,4 }; //배열 4개가 생성된다
	int myArray1[]{ 1,2,3,4 };
	int myArray1[5]{ 1,2,3 }; // 나머지 4,5는 0으로 초기화

	//	1	2	3	4
	//	5	6	7	8
	int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} };

	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr;

	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);//{ 11, 22, 33 };
	myVector.push_back(44);//{ 11, 22, 33, 44 };
	*/

	//myVector에 모든 값을 더한 값을 출력해보자
	vector<int> myVector = { 11, 22, 33 };

	int vectorSize = myVector.size();
	cout << "VectorSize = " << vectorSize << endl;
	int sum = 0;

	//for (int i : myVector)
	//for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
	for (int i = 0; i < myVector.size(); ++i)
	{
		sum += myVector[i];
	}
	cout << "sum = " << sum << endl;
	//<---

	int myArray[3] = { 11, 22, 33 };
	//myArray에 모든 값에 1씩 더해보자 (11, 22, 33) -> (12, 23, 34)
	for (int& i : myArray)
	{
		i++;
	}
	
	for (int i : myArray)
	{
		cout << "myArray[" << i << "] = " << i << endl;
	}
}