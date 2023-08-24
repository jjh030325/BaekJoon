#include <iostream>
using namespace std;

int n, a;
int nd[51];
int check[51];
int leaf = 0;

void dps(int parents)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (nd[i] == parents && check[i] != 1)
		{
			check[i] = 1;
			c++;
			dps(i);
		}
	}
	if (c == 0)
	{
		leaf++;
		return;
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)       //노드연결
	{
		cin >> a;
		nd[i] = a;
	}
	cin >> a;                         //제거할 노드 입력
	nd[a] = -2;
	for (int i = 0; i < n; i++)
	{
		if (nd[i] == -1 && nd[i] != a)
		{
			dps(i);
		}
	}
	cout << leaf << endl;
	return 0;
}