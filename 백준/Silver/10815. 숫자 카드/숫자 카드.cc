#include <iostream>
using namespace std;

int m, n, pcard[10000000], mcard[10000000];
int a;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
		{
			a = a - a - a;
			mcard[a] = 1;
		}
		else
		{
			pcard[a] = 1;
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		if (a < 0)
		{
			a = a - a - a;
			if (mcard[a] == 1)
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 0 << " ";
			}
		}
		else
		{
			if (pcard[a] == 1)
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 0 << " ";
			}
		}
	}
	cout << "\n";
	return 0;
}