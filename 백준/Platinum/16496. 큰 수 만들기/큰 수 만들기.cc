#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string arr[1001];
bool zero_check = true;

bool str_sort(string a, string b)
{
	return a + b > b + a;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] != "0")
		{
			zero_check = false;
		}
	}
	sort(arr, arr + n, str_sort);
	if (zero_check == false)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i];
		}
		cout << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}