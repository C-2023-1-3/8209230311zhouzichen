#include<iostream>
#include<string>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		counts[s[i] - 'a']++;        //s[i]代表的字符 如'c', 'c'-'a'=2,对应的counts[2]+1,即c出现次数+1.

		if(s[i]>='A'&&s[i]<='Z')
		{ 
			counts[s[i] - 'A']++;
		}
	}
	for (int j = 0; j < 26; j++)
	{
		if (counts[j] != 0)
		{
			cout << char(j + 'a') << " ： " << counts[j] << "times" << endl;
		}
	}
}

int main()
{
	char list[99];
	int counts[26];

	cout << "Enter a string:";

	int len = strlen(list);

	cin.getline(list, len);

	count(list, counts);
	

	return 0;
}