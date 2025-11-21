#include <iostream>
using namespace std;

int say(int a){
    int q=0, r=0, b=0;
    while (a>0){
        q = a % 10 ;
        a = a/10 ;
        b = b + 1;
    }
    return b;
}
int main (){
    int a;
    cout << "Bir eded daxil edin: ";
    cin >> a ;
    int z;
    z = say(a);
    cout << "Ededin reqemlerinin sayi --> " << z ;
return 0;
}