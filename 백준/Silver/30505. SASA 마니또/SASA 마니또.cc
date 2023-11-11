#include <iostream>
#include <algorithm>
using namespace std;

bool manicheck[200001] = { false, };         //누군가의 마니또인지 확인할 수 있는 경우
bool hasmani[200001] = { false, };           //마니또가 누군지 확인할 수 있는 경우
bool mix[200001] = { false, };

int main()
{
	int n, m;
	int a, b;
	int ans = 0;
	int count = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		manicheck[b] = true;
		hasmani[a] = true;
		mix[a] = true;
		mix[b] = true;
	}
	cin >> b;
	if (hasmani[b] == true)
	{
		cout << "NOJAM" << endl;
	}
	else
	{
		for (int j = 1; j <= n; j++)
		{
			if (manicheck[j] == false && j != b)
			{
				ans++;
			}
			if (mix[j] == false)
			{
				count++;
			}
		}
		if (ans == 1)
		{
			cout << "NOJAM" << endl;
		}
		else if (count <= 2 && n - m <= 2)
		{
			cout << "NOJAM" << endl;
		}
		else
			cout << ans << endl;
	}
	return 0;
}