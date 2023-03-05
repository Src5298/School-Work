/*
Author:Samuel Cockrum
Date:4/24/22
Course: COP-1000-03z
Errors: No errors.
*/

using namespace std;
class Rectangle
{
    public:
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double calculateArea();
    double calculatePerimeter();
  
    private:
    double length, width;
};

void Rectangle::setLength(double len)
{
    length = len;
}
void Rectangle::setWidth(double wid)
{
    width = wid;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::calculateArea()
{
    return length*width;
}
double Rectangle::calculatePerimeter()
{
    return 2*(length+width);
}

