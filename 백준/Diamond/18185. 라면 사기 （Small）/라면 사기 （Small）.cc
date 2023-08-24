#include <iostream>
using namespace std;

int n, gongjang[10001] = { 0, };
int money = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> gongjang[i];
	}
	for (int i = 0; i < n; i++)
	{
		while (gongjang[i] > 0)
		{
			if (i < n - 2 && gongjang[i] > 0 && gongjang[i + 1] > 0 && gongjang[i + 2] && gongjang[i + 1] <= gongjang[i + 2])
			{
				gongjang[i]--;
				gongjang[i + 1]--;
				gongjang[i + 2]--;
				money += 7;
			}
			else if (i < n - 1 && gongjang[i] > 0 && gongjang[i + 1])
			{
				gongjang[i]--;
				gongjang[i + 1]--;
				money += 5;
			}
			else if (gongjang[i] > 0)
			{
				gongjang[i]--;
				money += 3;
			}
		}
	}
	cout << money << endl;
	return 0;
}