#include<iostream>
using namespace std;
int main()
{
	int sum = 0, j = 0;
	for (int i = 2; i <= 100; i *= 2)
	{
		sum = i + sum;
		j++;
	}
	cout << "ƽ��ÿ�컨" << 0.8 * sum / j << "Ԫ" << endl;
	
	return 0;
}