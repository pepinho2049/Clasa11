#include <iostream>

using namespace std;

int main(){
    int n;
    int v[200];
    cin >>n;
    for(int i = 1; i<= n; i++){
        cin >> v[i];
    }
    for(int i = n; i >= 1; i--){
        if(v[i] % 2 == v[i-1] % 2){
            n++;
            for(int j = n; j >= i; j--)
                v[j+1] = v[j];
            v[i] = (v[i]+v[i-1])/2;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
}