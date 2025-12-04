#include <iostream>
#include <cmath>
using namespace std;

int frecv[1000];

int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] >= 100 && v[i] <= 999){
            frecv[v[i]]++;
        }
    }
    int afisare = 2;
    for(int i = 999; i >= 100 && afisare; i--){
        if(frecv[i] == 0){
            cout << i <<' ';
            afisare--;
        }
    }
    if(afisare != 0) cout <<"NU";
}