 

class Point
{
public:
    Point(void);
    Point(int x, int y);
    Point(Point &point);
    Point &operator=(Point &point);

    int x;
    int y;
};
