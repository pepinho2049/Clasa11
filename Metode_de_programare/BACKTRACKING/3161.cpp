#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n, x[10], uz[10], poz[10], minim = INT_MAX, pozminim;
void afisare(int k){
    for(int i=1; i<=k; i++)
        cout << poz[x[i]] << ' ';
    cout << "\n";
}
void backtracking(int k){
    for(int i=1; i<=n; i++){
        if(!uz[i]){
             
            x[k] = i;
            uz[i] = 1;
            if(x[k] == minim || k != pozminim){
                if(k == n) afisare(k);
                else backtracking(k+1);
            }
            
            uz[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> poz[i];
        if(poz[i] < minim){
            minim = poz[i];
            pozminim = i;
        }
    }
    sort(poz+1, poz+n+1);
    backtracking(1);
    return 0;
}