 
#include "Utility.h"

Size::Size(void)
{
    this->width = 0;
    this->height = 0;
}

Size::Size(Size &size)
{
    this->width = size.width;
    this->height = size.height;
}

Size::Size(int width, int height)
{
    this->width = width;
    this->height = height;
}

Size &Size::operator=(Size &size)
{
    this->width = size.width;
    this->height = size.height;

    return *this;
}
