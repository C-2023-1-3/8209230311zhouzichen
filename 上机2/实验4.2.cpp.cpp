#include<iostream>
using namespace std;


void bubble(int* arr)
{
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}

	}
	cout << "起泡排序后的数组为：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[10] = { 12,45,62,78,32,41,95,56,13,48 };
	bubble(arr);

	return 0;
}