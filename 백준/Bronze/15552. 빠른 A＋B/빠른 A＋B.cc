#include <iostream>
using namespace std;

int main()
{	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}