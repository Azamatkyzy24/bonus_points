// количество нулей
#include <iostream>
using namespace std;
int main(){

    int n,z=0;

    cin >> n;

    while(n>0){
        if(n%10 ==0){
            z++;
        }
         n/=10;
    }
    cout << z;
}
