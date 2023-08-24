#include <iostream>
#include <string>
using namespace std;

int k, n;
string arr[51];
int check[51] = { 0, };
string tmp;
string best;

int main()
{
	cin >> k >> n;

	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
		if (best.length() < arr[i].length())
		{
			best.replace(0, best.length(), arr[i]);
		}
		else if (best.length() == arr[i].length())
		{
			if (best < arr[i])
			{
				best.replace(0, best.length(), arr[i]);
			}
		}
	}
	for (int i = k; i < n; i++)
	{
		arr[i].replace(0, arr[i].length(), best);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] < arr[j] + arr[i])
			{
				tmp.replace(0, tmp.length(), arr[i]);
				arr[i].replace(0, arr[i].length(), arr[j]);
				arr[j].replace(0, arr[j].length(), tmp);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	return 0;
}