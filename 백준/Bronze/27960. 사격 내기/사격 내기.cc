#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int score[10] = { 512,256,128,64,32,16,8,4,2,1 };
	int a, b, c = 0;

	cin >> a >> b;

	for (int i = 0; i < 10; i++)
	{
		if (score[i] <= a && score[i] <= b)
		{
			a -= score[i];
			b -= score[i];
		}
		else if (score[i] <= a)
		{
			a -= score[i];
			c += score[i];
		}
		else if (score[i] <= b)
		{
			b -= score[i];
			c += score[i];
		}
	}
	cout << c << endl;
	return 0;
}