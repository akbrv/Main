#include <iostream>
using namespace std;

int on(int a){
    int n,m,b;
    int s=0;
    if (99 < a < 1000 ){
        b = a / 100;
        m = a % 10;
        n = (a / 10) % 10;
        s = b + n + m;
    }

    if (s==10){
        return a;
    }
}
int main(){
    int a;
    cout << "Bir eded daxil edin: ";
    cin >> a ;

    int h;

    h = on(a);
    cout << h ;



return 0;

}
