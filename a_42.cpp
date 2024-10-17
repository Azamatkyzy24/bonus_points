//  Наиболее удаленная точка от начала координат
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long farthest_x = 0, farthest_y = 0; 
    long long max_distance_squared = -1; 

    for (int i = 0; i < n; ++i) {
        long long x, y; 
        cin >> x >> y;
        long long distance_squared = x * x + y * y; 

        if (distance_squared > max_distance_squared) {
            max_distance_squared = distance_squared;
            farthest_x = x;
            farthest_y = y;
        }
    }

    cout << farthest_x << " " << farthest_y << endl;

    return 0;
}