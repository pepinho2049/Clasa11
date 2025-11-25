#include <iostream>
using namespace std;

int main(){
    int n,a,b,cnta = 0, cntb = 0;
    cin >> n >> a >> b;
    while(n > 0 && n%b != 0){
        n -= a;
        cnta++;
    }
    do{
        n -=b;
        cntb++;
    }while(n/b > 0);
    for(int i = 0; i<cnta; i++){
        cout<< a << ' ';

    }
    for(int i = 0; i< cntb; i++){
        cout<<b<<' ';   
    }
    
}