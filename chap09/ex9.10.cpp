// 디폴트 매개변수 사용해보기

#include <iostream>
using namespace std;

void f(int a = 1)
{
	cout << a << endl;
}

int main()
{
	f(123);
	f(); // 아무 인수도 넘기지 않는다면, a에 기본값인 1이 들어간다.
}