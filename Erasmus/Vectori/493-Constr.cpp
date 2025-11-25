#include <iostream>

using namespace std;

int y[200];

int sumcif(int n){
    int suma = 0;
    while(n){
        suma += n%10;
        n/=10;
    }
    return suma;
}

int main(){
    int n;
    cin >> n;
    int x[n+1];
    for(int i =1; i<=n; i++){
        cin >> x[i];
    }
    for(int i = 1; i <=n; i++){
        y[i] = x[i]%(sumcif(x[i]));
    }
    for(int i = 1; i <= n; i++){
        cout << y[i] <<' ';
    }
}