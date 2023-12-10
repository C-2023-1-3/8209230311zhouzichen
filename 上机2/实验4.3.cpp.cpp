#include<iostream>
using namespace std;
int main()
{
	bool L[100];
	for (int i = 0; i < 100; i++)
	{
		L[i] = false;
	}
	
	for (int S = 0; S < 100; S++)
	{
		for (int k=S; k < 100; k =k+S+1)
		{
			if (L[k]==true)
			{
				L[k] = false;
			}
			else
			{
				L[k] = true;
			}
		}
	}
	
	for (int i = 0; i < 100; i++)
	{
		if (L[i]==true)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}

