#include<iostream>
#include<string>

#include "Vector.h"
#include "Point.h"

using namespace std;


int main()
{
	Point p1(2, 3);
	Point p2(3, 7);

	vector v1(4,0) , v2(0,-5);
	vector v;

	//float length = v.GiveMeLength(p2, p1);

	/*cout << v.x << "," << v.y << endl;
	cout << length << endl;*/

	/*v = v.GiveMeUnitVector(p2, p1);
	cout << v.x << "," << v.y << endl;*/

	v = v.vectorAdditon(v1, v2);
	cout << v.x << "," << v.y << endl;


}

