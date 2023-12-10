#include<iostream>
using namespace std;
int main()
{
	int peach = 1;
	for (int day = 1; day < 10; day++)
	{
		peach = (peach + 1) * 2;
	}

	cout << "桃子总数为：" << peach <<"个" << endl;

	return 0;
}
/*
  猴子第一天摘桃：X。

  第一天剩  x1=(X/2)-1

  第二天吃剩下的一半，又多吃一个 

  第二天剩下：x2=(x1/2)-1。

  ......

  第十天发现x10=1。  xn=(x(n-1)/2)-1;
  xn + 2 = (xn-1 + 2)/2

  问：X=?
*/