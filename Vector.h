#pragma once
#include "Point.h"

class vector
{
public:
	float x, y;

	// Destination, source
	float GiveMeLength(Point P2, Point P1);
	vector GiveMeVector(Point P2, Point P1);
	vector GiveMeUnitVector(Point P2, Point P1);

};

