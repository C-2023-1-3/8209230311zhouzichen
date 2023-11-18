#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入华氏温度：" << endl;
	double F,C;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "摄氏温度为：" <<setprecision(3)<< C << endl;
	return 0;
}