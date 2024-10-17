// В математике функция sign(x) (знак числа) определена так:
// sign(x) = 1,   если x > 0,
// sign(x) = -1, если x < 0,
// sign(x) = 0,   если x = 0.

// Для данного числа x выведите значение sign(x).
#include <iostream>
using namespace std;

int main(){
    int x;

    cin >> x;


   int sign = (x > 0) - (x < 0);

   cout <<sign;

return 0;
}
