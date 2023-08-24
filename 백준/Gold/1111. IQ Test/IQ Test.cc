#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, arr[51], a, b;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (n == 1)                   //숫자 하나인 경우
	{
		cout << "A" << endl;
		return 0;
	}
	else if (n == 2)
	{
		if (arr[0] == arr[1])     //숫자 두개가 같은 경우
		{
			cout << arr[0] << endl;
			return 0;
		}
		else                      //숫자 두개가 다른 경우
		{
			cout << "A" << endl;
			return 0;
		}
	}
	else                          //일반적인 경우 (앞 수*a+b)여부 체크
	{
		if (arr[1] - arr[0] != 0) //나누는게 0이 되지 않는 경우
		{
			a = (arr[2] - arr[1]) / (arr[1] - arr[0]);
			b = arr[1] - a * arr[0];
		}
		else                      //나누는게 0이되는 경우 a, b는 각각 1, 0이다.
		{
			a = 1;
			b = 0;
		}
		for (int i = 1; i < n; i++)
		{
			if (arr[i] != arr[i - 1] * a + b)    //정상적으로 진행되는지 체크
			{
				cout << "B" << endl;
				return 0;
			}
		}
		cout << arr[n - 1] * a + b << endl;
	}
	return 0;
}