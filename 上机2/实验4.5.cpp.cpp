#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int j, i = 0; i < len2; i++)
	{
		if (s2[i] == s1[0])
		{
			j = 1;
			while (s2[i + j] == s1[j] && j++ < len1)
			{
				j++;
			}
			if (s2[i + j] && j == len1||j==len1+1 )   //s2[i+j]判断(i+j）对应元素是否为真。
			{
				return i; //i+1（客户看着便利）
			}
		}
	}
	return -1;
}

int main()
{
	char s1[99], s2[99];
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	cout << "Enter the first string:"; //Welcome to China
	cin.getline(s1, len1);
	cout << "Enter the second string:";  //Welcome
	cin.getline(s2, len2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is: " << indexOf(s1, s2);
	return 0;
}