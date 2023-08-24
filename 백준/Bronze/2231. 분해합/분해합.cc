#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, dap = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int imsi = i;
		sum = i;
		do
		{
			sum = sum + imsi % 10;
			imsi /= 10;
		} while (0 < imsi);
		if (sum == n)
		{
			dap = i;
			break;
		}
	}
	cout << dap << endl;
	return 0;											
}
