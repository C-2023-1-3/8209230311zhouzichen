#include<iostream>
using namespace std;
int main()
{
	double R, h;
	cout << "������Բ׶�׵İ뾶R = " << endl;
	cin >> R;
	cout << "������Բ׵��׶��h = " << endl;
	cin>> h;
	const double PI = 3.14;
	double V = (PI * R * R * h) / 3;
	cout << "Բ׶�����Ϊ��" << V<<endl;
	return 0;

}
