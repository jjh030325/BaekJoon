#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	int l = 0;
	string s;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
			{
				l++;
			}
			else
			{
				l--;
				if (l < 0)
				{
					l = 1;
					break;
				}
			}
		}
		if (l == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
			l = 0;
		}
	}
	return 0;
}