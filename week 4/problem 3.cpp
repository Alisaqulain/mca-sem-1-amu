//weak 4 problem 3
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, g;

    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    double result = ((a + b / c * d - e) * (f - g));

    cout << "Result = " << result << endl;

    return 0;
}
