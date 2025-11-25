#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");

int frecv[1001];


int main(){
    int x;
    while(fin >> x){
        frecv[x]++;
    }
    int propr = 1;
    for(int i = 1; i <= 1000; i++){
        if(frecv[i]){
            if(frecv[i] > i || (frecv[i]% 2 != i%2)){ /// pot scrie cond pt indeplinire si pun ! in fata
                propr = 0;
                break;
            }
        }
    }
    if(propr) cout << "DA";
    else cout << "NU";
}