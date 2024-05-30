

#include "Utility.h"

class DeviceContext
{
public:
    void Line(int x1, int y1, int x2, int y2, Color color);
    void Line(Point point, Size size, Color color);

    void Rectangle(int x1, int y1, int x2, int y2, Color color);
    void Rectangle(Point point, Size size, Color color);
    void Rectangle(Rectangle rect, Color color);

    void FillColor(int x1, int y1, int x2, int y2, Color color);
    void FillColor(Point point, Size size, Color color);
    void FillColor(Rectangle rect, Color color);

    void Text(int x, int y, const char *szStr, Color color);
    void Text(Point point, const char *szStr, Color color);

private:
    Rectangle invalidateRect;
};
