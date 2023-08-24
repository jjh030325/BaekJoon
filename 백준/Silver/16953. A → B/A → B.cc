#include <iostream>
using namespace std;

int a, b;
int dap = 1;

int main()
{
	cin >> a >> b;
	
	while (1)
	{
		if (a == b)
		{
			cout << dap << endl;
			return 0;
		}else if (a > b)
		{
			cout << -1 << endl;
			return 0;
		}
		else if (b % 10 == 1)
		{
			b = b / 10;
		}
		else if (b % 2 != 1)
		{
			b = b / 2;
		}
		else
		{
			cout << -1 << endl;
			return 0;
		}
		dap++;
	}
	return 0;
}