#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三边长：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) //判断是否为三角形
	{
		if (a == b || a == c || b == c || a == b == c)
		{
			cout << "该三角形是等腰三角形。" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形。" << endl;
		}
	}
	else
	{
		cout << "这三边无法组成三角形。" << endl;
	}
	return 0;
}