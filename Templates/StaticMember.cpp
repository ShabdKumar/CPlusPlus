#include<iostream>
using namespace std;

class Box
{
    private :
        double length;
        double height;
        double width;

    public :
        static int objCount;

        Box(double length, double height, double width)
        {
            this->length = length;
            this->height = height;
            this->width = width;
            objCount++;
        }

        double volume()
        {
            return length*height*width;
        }

        static int getCount()
        {
            return objCount;
        }
};

int Box :: objCount = 0;

int main()
{
    cout<<"\nInitial Count Value : "<<Box::getCount()<<" or "<<Box::objCount<<endl;
    Box b(1.0, 2.0, 3.0);
    cout<<"\nVolume of Box 1 : "<<b.volume()<<endl;
    Box b2(1.1, 2.2, 3.3);
    cout<<"Volume of Box 2 : "<<b2.volume()<<endl;
    cout<<"\nFinal Count Value : "<<Box::getCount()<<" or "<<Box::objCount<<endl;
    return 0;
}
