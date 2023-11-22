#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string ans = "";
	string input;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input.length() == 3)
		{
			if (ans == "")
			{
				ans = input;
			}
			else if (ans > input)
			{
				ans = input;
			}
		}
	}
	cout << ans << endl;

	return 0;
}