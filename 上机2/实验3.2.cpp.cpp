#include<iostream>
using namespace std;
bool is_prime(int num);
bool is_prime(int num)
{
	bool flag ;
	
	if (num == 1)
		{
			flag = 0;
			return false;
		}

	
	if (num == 2)
	{
		return true;
	}

	else
	{
		flag = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
			return false;
			}
		}
		if (flag == 1)
		{
			return true;
		}
	}
}

int main()
{
	int k = 0;
	for (int j = 1;k<200 ; j++)
	{
		if (is_prime(j) == true)
		{
			k = k + 1;
			cout << j<<" "; 
			if (k % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	
	return 0;
}

