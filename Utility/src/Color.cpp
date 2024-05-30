#include "Utility.h"

Color::Color(Color &color)
{
    this->red = color.red;
    this->grean = color.grean;
    this->blue = color.blue;
}

Color::Color(unsigned char red, unsigned char grean, unsigned char blue)
{
    this->red = red;
    this->grean = grean;
    this->blue = blue;
}

Color &Color::operator=(Color &color)
{
    this->red = color.red;
    this->grean = color.grean;
    this->blue = color.blue;

    return *this;
}
