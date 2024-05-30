class Size
{
public:
    Size(void);
    Size(Size &size);
    Size(int width, int height);
    Size &operator=(Size &size);
 
    int width;
    int height;
};


