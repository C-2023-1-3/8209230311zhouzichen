#include<iostream>
using namespace std;
int main()
{
	int a, b, Y, B;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			Y = i;
		}
	}
	cout << "最大公因数为：" << Y << endl;
	for (int I = 1;; I++)
	{
		if (I % a == 0 && I % b == 0)
		{
			B = I; 
			break;
		}
	}
	cout << "最小公倍数为：" <<B<< endl;
	return 0;
}