#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, string>sitepassword;
	int n, m;
	string a, b;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		sitepassword[a] = b;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		cout << sitepassword[a] << "\n";
	}
	return 0;
}