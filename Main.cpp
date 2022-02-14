#include<iostream>

using namespace std;

class Vector
{
public:
	float x, y;

	Vector(int x_new, int y_new)
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
	Point(int x_new, int y_new);
	Point AddVector(Vector v);
	
	

};

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x_new, int y_new)
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



int main()
{
	Point p1(2, 3);
	Vector v(4, 6);

	Point p2 = p1.AddVector(v);

	cout << "p2(" << p2.x << "," << p2.y <<")"<< endl;

	return 0;

}


