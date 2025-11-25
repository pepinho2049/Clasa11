#include <iostream>
#include <algorithm>
using namespace std;

int n, cifre[10], x[10], uz[10], ind;
void afisare(){
    for(int i = 1; i<= ind; i++){
        cout<<x[i];
    }
    cout<<"\n";
}
void backtracking(int k){
    for(int i = 1; i<= ind; i++){
        if(uz[i] == 0){
            x[k] = cifre[i];
            uz[i] =1;
            if(k == ind){
                afisare();
            }
            else backtracking(k+1);
            uz[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    int copie = n;
    while(copie){
        cifre[++ind] = copie%10;
        copie /= 10;
    }
    sort(cifre+1, cifre+ind+1);
    backtracking(1);
}