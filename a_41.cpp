 //rabbits
#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long max_rabbits = (m + n - 1) / n;

    cout << max_rabbits << endl;
    return 0;
}