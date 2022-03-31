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

float vector::GiveMeLength(Point P2, Point P1)
{
	vector v = GiveMeVector(P2, P1);
	return sqrt(v.x * v.x + v.y * v.y);
}