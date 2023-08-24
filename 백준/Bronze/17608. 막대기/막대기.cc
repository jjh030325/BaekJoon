#include <iostream>
#include <algorithm>
using namespace std;

int n;
int h[100001];
int dap = 1;
int s;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	s = h[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (s < h[i])
		{
			s = h[i];
			dap++;
		}
	}
	cout << dap << endl;
	return 0;
}