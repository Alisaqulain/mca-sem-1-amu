//weak 7 program 7
#include <iostream>
using namespace std;

class Demo
{
    int value;

public:
    Demo(int value)
    {
        this->value = value;
    }

    Demo* getPointer()
    {
        return this;
    }

    void display()
    {
        cout << "Value = " << this->value << endl;
    }
};

int main()
{
    Demo obj(100);

    Demo *ptr;

    ptr = obj.getPointer();

    cout << "Pointer returned by this = " << ptr << endl;

    ptr->display();

    return 0;
}

