//weak 4 prpgram 7
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, D, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        cout << "Roots are real and different" << endl;
        cout <<	"Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0) {
        root1 = -b / (2 * a);

        cout << "Roots are real and equal" << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else {
        cout << "Roots are complex and different" << endl;
    }

    return 0;
}
