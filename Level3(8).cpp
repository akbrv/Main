#include <iostream>
using namespace std;

int ters(int n){
    int q, t;
    while (n>0){
        q = n % 10;
        t= t*10 + q;
        n = n / 10;
    }
    return t;
}
int main(){
    int n;
    cout << "bir eded daxil edin: ";
    cin >> n ;

    int a;
    a = ters(n);

    cout << "Daxil etdiyiniz eedin tersi --> " << a ;


return 0;
}