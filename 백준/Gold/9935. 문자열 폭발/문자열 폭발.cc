#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string sentense;
string boom;
string imsi = "";

int main()
{
	int sentenselen;
	int boomlen;
	cin >> sentense;
	cin >> boom;
	sentenselen = sentense.length();
	boomlen = boom.length();

	for (int i = 0; i < sentenselen; i++)
	{
		imsi += sentense[i];
		if (imsi.length() >= boomlen)
		{
			bool boomcheck = true;
			for (int j = 0; j < boomlen; j++)
			{
				if (imsi[imsi.length() - boomlen + j] != boom[j])
				{
					boomcheck = false;
					break;
				}
			}
			if (boomcheck == true)
			{
				imsi.erase(imsi.length() - boomlen, imsi.length());
			}
		}
	}
	if (imsi == "")
	{
		cout << "FRULA" << endl;
	}
	else
	{
		cout << imsi << endl;
	}

	return 0;
}

/*
첫째 줄에 문자열이 주어진다. 문자열의 길이는 1보다 크거나 같고, 1,000,000보다 작거나 같다.

둘째 줄에 폭발 문자열이 주어진다. 길이는 1보다 크거나 같고, 36보다 작거나 같다.

두 문자열은 모두 알파벳 소문자와 대문자, 숫자 0, 1, ..., 9로만 이루어져 있다.

출력
첫째 줄에 모든 폭발이 끝난 후 남은 문자열을 출력한다.
*/