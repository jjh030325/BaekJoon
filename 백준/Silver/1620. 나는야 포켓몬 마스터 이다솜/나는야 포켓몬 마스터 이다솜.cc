#include <iostream>
#include <map>
#include <string>
using namespace std;

int n, m;
string in;
map<string, string> word;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> in;
		word[in] = to_string(i);
		word[to_string(i)] = in;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> in;
		cout << word[in] << "\n";
	}
	return 0;
}