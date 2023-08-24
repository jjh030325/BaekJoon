#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string a;
	for (int i = 0; i < 100; i++)
	{
		getline(cin, a);
		if (a == "")
		{
			break;
		}
		else
		{
			cout << a << endl;
		}
	}
	return 0;
}