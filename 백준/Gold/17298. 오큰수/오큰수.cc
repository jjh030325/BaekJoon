#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
using namespace std;

int n, arr[1000001];

int main()
{
	stack<int> stack;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		while (1)
		{
			if (stack.empty())
			{
				stack.push(i);
				break;
			}
			else
			{
				int top = stack.top();
				if (arr[i] > arr[top])
				{
					arr[top] = arr[i];
					stack.pop();
				}
				else
				{
					stack.push(i);
					break;
				}
			}
		}
	}

	while (!stack.empty()) 
	{
		int top = stack.top();
		arr[top] = -1;
		stack.pop();
	}

	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << ' ';
	}
	return 0;
}