#include<iostream>
using namespace std;

class Box
{
    public:
        double height;
        double width;
        double length;

        //Member Function Declaration
        double getVolume();
        void setHeight(double hei);
        void setWidth(double wid);
        void setLength(double len);

};

//Member Function Definitions
double Box :: getVolume(void)
{
    return length*width*height;
}

void Box :: setHeight(double hei)
{
    height = hei;
}

void Box :: setWidth(double wid)
{
    width = wid;
}

void Box :: setLength(double len)
{
    length = len;
}

int main()
{
    Box Box1;
    Box1.setHeight(3.0);
    Box1.setWidth(4.0);
    Box1.setLength(5.0);
    cout<<"\nVolume of Box1 : "<<Box1.getVolume()<<endl;
    return 0;
}
