#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int a[5000001];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	deque<int> d;
	int n, l, now = 1000000001;

	cin >> n >> l;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (i - l >= 0 && now == a[i - l])         //현 최소가 빠져나갈 값과 같을 때
		{
			if (d.back() < a[i])                   //현 덱의 가장 뒤가 현 위치보다 작거나 같은 경우
			{
				d.push_back(a[i]);					   //맨 뒤에 현 위치 값 넣어줌
			}
			else
			{
				int nn = d.size();
				for (int j = 1; j < nn; j++)
				{
					if (d.back() > a[i])				   //현 덱의 가장 뒤가 현 위치보다 큰 경우
					{
						d.pop_back();                      //가장 뒷 값 삭제
					}
					else
					{
						break;
					}
				}
				d.push_back(a[i]);
			}
			d.pop_front();						   //맨 앞의 값 제거
			now = d.front();
			cout << now << " ";
			continue;
		}
		if (now > a[i])                            //현 최소보다 현 위치 값이 작은 경우
		{
			now = a[i];
			d.clear();
			d.push_front(a[i]);                    //덱 초기화 후 현 위치 값 넣어주고 현 최소 갱신.
		}
		else if (d.back() < a[i])                   //현 덱의 가장 뒤가 현 위치보다 작거나 같은 경우
		{
			d.push_back(a[i]);					   //맨 뒤에 현 위치 값 넣어줌
		}
		else
		{
			int nn = d.size();
			for (int j = 1; j < nn; j++)
			{
				if (d.back() > a[i])				   //현 덱의 가장 뒤가 현 위치보다 큰 경우
				{
					d.pop_back();                      //가장 뒷 값 삭제
				}
				else
				{
					break;
				}
			}
			d.push_back(a[i]);
		}

		cout << now << " ";
	}
	return 0;
}
