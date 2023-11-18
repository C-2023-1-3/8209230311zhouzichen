#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "请输入a的值：" << endl;
	double a,x,x1;
	cin >> a;
	x = a;
	if (a < 0)
	{
		cout << "error" << endl;
	}
	if (a == 0)
	{
		cout << "0的平方根为0." << endl;
	}
	if (a > 0)
	{
		while (1)
		{
			x1 = (x + a / x) / 2;
			
			if (fabs(x - x1 < 1e-5))
			{
				cout << "x = " << x << endl;
				break;
			}
			x = x1;
		}
	}
	return 0;
}