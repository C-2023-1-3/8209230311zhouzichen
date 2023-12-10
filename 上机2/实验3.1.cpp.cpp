#include<iostream>
using namespace std;
void gcd(int a, int b)
{
	int Y;
	
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			Y = i;
		}
	}
	cout << "m，n的最大公因数为：" << Y << endl;
}
void gcd1(int a, int b)
{
	int B;
	for (int I = 1;; I++)
	{
		if (I % a == 0 && I % b == 0)
		{
			B = I;
			break;
		}
	}

	cout << "m,n的最小公倍数为：" << B << endl;
}

int main()
{
	int m, n;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	gcd(m, n);
	gcd1(m, n);
	return 0;
}