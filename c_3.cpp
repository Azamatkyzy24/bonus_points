#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int root = sqrt(i);  
        if (root * root == i) { 
            cout << i << " ";
        }
    }

    return 0;
}