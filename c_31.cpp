//min max digit 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minDigit = 9; 
    int maxDigit = 0; 

    while (n > 0) {
        int digit = n % 10; 
        
        if (digit < minDigit) {
            minDigit = digit; 
        }
        
        if (digit > maxDigit) {
            maxDigit = digit;
        }

        n /= 10; 
    }

    cout << minDigit << " " << maxDigit << endl; 

    return 0;
}
