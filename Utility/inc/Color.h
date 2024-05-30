
class Color
{
public:
    Color(Color &color);
    Color(unsigned char red, unsigned char grean, unsigned char blue);
    Color &operator=(Color &color);

     unsigned char red;
     unsigned char grean;
     unsigned char blue;
};
