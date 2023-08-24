#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string name;
	int under = 0;
	int clon = 0;

	cin >> name;

	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == ':')
		{
			clon++;
		}
		else if (name[i] == '_')
		{
			under++;
		}
	}
	cout << name.length() + clon + under * 5 << endl;

	return 0;
}