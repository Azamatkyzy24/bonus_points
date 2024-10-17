// B Количество слов 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    getline(cin, input);

    int wordCount = 0;

    if (!input.empty()) {
        wordCount = 1; 

        for (char c : input) {
            if (c == ' ') {
                wordCount++; 
            }
        }
    }
    cout << wordCount << endl;

    return 0;
}