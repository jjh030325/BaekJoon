#include <iostream>
#include <algorithm>
using namespace std;

int n;
int rankarr[500001];
long long int result = 0;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> rankarr[i];
	}
	sort(rankarr, rankarr + n + 1);
	for (int i = 1; i <= n; i++)
	{
		result += abs(i - rankarr[i]);
	}
	cout << result << endl;
	return 0;
}