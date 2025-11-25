#include <iostream>
#include <cmath>
using namespace std;

int n,p, x[10], uz[10];

void afisare(int k){
    for(int i = 1; i<=k; i++){
        cout<< x[i] << ' ';
    }
    cout<<"\n";
}
bool valid(int k){
    for(int i = 2; i<=k; i++){
        if(abs(x[i]-x[i-1]) > p) return false;

    }
    return true;
}
void backtracking(int k){
    for(int i = 1; i<=n; i++){
        if(uz[i] == 0){
            x[k] = i;
            uz[i] = 1; 
            if(k == n){
                if(valid(k)) afisare(k);
                
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