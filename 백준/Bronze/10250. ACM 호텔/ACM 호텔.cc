#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int t;
	int h, w, n;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> h >> w >> n;
		int result;

		if (n%h == 0) {
			result = h * 100 + (n / h);
		}
		else {
			result = (n%h) * 100 + (n / h) + 1;
		}
		cout << result << endl;
	}
	return 0;											
}
