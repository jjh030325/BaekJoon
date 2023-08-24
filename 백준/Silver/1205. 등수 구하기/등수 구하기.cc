#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, score, p, dap = -1;
	int pp[51];

	cin >> n >> score >> p;
	if (n == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> pp[i];
		if (score >= pp[i] && dap == -1)
		{
			dap = i;
		}
	}
	if (n < p && dap == -1)
	{
		dap = n + 1;
	}
	if (pp[dap] == pp[p] && pp[p] == score)
	{
		dap = -1;
	}
	cout << dap << endl;
	return 0;
}