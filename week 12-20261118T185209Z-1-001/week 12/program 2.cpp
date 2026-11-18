//week 12 program 2
#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b, c, d;

public:
    // Default Constructor
    Calculator()
    {
        a = 10;
        b = 20;
        c = 30;
        d = 40;
    }

    // Parameterized Constructor
    Calculator(int x, int y, int z, int w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }

    void calculate()
    {
        cout << "Addition: " << a + b + c + d << endl;
        cout << "Subtraction: " << a - b - c - d << endl;
        cout << "Multiplication: " << a * b * c * d << endl;

        if (b != 0 && c != 0 && d != 0)
            cout << "Division: "
                 << (double)a / b / c / d << endl;
        else
            cout << "Division not possible" << endl;
    }
};

int main()
{
    Calculator c1;
    Calculator c2(100, 20, 5, 2);

    cout << "Using Default Constructor:" << endl;
    c1.calculate();

    cout << "\nUsing Parameterized Constructor:" << endl;
    c2.calculate();

    return 0;
}

