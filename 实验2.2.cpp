#include<iostream>
using namespace std;
int main()
{
	double x, y;
	int k = 3;
	while (1)
	{
		cout << "ÇëÊäÈëx:" << endl;
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			cout << "y = " << y << endl;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y = " << y << endl;
		}
		else if (x >= 5 && x < 10)
		{
			y = x * x;
			cout << "y = " << y << endl;
			
		}
		k--;
			if (k == 0)
			{
				break;
			}
	}
	return 0;
}