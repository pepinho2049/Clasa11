#include <iostream>
using namespace std;
//ARANJAMENTE DE N luate cate P!!
int n,p, x[10], uz[10];

void afisare(int k){
    for(int i = 1; i<=k; i++){
        cout<< x[i] << ' ';
    }
    cout<<"\n";
}

void backtracking(int k){
    for(int i = 1; i<=n; ++i){
        if(uz[i] == 0){
            x[k] = i;
            uz[i] = 1; // fara aceasta instructine ar genera un produs cartezian!!!!!!
            if(k == p){
                afisare(k);
            }
            else backtracking(k+1);
            uz[i] = 0;
        }
    }
}

int main(){
    cin >> n >> p;
    backtracking(1);
}