#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, v[2001], minim = INT_MAX;
    cin>> n;
    for(int i = 1;i <= n; i++){
        cin >> v[i];
        if(v[i] < minim) minim = v[i];
    }
    for(int i = n; i >= 1 ; i--){
        if(v[i] == minim){
            n++;
            for(int j = n; j >= i; j--){
                v[j+1] = v[j];
            }
            v[i+1] = minim;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }

}