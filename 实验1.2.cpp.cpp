#include<iostream>
using namespace std;
int main()
{
	double R, h;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶R = " << endl;
	cin >> R;
	cout << "ÇëÊäÈëÔ²×µµÄ×¶¸ßh = " << endl;
	cin>> h;
	const double PI = 3.14;
	double V = (PI * R * R * h) / 3;
	cout << "Ô²×¶µÄÌå»ýÎª£º" << V<<endl;
	return 0;

}
