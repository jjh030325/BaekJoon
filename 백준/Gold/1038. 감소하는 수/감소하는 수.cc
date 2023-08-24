#include <iostream>
#include <algorithm>
using namespace std;

long long n, arr[1023] = { 0, };
int num = 1;

void setting(long long n, int ii)
{
	arr[num] = n;
	num++;
	for (int i = ii; i >= 0; i--)
	{
		setting(n * 10 + i, i - 1);
	}
}

int main()
{
	cin >> n;
	arr[0] = 0;
	for (int i = 9; i >= 1; i--)
	{
		setting(i, i-1);
	}
	sort(arr, arr + 1023);
	if (n > 1022)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << arr[n] << endl;
	}
	return 0;
}