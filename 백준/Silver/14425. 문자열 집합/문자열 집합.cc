#include <iostream>
#include <map>
#include <string>
using namespace std;

int n, m;
string in;
map<string, bool> s;
int c = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		s[in] = true;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> in;
		if (s[in] == true)
		{
			c++;
		}
	}
	cout << c << endl;

	return 0;
}