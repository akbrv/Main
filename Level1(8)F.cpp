#include <iostream>
using namespace std;

int sahe(int a){
    int s = a*a;
    return s;
}

int perimetr(int a){
    int p = a*4;
    return p;
}

int main(){
    cout << "Kvadratin terefini daxil edin: ";

    int a;
    cin >> a;

    int s = sahe(a);
    int p = perimetr(a);

    cout << "sahesi " << s <<"-dir" << endl;
    cout << "perimetri " << p << "-dir"<< endl;


    return 0;
}