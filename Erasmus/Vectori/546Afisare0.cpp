#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int i = 0; i<n; i++){
        if(v[i]%v[n-1] == 0) cout << v[i] <<' ';
    }
}