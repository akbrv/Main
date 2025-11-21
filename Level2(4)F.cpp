#include <iostream>
using namespace std;

string eded(int a){
    if (a%2==0){
        return "Cut";
    }
    else{
        return "Tek";    
    }

}

int main(){
    int a;
    cout << "eded daxil edin: ";
    cin >> a ;
    string b = eded(a);
    cout << b;


return 0;
}