#include<iostream>
using namespace std;
int main()
{
	cout << "��������ʽ��" << endl;
	int a, b, sum; 
	char fl;
	cin >> a >> fl >> b;
	switch (fl)
	{
	case'+':
		sum = a + b;
		
		break;
	case'-':
		sum = a - b;
		
		break;
	case'*':
		sum = a * b;
		
		break;
	case'/':
		if (b == 0)
		{
		cout << "��ʽ����" << endl;
		}
		sum = a / b;
		
		break;
	case'%':
		sum = a % b;
		cout << "sum = " << sum << endl;
		break;
	
	default:
		cout << "��ʽ����" << endl;
	}
	cout << "sum = " << sum << endl;
	
	return 0;
}