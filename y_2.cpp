// metro tickets 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tickets_60 = n / 60;
    n %= 60;  

    int tickets_10 = n / 10;
    n %= 10;  

    int tickets_1 = n;

    if (tickets_1 * 15 > 125) {
        tickets_10++; 
        tickets_1 = 0;
    }
    if (tickets_10 * 125 + tickets_1 * 15 > 440) {
        tickets_60++; 
        tickets_10 = 0;
        tickets_1 = 0;
    }

    cout << tickets_1 << " " << tickets_10 << " " << tickets_60 << endl;

    return 0;
}
