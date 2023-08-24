#include <iostream>
using namespace std;

int two = 0, five = 0, n;

int main()
{
	cin >> n;
	if (n == 1 || n == 3)
	{
		cout << -1 << endl;
		return 0;
	}
	five = n / 5;
	n = n % 5;
	if (n % 2 == 0)
	{
		two = n / 2;
		cout << five + two << endl;
		return 0;
	}
	else
	{
		n += 5;
		five -= 1;
		two = n / 2;
		cout << five + two << endl;
	}
	return 0;
}