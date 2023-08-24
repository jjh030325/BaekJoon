#include <iostream>
#include <algorithm>
using namespace std;

int n, a;
int arr[15];
int check[10] = { 0, };
int one = 0;
int two = 0;

int main()
{
	while (1)
	{
		cin >> n;
		for (int i = 0; i <= 9; i++)
		{
			check[i] = 0;
		}
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			check[a]++;
		}
		for (int i = 1; i <= 9; i++)        //첫 번째 숫자의 시작 수
		{
			if (check[i] >= 1)
			{
				one = i;
				check[i]--;
				break;
			}
		}
		for (int i = 1; i <= 9; i++)        //두 번째 숫자의 시작 수
		{
			if (check[i] >= 1)
			{
				two = i;
				check[i]--;
				break;
			}
		}
		for (int i = 0; i < n - 2; i++)
		{
			for (int i = 0; i <= 9; i++)        //첫 번째 숫자의 숫자 추가
			{
				if (check[i] >= 1)
				{
					one = one * 10 + i;
					check[i]--;
					break;
				}
			}
			for (int i = 0; i <= 9; i++)        //두 번째 숫자의 숫자 추가
			{
				if (check[i] >= 1)
				{
					two = two * 10 + i;
					check[i]--;
					break;
				}
			}
		}
		cout << one + two << endl;
	}
	
	return 0;
}