#include <iostream>
// 범위 기반 for문을 사용하여 배열의 각 칸의 값 바꿔보기(레퍼런스 사용)

using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int &i : arr) // i를 레퍼런스로 선언하면... arr의 각 칸을 바꿀 수 있다.
	{
		i++;
	}

	for (int i : arr)  // 여기서는 배열이 변경될 일이 없으므로 일반 변수로 선언
	{
		cout << i << ' ';
	}

	cout << endl;
}