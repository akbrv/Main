/*#include <iostream>   ** SUALI İKİ FORMADA YAZMIŞAM**
using namespace std;

int cem(int a){
    int n = a*(a+1)/2;
return n;
}                                   // Dövürsüz formasıdır
int main(){
    int a;
    cout << "bir eded daxil edin: ";

    cin >> a ;
    int b = cem(a);

    cout << b ;


    
return 0;
}

*/

#include <iostream>
using namespace std;

int cem(int a){        // DÖVÜRLÜ FORMASI
    int n=0;
    for (int i=1;i<=a;i++){
        n = n + i;
    } 
    return n;
}
int main(){                     
    int a;
    cout << "Bir eded daxil edin: ";

    cin >> a ;
    int b;
    b = cem(a);
    cout << b ; 
return 0;
}
