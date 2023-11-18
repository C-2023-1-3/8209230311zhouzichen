#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "ÇëÊäÈëÒ»´®×Ö·û£º" << endl;
	int english = 0, num = 0, space = 0, other = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			english++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			num++;
		}
		else other++;
	}
	cout << "english = " << english 
		<< "\nnum = " << num 
		<< "\nspace = " << space 
		<< "\nother = " << other << endl;
	return 0;
}