#include <iostream>
#include <algorithm>
using namespace std;


int n, x[9], poz[9],uz[9];
void afisare(int k){
    for(int i=1; i<=k; i++){
        cout << poz[x[i]] << ' ';
    }
    cout<<"\n";
}
void backtracking(int k){
    for(int i=1; i<=n; i++){
        if(uz[i] == 0){
            x[k] = i;
            uz[i] = 1;
            if(k == n) afisare(k);
            else backtracking(k+1);
            uz[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    for(int j = 1; j <=n; j++){
        cin >> poz[j]; 
    }
    sort(poz, poz+n);
    backtracking(1);
}