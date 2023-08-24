#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
	int stack_arr[10001] = { 0, };
	int size = 0;
	void push(int n)
	{
		size++;
		stack_arr[size] = n;
	}
	int pop()
	{
		int tmp = stack_arr[size];
		stack_arr[size] = 0;
		size--;
		if (size < 0)
		{
			size = 0;
			return -1;
		}
		else
		{
			return tmp;
		}
	}
	int size_value()
	{
		return size;
	}
	int empty()
	{
		if (size == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int top()
	{
		if (size <= 0)
		{
			return -1;
		}
		return stack_arr[size];
	}
};

int main()
{
	stack stack;
	int n, a;
	string s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> a;
			stack.push(a);
		}
		else if (s == "pop")
		{
			cout << stack.pop() << endl;
		}
		else if (s == "size")
		{
			cout << stack.size_value() << endl;
		}
		else if (s == "empty")
		{
			cout << stack.empty() << endl;
		}
		else if(s == "top")
		{
			cout << stack.top() << endl;
		}
	}
	return 0;
}