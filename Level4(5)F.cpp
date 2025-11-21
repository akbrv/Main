#include <iostream>
using namespace std;

int bolenler(int a){
    int b;
    int s=0, q=0, c=0;
    
    for (int i=1; i<=a; i++){
        if (a%i==0){
            s = s + 1;
        }
    }
    return s;
}

int main(){
    int a;
    cout << "Bir eded daxil edin: ";
    cin >> a ;

    int y;
    y = bolenler(a);
    cout << "Bolenlerin sayi--> " << y;



return 0;
}