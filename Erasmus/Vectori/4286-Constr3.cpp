#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n+1];
    for(int i = 1; i<=n; i++){
        cin >> x[i];
    }
    int m = 0;
    int y[200];
    for(int i = n; i>=1; i--){
        if(x[i]%2){
            y[++m] = x[i];
        }
    }
    for(int i = 1; i <= m; i++){
        cout << y[i] <<' ';
    }
}