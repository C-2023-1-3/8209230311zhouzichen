#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char*const hexString)
{
	int a = strlen(hexString);
	int list[99];
	int dec = 0;
	int n = 0;
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			list[i] = (hexString[i] - '0');
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			list[i] = (hexString[i] - 'A') + 10;
		}
	}

	for (int i = a-1; i >= 0&&n<a; i--)
	{
		dec += list[i] * pow(16, n);
		n++;
	}
	return dec;
}

int main()
{

	char s[99];
	int len = strlen(s);
	cout << "������16�����ַ�����";
	cin.getline(s, len);
	cout << "תΪʮ���Ʊ�ʾΪ��" << parseHex(s);
	return 0;
}