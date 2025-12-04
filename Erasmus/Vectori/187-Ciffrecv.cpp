#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int prim(int n){
    if(n<2) return 0;
    if(n == 2) return 1;
    if(n%2 == 0 && n!=2) return 0;
    for(int d = 3; d*d <= n; d+=2){
        if(n%d == 0) return 0;
    }
    return 1;
}
int n, frecv[10], maxim = -1;


int main(){
    
    while(fin >> n){
        frecv[n]++;
        if(prim(n) && n > maxim){
            
            maxim = n;
        }
    }
    fout << maxim <<" "<<frecv[maxim];

}