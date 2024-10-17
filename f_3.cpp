// palindrom
#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(int n) {
    string str = to_string(n); 
    int len = str.length();
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int K;
    cin >> K;

    int count = 0;


    for (int i = 1; i <= K; i++) {
        if (isPalindrome(i)) {
            count++; 
        }
    }

    cout << count << endl; 

    return 0;
}