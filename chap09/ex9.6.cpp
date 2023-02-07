#include <iostream>
// 범위 기반 for문을 사용하여 배열의 각 칸의 값 바꿔보기(?)

using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9.,10 };

	for (int i : arr)
	{
		i++;
	}

	for (int i : arr)
	{
		cout << i << ' ';
	}

	cout << endl;
}