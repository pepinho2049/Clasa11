#include <iostream>
#include <cmath>
using namespace std;

int esteprim(int n){
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n%2 == 0 && n!=2) return 0;
    for(int d = 3; d* d <= n; d+=2){
        if(n%d == 0) return 0;
    }
    return 1;
}

int main(){
    int n, v[1001];
    cin >> n;
    for(int i = 1; i <=n ;i++){
        cin >> v[i];
    }
    for(int i = 1; i<= n; i++){
        if(esteprim(v[i])){
            for(int j = i; j <= n; j++)
                v[j] = v[j+1];
            n--;
            i--;
        }
    }
    for(int i = 1; i<= n; i++){
        cout << v[i] << " ";
    }
}