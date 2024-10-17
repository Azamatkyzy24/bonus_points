// I sum of digits
#include <iostream>
using namespace std;;

int main(){
    int number,n1,n2,n3,sum;

    cin >> number;

    n1=number%10;

    n2=(number)/10%10;

    n3=number/100;

    sum=n1+n2+n3;

    cout << sum;
return 0;
}