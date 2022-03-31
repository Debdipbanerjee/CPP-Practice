#include <cmath>
#include "Vector.h"
#include "Point.h"

vector vector::Vector(Point P2, Point P1)
{
	vector v;

	v.x = P2.x - P1.x;
	v.y = P2.y - P1.y;

	return v;
}

vector vector::UnitVector(Point P2, Point P1)
{
	vector v = Vector(P2,P1);

	v.x = v.x / Length(P2, P1);
	v.y = v.y / Length(P2, P1);

	return v;
	
}

vector vector::Addition(vector v1, vector v2)
{
	vector v;

	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;

	return v;
}

float vector::dotProduct(vector v1, vector v2)
{
	return v1.x * v2.x + v1.y * v2.y;
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

float vector::Length(Point P2, Point P1)
{
	vector v = Vector(P2, P1);
	return sqrt(v.x * v.x + v.y * v.y);
}