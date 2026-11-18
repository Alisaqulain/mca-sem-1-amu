//week 12 program 4
#include <iostream>
using namespace std;

class Demo
{
private:
    static int created;
    static int destroyed;

public:
    Demo()
    {
        created++;
        cout << "Object Created: " << created << endl;
    }

    ~Demo()
    {
        destroyed++;
        cout << "Object Destroyed: " << destroyed << endl;
    }

    static void display()
    {
        cout << "\nTotal Objects Created: "
             << created << endl;

        cout << "Total Objects Destroyed: "
             << destroyed << endl;
    }
};

// Initialize static data members
int Demo::created = 0;
int Demo::destroyed = 0;

int main()
{
    cout << "Entering First Block" << endl;
    {
        Demo d1, d2;
    }

    cout << "\nEntering Second Block" << endl;
    {
        Demo d3;
        Demo d4;
    }

    cout << "\nEntering Third Block" << endl;
    {
        Demo d5;
    }

    Demo::display();

    return 0;
}

