#include <iostream>
using namespace std;

int n,p,uz[20] ;
char a,b, litere[20], x[20];
void afisare(){
    for(int i = 1; i<=p; i++){
        cout<< x[i];
    }
    cout<<"\n";
}

void backtracking(int k, int j){
    for(int i = j; i<=n; ++i){
        if(uz[i] == 0){
            x[k] = litere[i];
            uz[i] = 1;
            if(k == p){
                afisare();
            }
            else backtracking(k+1, j+1);
            uz[i] = 0;
        }
    }
}

int main(){
    cin >> a >> b >> p;
    for(char c = a; c <=b; c++){
        litere[++n] = c;
    }
    backtracking(1, 1);
}