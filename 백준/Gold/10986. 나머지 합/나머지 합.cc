#include <iostream>
#include <algorithm>
using namespace std;

long long a;
long long sum = 0;
long long na[1001];                        //나머지
long long n, m;                            //배열개수, 나눌 수
long long dap = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		sum = sum + a;
		na[sum % m]++;
	}

	for (int i = 0; i <= m; i++)
	{
		dap += na[i] * (na[i] - 1) / 2;
	}
	dap += na[0];
	cout << dap << "\n";
	return 0;
}