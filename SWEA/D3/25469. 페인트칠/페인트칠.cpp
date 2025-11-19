#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solution()
{
	int x, y, count=0;
	bool allcheck = true;
	
	cin >> x >> y;
	vector<string> arr(x);

	// 입력받으면서 가로 빙고 개수 체크
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
		bool check = true;
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] == '.')
			{
				check = false;
				allcheck = false;
			}
		}
		if (check)
		{
			count++;
		}
	}

	if (allcheck)
	{
		count = min(x, y);
	}
	else
	{
		for (int i = 0; i < y; i++)
		{
			bool check = true;
			for (int j = 0; j < x; j++)
			{
				if (arr[j][i] == '.')
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				count++;
			}
		}
	}

	cout << count << endl;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		solution();
	}
	return 0;
}