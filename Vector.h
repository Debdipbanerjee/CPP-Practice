#pragma once
#include "Point.h"

class vector
{
public:
	float x, y;

	vector();
	vector(float X, float Y);

	// Destination, source
	float GiveMeLength(Point P2, Point P1);
	vector GiveMeVector(Point P2, Point P1);
	vector GiveMeUnitVector(Point P2, Point P1);
	vector vectorAdditon(vector v1, vector v2);
};

