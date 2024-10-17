// sum of digits
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int sum = 0;

    for (; x > 0; x /= 10) {
        sum += x % 10; 
    }

    cout << sum << endl;

    return 0;
}