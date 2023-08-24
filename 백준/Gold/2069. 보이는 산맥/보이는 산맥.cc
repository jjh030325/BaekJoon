#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	long long int dap = 0, arr[32768] = { 0, }, x, y, imsi;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> imsi;
		if (arr[x] != 0)
		{
			if (imsi > arr[x])
			{
				arr[x] = imsi;
			}
		}
		else
		{
			arr[x] = imsi;
		}
	}
	x = 0;
	y = 0;
	for (int i = 0; i < 32768; i++)
	{
		if (arr[i] != 0)
		{
			dap += (arr[i] - i) * (arr[i] - i);
			if (y < i)
			{
				x = i;
				y = arr[i];
			}
			else if (y>=arr[i])
			{
				dap -= (arr[i] - i) * (arr[i] - i);
			}else
			{
				dap -= (i - y)*(i - y);
				y = arr[i];
			}
		}
	}
	cout << dap << endl;
	return 0;
}