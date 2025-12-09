#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bipartitcomplet.in");
ofstream fout("bipartitcomplet.out");
int v[101], a[101][101], n, k, i;
int main(){
    fin >> n;
    fin >> k;
    while(k--){
        fin >> i;
        v[i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                a[i][j] = 0;
            }
            else{
                a[i][j] = 1;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i!=j){
                if(a[i][j] == 1 && v[i] == v[j]){
                    a[i][j] = 0;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            fout << a[i][j] <<" ";
        }
        fout<<"\n";
    }
}