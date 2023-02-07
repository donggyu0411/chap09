// 오버로딩을 통해 작성한 아이템 획득 함수

#include <iostream>

using namespace std;

int inventory[8] = { 0 }; // inventory배열은 각 아이템 번호별로 현재 몇 개를 보유하고 있는지를 저장
int score = 0; // 현재까지 얻은 총 점수

// 아이템을 한 개 주웠을 때
void getItem(int itemId)
{
	inventory[itemId]++;
}

// 아이템을 여러 개 주웠을 때(cnt : 아이템 개수)
void getItem(int itemId, int cnt)
{
	inventory[itemId] += cnt;
}

// 아이템을 여러 개 줍고, 점수도 얻었을 때(sc : 얻은 점수)
void getItem(int itemId, int cnt, int sc)
{
	inventory[itemId] += cnt;
	score += sc;
}

int main()
{
	getItem(6, 5); // 6번 아이템을 5개 얻음
	getItem(3); // 3번 아이템을 하나 얻음
	getItem(5, 4, 7000); // 5번 아이템을 4개 얻고 7000점을 얻음

	for (int i : inventory)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << "점수 :" << score << endl;
}

// 이렇게 아이템을 하나만 얻는 코드가 많이 등장할 경우, 하나만 얻을 때 실행되는 함수를 하나 오버로딩해두면
// 함수를 호출하는 사람은 아이템 번호만 넘겨줘도 되므로 좀 더 편하게 이용할 수 있음.