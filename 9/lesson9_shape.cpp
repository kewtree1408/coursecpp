#include <iostream>
#include <stdio.h>

using namespace std;

class Point {
public:
	Point(float x=0.0, float y=0.0) {
		setPoint(x,y); 
	}
	void setPoint(float _x, float _y) {
		x = _x;
		y = _y;
	}
	float getX() const {
		return x;
	}
	float getY() const {
		return y;
	}
	void show() const {
		printf("[%f; %f]\n",x,y);
	}
protected:
	float x, y;
};	

class Circle : public Point {
public:
	Circle(float r=0, float x=0, float y=0) : Point(x,y), radius(r)
	{ }
	void setRadius(float r) 
	{ radius = r; }
	float getRadius() const 
	{ return radius; }
	float area () const
	{ return 3.14159 * radius * radius; }
	void show() const 
	{ printf("Center = [%f; %f],\t radius = %f\n", x,y,radius ); }
protected:
	float radius; 
};

class Cylindr : public Circle {
public:
	Cylindr(float h=0, float r=0, float x=0, float y=0) :
	Circle(r,x,y), height(h)
	{ }
	void setHeight(float h)
	{ height = h; }
	float getHight () const
	{ return height; }
	float area() const 
	{ return 2 * Circle :: area() + 2 * 3.14159 * radius * height; }
	float volume() const 
	{ return Circle::area() *height; }
	void show () const 
	{ printf ("Center = [%f; %f], Radius = %f, Height = %f\n" , x,y,getRadius(),height); } 
private:
	float height;
};

int main() {
	Point p;
	p.setPoint(1,2);
	p.show();
	
	Circle c(3,1,2);
	c.show();
	cout << c.area() << endl;
	
	Cylindr cl(4,7,8,9);
	cl.show();
	cout << cl.area() << endl;
	cout << cl.volume() << endl;
	
	return 0;
}
