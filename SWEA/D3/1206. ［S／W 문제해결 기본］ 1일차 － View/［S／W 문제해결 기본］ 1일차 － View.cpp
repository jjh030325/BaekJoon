#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int num = 0;

void solution(int n)
{
	int answer = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0) // 뒤쪽만 확인
		{
			if (v[i] > v[i + 1] && v[i] > v[i + 2])
			{
				answer += v[i] - max(v[i + 1], v[i + 2]);
			}
		}
		else if (i == 1) // 앞에 하나와 뒤쪽만 확인
		{
			if (v[i] > v[i + 1] && v[i] > v[i + 2] && v[i] > v[i - 1])
			{
				answer += v[i] - max(max(v[i + 1], v[i + 2]), v[i - 1]);
			}
		}
		else if (i == n - 1) // 앞쪽만 확인
		{
			if (v[i] > v[i - 1] && v[i] > v[i - 2])
			{
				answer += v[i] - max(v[i - 1], v[i - 2]);
			}
		}
		else if (i == n - 2) // 뒤에 하나와 앞쪽만 확인
		{
			if (v[i] > v[i - 1] && v[i] > v[i - 2] && v[i] > v[i + 1])
			{
				answer += v[i] - max(max(v[i - 1], v[i - 2]), v[i + 1]);
			}
		}
		else // 앞뒤 두칸 확인
		{
			if (v[i] > v[i - 1] && v[i] > v[i - 2] && v[i] > v[i + 1] && v[i] > v[i + 2])
			{
				answer += v[i] - max(max(max(v[i - 1], v[i - 2]), v[i + 1]), v[i + 2]);
			}
		}
	}
	cout << "#" << ++num << " " << answer << endl;
}

int main(int argc, char** argv)
{
	int test_case, n;
	
	for (test_case = 0; test_case <= 10; test_case++)
	{
		cin >> n;
		solution(n);
	}
	return 0;
}