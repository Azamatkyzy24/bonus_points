// Выведите все числа на отрезке от a до b, дающие остаток c при делении на d. Если таких чисел не существует, то ничего выводить не нужно.
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;

    for(int i=a;i<=b;i++){
        if(i%d==c){
            cout << i << " ";
        }
    }
}
