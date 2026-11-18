//weak 7 program 5
#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    Greatest(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    int getGreatest()
    {
        if (this->a > this->b)
            return this->a;
        else
            return this->b;
    }
};

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Greatest obj(x, y);

    cout << "Greatest number = " << obj.getGreatest() << endl;

    return 0;
}

