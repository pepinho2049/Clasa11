#include <iostream>

using namespace std;

int y[200];



int main(){
    int n;
    cin >> n;
    int x[n+1];
    int suma = 0;
    for(int i =1; i<=n; i++){
        cin >> x[i];
        suma += x[i];
    }
    for(int i = 1; i <=n; i++){
        y[i] = suma-x[i];
    }
    for(int i = 1; i <= n; i++){
        cout << y[i] <<' ';
    }
}