#include<iostream>
#include<string>

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
	string name;

	Point()
	{
		x = 0;
		y = 0;
		name = "p0";
	}

	Point(float x_new, float y_new, string name_new)
	{
		x = x_new;
		y = y_new;

		name = name_new;
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





Vector GiveMeVector(Point p1, Point p2)
{
	return (p1 - p2);
}



Point WhoIsCloser(Point p1, Point p2, Point p3)
{
	Vector v12 = GiveMeVector(p1, p2);
	Vector v13 = GiveMeVector(p1, p3);

	if (v12.Length() < v13.Length()) return p2;
	if (v12.Length() > v13.Length()) return p3;
}

int main()
{
	Point p1(2, 3, "p1");
	Point p2(5, 7, "p2");
	Point p3(1, 2, "p3");

	cout << "the closest is " << WhoIsCloser(p1, p2, p3).name << endl;



	return 0;

}

