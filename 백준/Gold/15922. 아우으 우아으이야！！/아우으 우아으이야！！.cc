#include <iostream>
using namespace std;

int main()
{		
	int n, x, y, dap = 0, wechi[2];

	cin >> n;
	cin >> x >> y;
	wechi[0] = x;
	wechi[1] = y;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> x >> y;
		if (x > wechi[1])
		{
			dap += wechi[1] - wechi[0];
			wechi[0] = x;
			wechi[1] = y;
		}
		else if (wechi[1] < y)
		{
			wechi[1] = y;
		}
	}
	dap += wechi[1] - wechi[0];
	cout << dap << endl;
	return 0;
}