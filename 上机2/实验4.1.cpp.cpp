#include<iostream>
using namespace std;
int main()
{
	const int N = 10;
	int arr[N];
	cout << "Enter ten numbers: ";
	for (int n = 0; n < N; n++)
	{
		cin >> arr[n];
	}
	
	cout << arr[0] << " ";

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			
			if (arr[i] != arr[j])
			{
				if (j == i - 1)
				{
					cout << arr[i] << " ";
				}
				else
					continue;
			}
			else
				break;
		}
	}


	return 0;
}