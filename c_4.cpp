#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    int h = round(N / 3600);
    int m = round((N - (h * 3600))/ 60);
    cout << "It is "<<  h << " hours " << setw(2) << setfill('0') << m << " minutes.";
    return 0;
}