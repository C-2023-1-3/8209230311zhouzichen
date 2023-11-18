#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	char m;
	cin >> m;
	if (m >= 'a' && m <= 'z')
	{
		char l2;
		l2 = m - 32;
		cout << l2 << endl;
	}
	else if(m >= 'A' && m <= 'Z')
	{
		cout << m + 1 << endl;
	}

	return 0;
}