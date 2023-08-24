#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	n /= 4;
	for (int i = 0; i < n; i++)
	{
		cout << "long ";
	}
	cout << "int" << endl;

	return 0;
}