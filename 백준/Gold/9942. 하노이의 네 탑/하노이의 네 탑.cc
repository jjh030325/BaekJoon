#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

long long dp[1001];

int main()
{
	long long n, dap = 0, imsi = 1, maxcount = 1, count = 0;       //원판개수, 답, 중간에 더해질 값, 규칙체크용, 규칙체크용

	for (int i = 1; i <= 1000; i++)
	{
		dap += imsi;                                         //답에 임시값 더하기
		dp[i] = dap;
		count++;                                             //count체크
		if (maxcount == count)                               //maxcount와 count가 같다면 maxcount를 1 증가시키고 count초기화
		{
			maxcount++;
			count = 0;
			imsi *= 2;                                       //해당 상황이 올 때마다 중간에 더해질 값은 2씩 곱해짐.
		}
	}

	int i = 1;
	while (cin >> n) {
		cout << "Case " << i << ": " << dp[n] << endl;
		i++;
	}

	return 0;
}
