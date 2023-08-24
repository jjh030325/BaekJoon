#include <iostream>
using namespace std;

int n, check[50001] = { 0, };
int money, su, sum = 0;
int main()
{
	check[0] = 1;
	for (int s = 0; s < 3; s++)
	{
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> money >> su;
			sum += money * su;
			for (int j = 50000; j >= 0; j--)
			{
				if (check[j] == 1)
				{
					for (int t = 1; t <= su; t++)
					{
						if (j + (money * t) <= 50000)
						{
							check[j + (money * t)] = 1;
						}
					}
				}
			}
		}
		if (sum % 2 == 0)
		{
			cout << check[sum / 2] << endl;
		}
		else
		{
			cout << 0 << endl;
		}
		for (int j = 50000; j > 0; j--)
		{
			if (check[j] == 1)
			{
				check[j] = 0;
			}
		}
	}
	return 0;
}