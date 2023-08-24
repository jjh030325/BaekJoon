#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int r, c, dap = 0, xm[4] = { 0,0,1,-1 }, ym[4] = { 1, -1, 0, 0 };
char board[20][20], input;
bool visit[26];

void dps(int x, int y, int dep)
{
	dap = max(dep, dap);             //젤 길게 가는 경우 체크용
	for (int i = 0; i < 4; i++)
	{
		int xx = x + xm[i];
		int yy = y + ym[i];
		if (xx >= 0 && yy >= 0 && xx < c && yy < r)   //범위 밖으로 빠져나가는 경우 제외
		{
			if (visit[board[yy][xx] - 'A'] == false)
			{
				visit[board[yy][xx] - 'A'] = true;
				dps(xx, yy, dep + 1);
				visit[board[yy][xx] - 'A'] = false;
			}
		}
	}
}

int main()
{
	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> input;
			board[i][j] = input;
		}
	}
	visit[board[0][0] - 'A'] = true;
	dps(0, 0, 1);
	cout << dap << endl;

	return 0;
}
