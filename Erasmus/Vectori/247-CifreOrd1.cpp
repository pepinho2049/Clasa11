#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");

int frecv[10];

int main(){
    int n;
    while(fin >> n){
        while(n){
            frecv[n%10]++;
            n /= 10;
        }
    }
    int cnt = 0;
    for(int i = 9; i >= 0; i--){
        for(int j = 1; j <= frecv[i]; j++){
            fout << i <<" ";
            cnt++;
            if(cnt %20 == 0) fout <<"\n";
        }
    }
}