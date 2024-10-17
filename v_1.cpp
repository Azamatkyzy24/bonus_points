// V MAX
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a >= 1 && a <= 1000 && b >= 1 && b <= 1000) {
        int max_num = (a + b + abs(a - b)) / 2;
        cout << max_num;
    } else {
        cout << "enter numbers between 1 and 1000";
    }

    return 0;
}
