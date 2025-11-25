#include <iostream>
using namespace std;
int n, x[16], uz[16];
void afisare(int k){
    for(int i=1; i<=k; i++)
        cout << x[i] << ' ';
    cout << "\n";
}
void backtracking(int k){
    for(int i=1; i<=n; i++){
        if(!uz[i]){
             
            x[k] = i;
            uz[i] = 1;
            if(x[k]% 2 == 1  || x[k] == k){
                if(k == n) afisare(k);
                else backtracking(k+1);
            }
            
            uz[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    backtracking(1);
    return 0;
}