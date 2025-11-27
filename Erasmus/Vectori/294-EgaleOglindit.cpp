#include <iostream>

using namespace std;

int ogl(int n){
    int o = 0;
    while(n){
        o = o*10 + n%10;
        n /= 10;
    }
    return o;
}
int main(){
    int n;
    cin >> n;
    int a[n+1];
    int este = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 2; i <= n; i++){
        if(a[i] == ogl(a[1])) este++; 
    }
    if(este) cout << "DA";
    else cout << "NU";
}