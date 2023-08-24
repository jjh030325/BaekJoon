#include <iostream>
#include <string>
using namespace std;

class Check
{
private:
	int S[21] = { 0, };
	int stay = 1;
public:
	void all() {
		for (int i = 1; i <= 20; i++)
		{
			S[i] = i;
		}
	}
	void empty() {
		for (int i = 1; i <= 20; i++)
		{
			S[i] = 0;
		}
	}
	void add(int a) {
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == a)
			{
				return;
			}
		}
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == 0)
			{
				S[i] = a;
				return;
			}
		}
	}
	void remove(int a) {
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == a)
			{
				S[i] = 0;
				return;
			}
		}
	}
	void check(int a) {
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == a)
			{
				cout << 1 << "\n";
				return;
			}
		}
		cout << 0 << "\n";
		return;
	}
	void toggle(int a) {
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == a)
			{
				S[i] = 0;
				return;
			}
		}
		for (int i = 1; i <= 20; i++)
		{
			if (S[i] == 0)
			{
				S[i] = a;
				return;
			}
		}
	}
};

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, a;
	string c;
	Check cc;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c == "all")
		{
			cc.all();
		}
		else if (c == "empty")
		{
			cc.empty();
		}
		else
		{
			cin >> a;
			if (c == "add")
			{
				cc.add(a);
			}
			else if (c == "remove")
			{
				cc.remove(a);
			}
			else if (c == "check")
			{
				cc.check(a);
			}
			else                           //toggle
			{
				cc.toggle(a);
			}
		}
	}
	return 0;
}