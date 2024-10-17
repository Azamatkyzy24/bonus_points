// how many unique digits in number 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool seen[10] = {false};
    int unique_count = 0;  

    while (n > 0) {
        int digit = n % 10;  
        if (!seen[digit]) {
            seen[digit] = true;
            unique_count++; 
        }
        n /= 10; 
    }

    cout << unique_count << endl; 
    return 0;
}
