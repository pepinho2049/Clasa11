#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");

int frecv[10];

int main(){
    int n;
    fin >> n;
    int v[100000];
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        frecv[v[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i <= 9; i++){
        for(int j = 1; j <= frecv[i]; j++){
            fout << i <<" ";
            cnt++;
            if(cnt %20 == 0) fout <<"\n";
        }
    }
}