 
 #include "Point.h"
 #include "Size.h"

class Rectangle
{
    Rectangle(void);
    Rectangle(Rectangle &rectangle);
    Rectangle(Point point, Size size);
    Rectangle(Point point1, Point point2);
    Rectangle(int x, int y, int width, int height);
    Rectangle &operator=(Rectangle &rectangle);

    Point point;
    Size size;
};
