//  Встречалось ли число раньше
#include <iostream>
using namespace std;

int main() {
    const int MAX_NUM = 1000; 
    bool seen[MAX_NUM + 1] = {false}; 
    int num;

    while (cin >> num) { 
        if (num < 0 || num > MAX_NUM) {
            continue; 
        }

        if (seen[num]) { 
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;  
            seen[num] = true; 
        }
    }

    return 0; 
}