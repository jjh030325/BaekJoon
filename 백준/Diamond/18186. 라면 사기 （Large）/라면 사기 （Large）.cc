#include <iostream>
#include <algorithm>
using namespace std;

long n, b, c, gongjang[1000001] = { 0, };
long money = 0;
long imsi = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> b >> c;
	for (int i = 0; i < n; i++)
	{
		cin >> gongjang[i];
	}
	if (b < c)
	{
		c = b;
	}
	for (int i = 0; i < n; i++)
	{
		imsi = min(gongjang[i], gongjang[i + 1]);
		if (i < n - 2 && gongjang[i] > 0 && gongjang[i + 1] > 0 && gongjang[i + 2] > 0 && gongjang[i + 1] <= gongjang[i + 2])
		{
			imsi = min(gongjang[i], gongjang[i + 1]);
			imsi = min(imsi, gongjang[i + 2]);
			gongjang[i]-=imsi;
			gongjang[i + 1]-=imsi;
			gongjang[i + 2]-=imsi;
			money += (b + 2 * c)*imsi;
		}
		if (i < n - 1 && gongjang[i] > 0 && gongjang[i + 1])
		{
			imsi = min(gongjang[i], gongjang[i + 1]);
			imsi = min(imsi, gongjang[i + 1] - gongjang[i + 2]);
			gongjang[i] -= imsi;
			gongjang[i + 1] -= imsi;
			money += (b + c)*imsi;
			if (gongjang[i] != 0)
			{
				i--;
				continue;
			}
		}
		if (gongjang[i] > 0)
		{
			money += b * gongjang[i];
			gongjang[i] -= gongjang[i];
		}
	}
	cout << money << "\n";
	return 0;
}