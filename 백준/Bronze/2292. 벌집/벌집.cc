#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, count, check = 1;

	cin >> n;

	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	for (int i = 1; n > check; i++)
	{
		check += 6 * i;
		count = i;
	}
	cout << count + 1 << endl;

	return 0;											
}
