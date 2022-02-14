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

	float Length() const
	{
		float length;

		length = sqrt(x * x + y * y);

		return length;
	}

	
	
};

class Point
{
public:
	float x, y;

	Point()
	{
		x = 0;
		y = 0;
	}

	Point(float x_new, float y_new)
	{
		x = x_new;
		y = y_new;
	}

	Point AddVector(Vector v)
	{
		Point p;

		p.x = x + v.x;
		p.y = y + v.y;

		return p;;
	}
};




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
	Vector v = p1 - p2;
	

	//cout << "p2(" << p2.x << "," << p2.y <<")"<< endl;
	//cout << "v(" << v.x << "," << v.y << ")" <<endl;
	cout << "Length : " << v.Length() << endl;

	return 0;

}


