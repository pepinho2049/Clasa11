#include <iostream>
#include <algorithm>
using namespace std;

int c,n, cifre[10], x[10], uz[10], ind;
void afisare(){
    for(int i = 1; i<=c; i++){
        cout<<cifre[x[i]];
    }
    cout<<"\n";
} 
void backtracking(int k){
    for(int i = 1; i<=n; i++){
        if(uz[i] == 0){
            x[k] = i;
            uz[i] =1;
            if(cifre[x[1]] > 0){
                if(k == c) afisare();
                else backtracking(k+1);
            }
            
            uz[i] = 0;
        }
    }
}
int main(){
    cin >> n >> c;
    int copie = n;
    while(copie){
        cifre[++ind] = copie%10;
        copie /= 10;
    }
    n = ind;
    sort(cifre+1, cifre+ind+1);
    backtracking(1);
}