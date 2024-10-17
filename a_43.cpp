//  a+b==c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    if (abs(a + b - c) < 1e-7) { 
        cout << "YES" << endl;    
    } else {
        cout << "NO" << endl;
    }

    return 0;
}