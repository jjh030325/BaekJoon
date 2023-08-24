//5763726 조준현
#include <iostream>
using namespace std;

int main()
{
	int a[4][2];
	int x[2][2];
	int y[2][2];
	for (int i = 0; i < 2; i++)
	{
		x[i][0] = 1001;
		x[i][1] = 1001;
		y[i][0] = 1001;
		y[i][1] = 1001;
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i][0] >> a[i][1];
		if (i == 0)
		{
			x[0][0] = a[i][0];
			y[0][0] = a[i][1];
		}
		else
		{
			if (x[0][0] == a[i][0])
			{
				x[0][1] = a[i][0];
			}
			else
			{
				if (x[1][0] == a[i][0])
				{
					x[1][1] = a[i][0];
				}
				else
				{
					x[1][0] = a[i][0];
				}
			}
			if (y[0][0] == a[i][1])
			{
				y[0][1] = a[i][1];
			}
			else
			{
				if (y[1][0] == a[i][1])
				{
					y[1][1] = a[i][1];
				}
				else
				{
					y[1][0] = a[i][1];
				}
			}
		}
	}
	if (x[0][1] == 1001)
	{
		cout << x[0][0] << " ";
	}
	else
	{
		cout << x[1][0] << " ";
	}
	if (y[0][1] == 1001)
	{
		cout << y[0][0] << endl;
	}
	else
	{
		cout << y[1][0] << endl;
	}
	return 0;
}