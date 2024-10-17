#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0) {
        if (b != 0) {
            cout << "NO" << endl;  
        } else {
            if (c == 0) {
                cout << "INF" << endl; 
            } else {
                cout << "NO" << endl;  
            }
        }
    } else {
        int x = -b / a;
        
        if (a != 0 && b % a == 0 && c * x + d != 0) {
            cout << x << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}