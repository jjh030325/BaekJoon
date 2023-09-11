#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string input;

	cin >> input;

	for (int i = 0; i < input.length() - 3; i++)
	{
		if (input.substr(i, 4) == "DKSH")
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}