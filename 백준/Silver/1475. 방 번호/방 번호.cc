#include <iostream>
using namespace std;

int samecheck[10] = { 0, };
int n;
int dap = 0;

int main()
{
	cin >> n;
	
	while (n > 0)
	{
		samecheck[n % 10]++;
		n /= 10;
	}
	samecheck[6] += samecheck[9];
	if (samecheck[6] % 2 == 1)
	{
		samecheck[6]++;
	}
	samecheck[6] /= 2;
	for (int i = 0; i <= 8; i++)
	{
		if (dap < samecheck[i])
		{
			dap = samecheck[i];
		}
	}
	cout << dap << endl;
	return 0;
}