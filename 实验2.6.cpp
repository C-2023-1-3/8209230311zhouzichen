#include<iostream>
using namespace std;
int main()
{
	int a, b, Y, B;
	cout << "��������������" << endl;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			Y = i;
		}
	}
	cout << "�������Ϊ��" << Y << endl;
	for (int I = 1;; I++)
	{
		if (I % a == 0 && I % b == 0)
		{
			B = I; 
			break;
		}
	}
	cout << "��С������Ϊ��" <<B<< endl;
	return 0;
}