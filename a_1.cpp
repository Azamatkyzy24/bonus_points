// A gipotenuza
 #include <iostream>
#include <cmath>   
#include <iomanip> 
using namespace std;

int main() {
    int a, b; 
    cin >> a >> b;

    if (a > 0 && a <= 1000 && b > 0 && b <= 1000) {
        double g = sqrt((a * a) + (b * b));
        cout << fixed << setprecision(1) << g; 
    } else {
        cout << "enter other numbers between 1 and 1000" << endl;
    }

    return 0;
}