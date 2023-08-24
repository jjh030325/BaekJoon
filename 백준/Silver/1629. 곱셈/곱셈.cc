#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int a, b, c;

long long bunhal(long long bb)
{
	if (bb == 1)
	{
		return a % c;
	}
	else if(bb % 2 == 0)                        //짝수
	{
		return (bunhal(bb / 2) % c)*(bunhal(bb / 2) % c) % c;
	}
	else                                        //홀수
	{
		return (bunhal(bb / 2) % c) * (bunhal(bb / 2) % c) % c * a%c;
	}
}

int main()
{
	cin >> a >> b >> c;
	cout << bunhal(b) << endl;

	return 0;
}

/*
자연수 A를 B번 곱한 수를 알고 싶다. 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다. A, B, C는 모두 2,147,483,647 이하의 자연수이다.

출력
첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.
*/