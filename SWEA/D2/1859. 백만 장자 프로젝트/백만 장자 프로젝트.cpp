#include<iostream>
#include <vector>

using namespace std;

int num = 0;

void solution(int x)
{	
	num++;
	vector<int> v(x);
	for (int i = 0; i < x; i++)
	{
		cin >> v[i];
	}

	int max = v[x - 1];
	long long sum = 0;
	for (int i = x - 2; i >= 0; i--)
	{
		if (max > v[i])
		{
			sum += max - v[i];
		}
		else if (max < v[i])
		{
			max = v[i];
		}
	}

	cout << "#" << num << " " << sum << endl;
}

int main(int argc, char** argv)
{
	int test_case, input;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>input;
        solution(input);
	}
	return 0;
}