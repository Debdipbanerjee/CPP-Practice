#pragma once
#include "Point.h"

class vector
{
public:
	float x, y;

	vector();
	vector(float X, float Y);

	// Destination, source
	float Length(Point P2, Point P1);
	vector Vector(Point P2, Point P1);
	vector UnitVector(Point P2, Point P1);
	vector Addition(vector v1, vector v2);
	float dotProduct(vector v1, vector v2);
};

