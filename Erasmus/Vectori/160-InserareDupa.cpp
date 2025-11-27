#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int v[52];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = n; i >= 1; i--){
        if(sqrt(v[i]) == int(sqrt(v[i]))){
            n++;
            for(int j = n; j >= i; j--)
                v[j+1] = v[j];
            v[i] = sqrt(v[i]); // pentru a insera inaintea elementului
        }
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
}