#include <iostream>

using namespace std;

int prim(int n){
    if( n<2 ) return 0;
    if(n % 2 == 0 && n!=2) return 0;
    if(n == 2) return 1;
    for(int d = 3; d * d < n; d +=2){
        if(n%d ==0) return 0; 
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i>=0; i--){
        if(prim(a[i])){
            a[i] = 0;
            break;
        }
    }
    for(int i =0; i<n; i++){
        cout<< a[i] << ' ';
    }
}