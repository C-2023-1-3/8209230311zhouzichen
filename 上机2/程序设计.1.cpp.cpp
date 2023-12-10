#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	
	for (int j,i = 0; i < len2; i++)
	{
		if (s2[i] == s1[0])
		{
			j = 1;
			while (s2[i + j] == s1[j] && j++ < len1)
			{
				j++;
			}
			if (s2[i + j] && j == len1 || j == len1 + 1)
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	char s1[99];
	char s2[99];
	int a = strlen(s1);
	int b = strlen(s2);
	cout << "Enter the first string: " ;
	cin.getline(s1, a);
	
	cout << "Enter the second string: ";
	cin.getline(s2, b);
	cout << "indexof(\"" << s1 << "\",\"" << s2 << "\")is: " << indexof(s1,s2);
}