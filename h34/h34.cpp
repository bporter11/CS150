/**
    @file h34.cpp
    @author brian porter
    @version TTH EVE
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;

#include "h34.h"

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

///////// Add your code here ///////////////
Circle::Circle(double x, double y, double r) : Point(y, r) // parameters are mixed up.
{
    radius = x;
}
double Circle::getRadius() const { return radius; }
double Circle::getArea() const { return PI * pow(getRadius(), 2); }
double Circle::getCircumference() const { return PI * 2 * getRadius(); }
string Circle::toString(int decimals) const
{
    ostringstream out;
    out << setprecision(decimals) << fixed << "Circle(radius=" << getRadius() << ", center=" << Point::toString(decimals) << ")"; //Point(" << getX() << ", " << getY() << "))";
    return out.str();
}
Cylinder::Cylinder(double h, double r, double x, double y) : Circle(r, x, y)
{
    height = h;
}
double Cylinder::getHeight() const { return height; }
double Cylinder::getVolume() const { return Circle::getArea() * getHeight(); }
double Cylinder::getArea() const { return (2 * PI * Circle::getRadius() * getHeight()) + (2 * Circle::getArea()); }
string Cylinder::toString(int decimals) const
{
    ostringstream out;
    out << setprecision(decimals) << fixed << "Cylinder(height=" << getHeight() << ", base=" << Circle::toString(decimals) << ")";
    return out.str();
}

//////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
