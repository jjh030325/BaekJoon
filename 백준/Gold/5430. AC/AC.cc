#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t, n, index;
	string a, act, arr[100001];

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> act;
		cin >> n;
		cin >> a;
		index = 0;
		string imsi = "";
		bool turn = false;
		bool error = false;

		//배열로 넣기
		for (int j = 1; j < a.length() - 1; j++)
		{
			if (a[j] == ',')
			{
				arr[index] = imsi;
				index++;
				imsi = "";
			}
			else
			{
				imsi += a[j];
			}
		}
		arr[index] = imsi;

		//행동 실행
		index = 0;
		
		for (int j = 0; j < act.length(); j++)
		{
			if (act[j] == 'D')
			{
				//삭제
				if (turn == false)
				{
					index++;
				}
				else
				{
					n--;
				}
				if (index > n)
				{
					error = true;
					break;
				}
			}
			else if (act[j] == 'R')
			{
				//회전
				if (turn == false)
				{
					turn = true;
				}
				else
				{
					turn = false;
				}
			}
		}
		//출력
		if (error == true)
		{
			cout << "error" << endl;
			error = false;
		}
		else if (index == n)
		{
			cout << "[]" << endl;
		}
		else if(turn == false)
		{
			cout << "[";
			for (int j = index; j < n - 1; j++)
			{
				cout << arr[j] << ",";
			}
			cout << arr[n - 1] << "]" << endl;
		}
		else
		{
			cout << "[";
			for (int j = n - 1; j > index; j--)
			{
				cout << arr[j] << ",";
			}
			cout << arr[index] << "]" << endl;
		}
	}
}
