#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int ordonat = 1, par = -10001;
    for(int i  =1; i <= n; i++){
        if(v[i]%2 == 0){
            if(v[i] > par){
                par = v[i];
            } else {
                ordonat = 0;
                break;
            }
        }
    }
    if(ordonat) cout << "DA";
    else cout <<"NU";
}