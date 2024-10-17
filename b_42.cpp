// утренняя пробежка 
#include <iostream>
using namespace std;
int main(){

    double x,y;
    int day=1;

    cin >> x >> y;

    while(x<y){
        x*=1.7;
        day++;
    }
    cout << day;
    return 0;
}