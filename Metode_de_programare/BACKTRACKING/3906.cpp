#include <iostream>
#include <algorithm>
using namespace std;
int n,x[9],uz[9], ind, cifre[9];
long long int suma;
void backtracking(int k){
    for(int i =1; i<=ind; i++){
        if(uz[i]==0){
            x[k] = cifre[i];
            uz[i] = 1;
            if(k == ind){
                long long int num = 0;

                for(int j = 1; j<=ind; j++){
                    num = num*10 +x[j];
                }
                suma += num;
            }
            else backtracking(k+1);
            uz[i] = 0;
        }
    }
}
int main(){
    cin >>n;
    int copien = n;
    while(copien){
        cifre[++ind] = copien%10;
        copien /= 10;

    }
    sort(cifre+1, cifre+ind+1);
    backtracking(1);
    cout<< suma;
}