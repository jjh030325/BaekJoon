#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long int n, x, y, howlong;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		howlong = y - x;                    //이동해야 할 거리
		long long int a = 0;
		for (;;)                            //같은 수의 공간이동이 반복되는 길이 구하기
		{
			if (howlong <= a * (a + 1))
			{
				break;
			}
			else
			{
				a++;
			}
		}
		if (howlong <= a * a)
		{
			cout << a * 2 - 1 << "\n";				//작동 횟수가 홀수인 경우
		}
		else
		{
			cout << a * 2 << "\n";                 //작동 횟수가 짝수인 경우
		}
	}
	return 0;
}