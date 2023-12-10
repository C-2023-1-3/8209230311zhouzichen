#include "mytriangle.h"
#include<cmath>

bool is_valid(double side1, double side2, double side3) 
{
	if (side1 + side2 > side3 && side1 + side2 > side3 && side2 + side3 > side1)
	{
		_area(side1, side2, side3);
		return true;
	}
	
	else
	{
		cout << "error";
		return false;
	}
}

double _area(double side1, double side2, double side3) 
{
	double s = (side1 + side2 + side3) / 2.0;

	double area = sqrt(s*(s - side1)*(s - side2)*(s - side3));

	cout << "The area is:" << area;
	
	return area;

}



	