#include <iostream>
using namespace std;

int orta(int a, int b, int c){
    int s = (a + b + c)/3;
    return s;
}

int main(){
    cout << "3 eded daxil edin: ";
    
    int a,b,c;
    
    cin >> a;
    cin >> b;
    cin >> c;

    int s = orta(a,b,c);

    cout << "ededi orta " << s;
    

    return 0;
}
