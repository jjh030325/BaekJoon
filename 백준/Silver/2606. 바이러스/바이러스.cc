#include <iostream>
using namespace std;

class computer
{
private:
	int number;
	int link[101] = { 0, };
public:
	void numberset(int number) { this->number = number; }
	void linkmake(int a) { link[a] = 1; }
	int checknum(int a) { return link[a]; }
	int viruscheck()
	{
		return link[1];
	}
};
computer com[101];
int n, t;
int a, b;
int virus = 0;
int check[101] = { 0, };
int visit[101] = { 0, };

void loop(int a, int n)
{
	if (visit[a] == 1)
	{
		return;
	}
	visit[a] = 1;
	check[a] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (com[a].checknum(i) == 1)
		{
			loop(i, n);
		}
	}
}
int main()
{
	
	cin >> n >> t;

	for (int i = 0; i < t; i++)       //연결
	{
		cin >> a >> b;
		com[a].linkmake(b);
		com[b].linkmake(a);
	}
	for (int i = 2; i <= n; i++)
	{
		if (com[i].viruscheck() == 1)
		{
			loop(i, n);
		}
	}
	
	for (int i = 2; i <= n; i++)      //체크
	{
		if (check[i] == 1)
		{
			virus++;
		}
	}
	cout << virus << endl;
	return 0;
}