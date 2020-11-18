#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;


	if (x<=-2) 
	{
		y = x + 3;
	}
	if (-2<x && x<=4) 
	{
		y = (x * R - 2 * R + x - 4) / 6;
	}
	if (4<x && x<=8-R) 
	{
		y = -R;
	}
	if (8-R<x && x<=8) 
	{
		y = sqrt(pow(R, 2) - pow((x - 8), 2)) - R;
	}
	if (8<x && x<8+R) 
	{
		y = sqrt(pow(R, 2) - pow((x - 8), 2)) - R;
	}
	else
	{
		y = -R;
	}

	cout<<endl <<"y = " << y;

	cin.get();
	return 0;



}
