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
	cout << "平均每天花" << 0.8 * sum / j << "元" << endl;
	
	return 0;
}