#include <iostream>
#include <algorithm>
using namespace std;

bool gijun(int a, int b) {
	return a > b;
}

int main()
{
	int n, min = 0;
	int tree[100001] = { 0, };
	int check;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> tree[i];
	}
	sort(tree + 1, tree + n + 1, gijun);
	for (int i = 1; i <= n; i++)
	{
		check = i + 1 + tree[i];
		if (min < check)
		{
			min = check;
		}
	}
	cout << min << endl;
	return 0;
}