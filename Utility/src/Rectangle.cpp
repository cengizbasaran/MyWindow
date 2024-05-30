 
#include "Utility.h"

Rectangle::Rectangle(void) : point(), size()
{
}

Rectangle::Rectangle(Rectangle &rectangle) : point(rectangle.point), size(rectangle.size)
{

}

Rectangle::Rectangle(Point point, Size size) : point(point), size(size)
{

}

Rectangle::Rectangle(Point point1, Point point2) : point(point1), size(point2.x - point1.x, point2.y - point1.y)
{

}

Rectangle::Rectangle(int x, int y, int width, int height) : point(x, y), size(width, height)
{

}

Rectangle &Rectangle::operator=(Rectangle &rectangle)
{
    this->point = rectangle.point;
    this->size = rectangle.size;

    return *this;
}
