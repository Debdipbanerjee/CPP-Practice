#include <cmath>
#include "Vector.h"
#include "Point.h"

vector vector::GiveMeVector(Point P2, Point P1)
{
	vector v;

	v.x = P2.x - P1.x;
	v.y = P2.y - P1.y;

	return v;
}

vector vector::GiveMeUnitVector(Point P2, Point P1)
{
	vector v = GiveMeVector(P2,P1);

	v.x = v.x / GiveMeLength(P2, P1);
	v.y = v.y / GiveMeLength(P2, P1);

	return v;
	
}

vector vector::vectorAdditon(vector v1, vector v2)
{
	vector v;

	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;

	return v;
}

vector::vector()
{
	x = 0;
	y = 0;
}

vector::vector(float X, float Y)
{
	x = X;
	y = Y;
}

float vector::GiveMeLength(Point P2, Point P1)
{
	vector v = GiveMeVector(P2, P1);
	return sqrt(v.x * v.x + v.y * v.y);
}