#include <iostream>
#include <map>
#include <string>
using namespace std;

string s;
map<string, bool> check;
int c = 0;
string imsi;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	
	for (int i = 0; i < s.length(); i++)
	{
		imsi = "";
		for (int j = i; j < s.length(); j++)
		{
			imsi += s[j];
			if (check[imsi] == false)
			{
				check[imsi] = true;
				c++;
			}
		}
	}
	cout << c << "\n";
	return 0;
}