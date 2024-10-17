// T symmetric  
#include <iostream>
using namespace std;

int main(){
    int n,n1,n2,n3,n4;

    cin >> n; //1456

    n1=n%10;

    n2=(n/10)%10;

    n3=(n/100)%10;

    n4=n/1000;

    cout << (n4 == n1 && n3 == n2) * 1 + (n4 != n1 || n3 != n2) * 37 << endl;

return 0;

}