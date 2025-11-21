#include <iostream>
using namespace std;

int b_eded(int a, int b, int c){
    int m=0;
    if (a>b)
    {
        m=a;
    }
    else{
        m=b;
    }
    if (m>c){
        m=m;
    }
    else{
        m=c;
    }

    return m;
}

int main(){
    int a;
    int b;
    int c;

    cout << "3 eded daxil edin: " << endl;
    cin >> a >> b >> c;
    int m = b_eded(a,b,c);

    cout << "En boyuk eded --> " << m;

return 0;
}
