// 디폴트 매개변수를 사용해 고쳐본 아이템 예제

#include <iostream>
using namespace std;

int inventory[8] = { 0 };
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0)
{
	inventory[itemId] += cnt;
	score += sc;
}

int main()
{
	getItem(6, 5);
	getItem(3);
	getItem(5, 4, 7000);

	for (int i : inventory)
	{
		cout << i << " ";

	}

	cout << endl;
	cout << "점수 : " << score << endl;
}