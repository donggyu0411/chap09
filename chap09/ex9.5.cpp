#include <iostream>

// 배열에서 범위 기반 for문 사용해보기

using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i : arr)
	{
		cout << i << ' ';
	}

	cout << endl;

}