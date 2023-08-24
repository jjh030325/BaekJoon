#include <iostream>
#include <algorithm>
using namespace std;

int n;
double a, b = 1, c = 0;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		b = b * a;
		if (c < b)
		{
			c = b;
		}
		if (b < 1)
		{
			b = 1;
		}
	}
	cout << fixed;
	cout.precision(3);
	cout << c << endl;
	return 0;
}