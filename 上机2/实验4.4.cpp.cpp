#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}

	for (int j = 0; j < size2; j++)
	{
		list3[size1 + j] = list2[j];
	}
	
	cout << "The merge list is: ";
	for (int m = 0; m < size1 + size2 - 1; m++)
	{
		for (int n = 0; n < size1 + size2 - 1; n++)
		{
			if (list3[n] > list3[n + 1])
			{
				int temp = list3[n];
				list3[n]  = list3[n+1];
				list3[n+1] = temp;
			}
		}
	}

	for (int a = 0; a < size1 + size2; a++)
	{
		cout << list3[a] << " ";
	}

}

int main()
{
	const int N = 80;
	int size1, size2;
	cout << "size1,size2·Ö±ğÎª£º";
	cin >> size1 >> size2;

	int list1[N];
	cout << "Enter list1: ";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}

	int list2[N];
	cout << "Enter list2: ";
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	
	int list3[N];
	merge(list1, size1, list2, size2, list3);


	return 0;
}