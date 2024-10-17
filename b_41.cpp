// центр тяжести 
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cin >> n; 

    double sum_x = 0.0, sum_y = 0.0; 


    for (int i = 0; i < n; ++i) {
        double x, y;
        cin >> x >> y;
        sum_x += x; 
        sum_y += y; 
    }


    double center_x = sum_x / n;
    double center_y = sum_y / n; 


    cout << fixed << setprecision(1) << center_x << " " << center_y << endl;

    return 0;
}
