#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

void draw_star(int x, int y, int num)
{
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1)
	{
		cout << " ";
	}
	else
	{
		if (num / 3 == 0)
		{
			cout << "*";
		}
		else
		{
			draw_star(x, y, num / 3);
		}
	}
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			draw_star(j, i, n);
		}
		cout << endl;
	}
}