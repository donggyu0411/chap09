#include <iostream>
// ���� ��� for���� ����Ͽ� �迭�� �� ĭ�� �� �ٲ㺸��(?)

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