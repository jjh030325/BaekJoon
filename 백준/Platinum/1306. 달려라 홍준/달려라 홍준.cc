#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int a[10000001];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	deque<int> d;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)					//입력
	{
		cin >> a[i];
	}
	m = m * 2 - 1;
	for (int i = 0; i < n; i++)
	{
		int s = d.size();
		for (int j = 0; j < s; j++)
		{
			if (a[i] > d.back())
			{
				d.pop_back();
			}
			else
			{
				break;
			}
		}
		d.push_back(a[i]);
		
		if (i >= m && a[i - m] == d.front())
		{
			d.pop_front();
		}
		if (i >= m - 1)
		{
			cout << d.front() << " ";
		}
		
	}

	return 0;
}