#include <iostream>
#include <algorithm>
using namespace std;

int n;
char board[35][35];

void check(int y, int x)
{
	if (board[y][x] == board[y][x + 1] && board[y][x + 1] == board[y][x + 2] && x + 2 < n)  //가로 세개
	{
		cout << board[y][x] << endl;
		exit(0);
	}
	if (board[y][x] == board[y + 1][x] && board[y + 1][x] == board[y + 2][x] && y + 2 < n)  //세로 세개
	{
		cout << board[y][x] << endl;
		exit(0);
	}
	if (board[y][x] == board[y + 1][x + 1] && board[y + 1][x + 1] == board[y + 2][x + 2] && y + 2 < n && x + 2 < n)  //올라가는 대각선
	{
		cout << board[y][x] << endl;
		exit(0);
	}
	if (board[y][x] == board[y + 1][x - 1] && board[y + 1][x - 1] == board[y + 2][x - 2] && y + 2 < n && x - 2 >= 0)//내려가는 대각선
	{
		cout << board[y][x] << endl;
		exit(0);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> board[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] != '.')
			{
				check(i, j);
			}
		}
	}
	
	cout << "ongoing" << endl;
	return 0;
}