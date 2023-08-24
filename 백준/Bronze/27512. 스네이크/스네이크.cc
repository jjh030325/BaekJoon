#include <iostream>
#include <algorithm>
using namespace std;

int n;
int x, y;

int main()
{
	cin >> x >> y;
	n = x * y;
	if (n % 2 == 0)
	{
		cout << n << endl;
	}
	else
	{
		cout << n - 1 << endl;
	}
	return 0;
}