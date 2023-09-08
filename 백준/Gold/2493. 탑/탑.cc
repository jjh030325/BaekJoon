#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int input[500001];
int output[500001];

int main()
{
	int n, now = 0;
	stack<int>stack;
	cin >> n;

	cin >> input[1];
	stack.push(0);
	output[1] = 0;
	input[0] = 0;
	for (int i = 2; i <= n; i++)
	{
		cin >> input[i];
		if (input[i - 1] > input[i])
		{
			stack.push(i - 1);
		}
		else
		{
			for (;;)
			{
				if (input[stack.top()] <= input[i] && stack.top() != 0)
				{
					stack.pop();
				}
				else
				{
					break;
				}
			}
		}
		output[i] = stack.top();
	}

	for (int i = 1; i <= n; i++)
	{
		cout << output[i] << " ";
	}

	return 0;
}