#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	string name[1001];
	int ansidx;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name[i];
		for (int j = 0; j < name[i].length(); j++)
		{
			if (name[i][j] == 'S')
			{
				ansidx = i;
			}
		}
	}
	cout << name[ansidx] << endl;

	return 0;
}