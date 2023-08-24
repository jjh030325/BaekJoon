#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 1 || n == 2 || n == 4 || n == 7)
	{
		cout << -1 << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i * 3 + j * 5 == n)
				{
					cout << i + j << endl;
					return 0;
				}
			}
		}
	}
	return 0;											
}
