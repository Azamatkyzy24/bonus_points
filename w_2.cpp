// W type of triangle 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "impossible" << endl;
    } else {

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "right" << endl;
        } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
            cout << "obtuse" << endl;
        } else {
            cout << "acute" << endl;
        }
    }

    return 0;
}