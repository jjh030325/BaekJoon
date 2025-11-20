#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solution()
{
	string input;
	int c=1;
	bool check = true;
	vector<int> count(10);
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		count[int(input[i] - '0')]++;
		if (count[int(input[i] - '0')] > 2)
		{
			check = false;
			break;
		}
		else if (count[int(input[i] -'0')] == 2)
		{
			if (i - int(input[i] - '0') - 1 >= 0)
			{
				if (input[i] != input[i - int(input[i] - '0') - 1])
				{
					check = false;
				}
			}
			else
			{
				check = false;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (count[i] == 1)
		{
			check = false;
			break;
		}
	}

	if (check)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		solution();
	}
	return 0;
}