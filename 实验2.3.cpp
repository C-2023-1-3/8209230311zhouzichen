#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε����߳���" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) //�ж��Ƿ�Ϊ������
	{
		if (a == b || a == c || b == c || a == b == c)
		{
			cout << "���������ǵ��������Ρ�" << endl;
		}
		else
		{
			cout << "�������β��ǵ��������Ρ�" << endl;
		}
	}
	else
	{
		cout << "�������޷���������Ρ�" << endl;
	}
	return 0;
}