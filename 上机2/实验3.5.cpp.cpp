#include<iostream>
using namespace std;
int main()
{
	int peach = 1;
	for (int day = 1; day < 10; day++)
	{
		peach = (peach + 1) * 2;
	}

	cout << "��������Ϊ��" << peach <<"��" << endl;

	return 0;
}
/*
  ���ӵ�һ��ժ�ң�X��

  ��һ��ʣ  x1=(X/2)-1

  �ڶ����ʣ�µ�һ�룬�ֶ��һ�� 

  �ڶ���ʣ�£�x2=(x1/2)-1��

  ......

  ��ʮ�췢��x10=1��  xn=(x(n-1)/2)-1;
  xn + 2 = (xn-1 + 2)/2

  �ʣ�X=?
*/