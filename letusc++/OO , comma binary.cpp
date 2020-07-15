#include <iostream>
using namespace std;

// the class that defines the coordinates of a point in space
class Coords3D
{
    int x, y, z;

public:
    Coords3D()
    {
        x = y = z = 0;
    }

    Coords3D(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // method of reading x, y, z
    void Get(double& x, double& y, double& z)
    {
        x = this->x;                              //also normally can be done directly cout<<x<<y<<z<<endl;
        y = this->y;
        z = this->z;
    }

    // overloaded operator (,)
    Coords3D operator,(Coords3D obj)
    {
        Coords3D tmp;
        tmp.x = obj.x;     //c3.x=c4.x jo jo c4 di value same to same chalijaegi c3 vich;
        tmp.y = obj.y;
        tmp.z = obj.z;
        return tmp;
    }
};

int main()
{
    double x, y, z;
    Coords3D c1(1, 3, 5); // instances of class Coords3D
    Coords3D c2(2, 4, 6);
    Coords3D c3;

    // invoke the operator function c3.operator,(c2)
    c3 = (c1, c2); // into c3 is saved c2

    // checking
    c3.Get(x, y, z); // x = 2, y = 4, z = 6

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    //------------------------
    //create another instance
    Coords3D c4(10, 15, 20);

    c3 = (c2, c1, c4); // c3 = c4   c3.operator,(c4);
                        //tino values c4 ki c3 me copy hogai
    // checking
    c3.Get(x, y, z); // x = 10, y = 15, z = 20
                  
    cout << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}
