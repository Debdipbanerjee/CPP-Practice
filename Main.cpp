#include<iostream>

using namespace std;

class Vector
{
public:
	float x, y;

	Vector()
	{
		x = 0;
		y = 0;
	}

	Vector(float x_new, float y_new)
	{
		x = x_new;
		y = y_new;
	}

	
	
};

class Point
{
public:
	float x, y;

	Point();
	Point(float x_new, float y_new);
	Point AddVector(Vector v);
	
	

};

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(float x_new, float y_new)
{
	x = x_new;
	y = y_new;
}

Point Point::AddVector(Vector v)
{
	Point p;

	p.x = x + v.x;
	p.y = y + v.y;

	return p;;
}

Vector operator-(Point a, Point b)
{
	Vector v;

	v.x = a.x - b.x;
	v.y = a.y - b.y;

	return v;

}



int main()
{
	Point p1(2, 3);
	//Vector v(4, 6);
	Point p2(5, 7);

	//Point p2 = p1.AddVector(v);
	Vector v = p2 - p1;

	//cout << "p2(" << p2.x << "," << p2.y <<")"<< endl;
	cout << "v(" << v.x << "," << v.y << ")" <<endl;

	return 0;

}


