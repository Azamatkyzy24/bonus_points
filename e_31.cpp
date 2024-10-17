#include <iostream>
using namespace std;

int reverse(int n) {
    int reversedNumber = 0;

    while (n > 0) {
        int digit = n % 10;         
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;                       
    }

    return reversedNumber;
}

int main() {
    int n;
    cin >> n;

    int reversed = reverse(n); 
    cout << reversed << endl;  

    return 0;
}