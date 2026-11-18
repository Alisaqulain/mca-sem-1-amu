//weak 7 program 6
#include <iostream>
using namespace std;

class Flight
{
    int flight_no;
    string source;
    string destination;
    float fare;

public:
    void set_data(int f, string s, string d, float fr)
    {
        this->flight_no = f;
        this->source = s;
        this->destination = d;
        this->fare = fr;
    }

    void display()
    {
        cout << "\nFlight Information" << endl;
        cout << "Flight Number : " << this->flight_no << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main()
{
    Flight f;

    f.set_data(1234, "Delhi", "Mumbai", 5500);

    f.display();

    return 0;
}

