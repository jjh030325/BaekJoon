#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int dap = 0;
	int sum = 1;
	stack<char>stack;
	string input;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
		{
			sum *= 2;
			stack.push('(');
		}
		else if (input[i] == '[')
		{
			sum *= 3;
			stack.push('[');
		}
		else if (stack.empty())
		{
			cout << 0 << endl;
			return 0;
		}
		else if (input[i] == ')')
		{
			if (stack.top() != '(')
			{
				cout << 0 << endl;
				return 0;
			}
			if (input[i - 1] == '(')
			{
				dap += sum;
			}
			stack.pop();
			sum /= 2;
		}
		else if (input[i] == ']')
		{
			if (stack.top() != '[')
			{
				cout << 0 << endl;
				return 0;
			}
			if (input[i - 1] == '[')
			{
				dap += sum;
			}
			stack.pop();
			sum /= 3;
		}
		else
		{
			cout << 0 << endl;
			return 0;
		}
	}

	if (stack.empty())
	{
		cout << dap << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}