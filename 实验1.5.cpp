#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "�����뻪���¶ȣ�" << endl;
	double F,C;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "�����¶�Ϊ��" <<setprecision(3)<< C << endl;
	return 0;
}