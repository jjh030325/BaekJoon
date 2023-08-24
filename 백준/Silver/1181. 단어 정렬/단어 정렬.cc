#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n; 
string word[20001];

bool compare(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}
	sort(word, word + n, compare);
	for (int i = 0; i < n; i++)
	{
		if (word[i] == word[i - 1])
		{
			continue;
		}
		else
		{
			cout << word[i] << "\n";
		}
	}
	return 0;
}