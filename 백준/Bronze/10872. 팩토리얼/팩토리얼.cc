#include <iostream>
using namespace std;

int main()
{
	int n;
	int dap = 1;
	cin >> n;
	if (n == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		dap *= i;
	}
	cout << dap << endl;
	return 0;
}