//week 12 program 3
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double base, height;

public:
    // Parameterized Constructor
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    // Function to calculate hypotenuse
    double hypo()
    {
        return sqrt(base * base + height * height);
    }

    // Function to calculate area
    double area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t(3, 4);

    cout << "Base = 3" << endl;
    cout << "Height = 4" << endl;

    cout << "Hypotenuse = " << t.hypo() << endl;
    cout << "Area = " << t.area() << endl;

    return 0;
}

