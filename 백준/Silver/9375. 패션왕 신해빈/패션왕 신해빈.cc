#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, n;
	string name[31];
	string type[31];
	int dap[31];
	int d = 1;

	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		d = 1;
		for (int j = 0; j < n; j++)
		{
			cin >> name[j] >> type[j];
			dap[j] = 2;
		}
		for (int j = 0; j < n; j++)
		{
			if (type[j] != "0")
			{
				for (int l = j + 1; l < n; l++)
				{
					if (type[j] == type[l])
					{
						type[l] = "0";
						dap[j]++;
						dap[l] = 1;
					}
				}
			}
		}
		for (int j = 0; j < n; j++)
		{
			d *= dap[j];
		}
		d = d - 1;
		cout << d << endl;
	}
	return 0;
}