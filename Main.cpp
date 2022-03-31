#include<iostream>
#include<string>

#include "Vector.h"
#include "Point.h"

using namespace std;


int main()
{
	Point p1(2, 3);
	Point p2(3, 7);

	vector v1(-1,0);
	vector v;

	//float length = v.GiveMeLength(p2, p1);

	/*cout << v.x << "," << v.y << endl;
	cout << length << endl;*/

	/*v = v.GiveMeUnitVector(p2, p1);
	cout << v.x << "," << v.y << endl;*/

	/*v = v.Addition(v1, v2);
	cout << v.x << "," << v.y << endl;*/

	v = v.UnitVector(p1, p2);
	float dot = v.dotProduct(v, v1);

	if (dot <= 0)
	{
		cout << "backstabb" << endl;
	}
	else
	{
		cout << "not backstabb" << endl;
	}




}

