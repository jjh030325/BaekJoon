#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string d, b, db[500001];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, bool>person;
	int n, m, c = 0;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++)             //듣도 못한 사람
	{
		cin >> d;
		person[d] = true;
	}
	for (int i = 0; i < m; i++)             //보도 못한 사람
	{
		cin >> b;
		if (person[b] == true)
		{
			c++;
			db[c] = b;                      //듣도 보도 못한 사람 체크
		}
	}
	cout << c << "\n";
	sort(db, db + c + 1);
	for (int i = 1; i <= c; i++)
	{
		cout << db[i] << "\n";
	}
	return 0;
}