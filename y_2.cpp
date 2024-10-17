// metro tickets 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    int num_60 = n / 60;   
    n %= 60;               

    int num_10 = n / 10;  
    n %= 10;               

    int num_1 = n;    

    cout << num_1 << " " << num_10 << " " << num_60 << endl;

    return 0;
}