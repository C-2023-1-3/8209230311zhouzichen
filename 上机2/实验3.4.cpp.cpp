#include "mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "三角形的三边长为：" << endl;
	cin >> side1 >> side2 >> side3;

	is_valid(side1, side2, side3);

	
	return 0;
}