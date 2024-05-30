 
#include "Utility.h"

Point::Point(void)
{
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

Point::Point(Point &point)
{
    this->x = point.x;
    this->y = point.y;
}

Point &Point::operator=(Point &point)
{
    this->x = point.x;
    this->y = point.y;

    return *this;
}
