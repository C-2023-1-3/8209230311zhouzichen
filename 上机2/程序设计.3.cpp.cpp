#include<iostream>
using namespace std;

void bubble(int p[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(p+j)>*(p+j+1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}

	cout << "数组排序后：" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(p+i) << " ";
	}
}

int main()
{
	int size;
	cout << "数组元素个数为：";
	cin >> size;
	int* p = new int[size];
	cout << "你要输入的数组元素为：";
	for (int n = 0; n < size; n++)
	{
		cin >> *(p + n);
	}
	
	bubble(p, size);

	delete[]p;
	return 0;
}