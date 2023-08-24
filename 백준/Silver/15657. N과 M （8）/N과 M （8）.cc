#include <iostream>
#include <algorithm>
using namespace std;

int n, m, inarr[9], arr[9];

void dps(int nn)
{
	if (nn == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[nn-1]<=inarr[i])
		{
			arr[nn] = inarr[i];
			dps(nn + 1);
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> inarr[i];
	}
	
	sort(inarr, inarr + n);

	dps(0);
	return 0;
}