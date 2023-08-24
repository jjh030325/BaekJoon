#include <iostream>
#include <algorithm>
using namespace std;

int dp[40001] = { 0, };
int n;
int a;

int main()
{
	dp[0] = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		for (int j = 40000; j >= 0; j--)
		{
			if (dp[j] == 1 && (j + a) <= 40000)
			{
				dp[j + a] = 1;
			}
		}
	}
	cin >> n;
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (dp[a] == 1)
		{
			cout << "Y ";
		}
		else
		{
			for (int j = 40000; j >= a; j--)
			{
				if (dp[j] == 1 && dp[j - a] == 1)
				{
					cout << "Y ";
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				cout << "N ";
			}
			check = 0;
		}
	}
	cout << endl;

	return 0;
}