//week 10 program 4
#include <iostream>
#include <cstring>
using namespace std;

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[15];
};

int main() {
    Address a;

    strcpy(a.home_address, "Room 12, University Hostel");

    cout << "Present Address: "
         << a.home_address << endl;

    return 0;
}	
