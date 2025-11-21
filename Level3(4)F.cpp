#include <iostream>
using namespace std;

int faktorial(int a){
    int f=1;
    for (int i=1;i<=a;i++){
        f= f*i;
    }

    return f;
}

int main(){
    int a;
    cout << "Bir eded daxil edin ve faktorialini tapin: ";

    cin >> a;
    int b = faktorial(a);
    cout << "Ededin faktoriali --> " << b;

    return 0;
}