#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("dslm.in");
ofstream fout("dslm.out");


int a[21][21],sol[21],solmax[21], n,p,x,y, lungmax;




void bkt(int cmp){
    int anterior = sol[cmp-1];
    for(int i = 1; i <= n; i++){
        if(a[anterior][i] == 1){
            sol[cmp] = i;
            a[anterior][i] = 0;
            if(cmp > lungmax){
                for(int j = 1; j <= cmp; j++){
                    solmax[j] = sol[j];

                }
                lungmax = cmp;
            }
            else bkt(cmp+1);
            a[anterior][i] =1 ;
        }
    }
}



int main()
{
    fin >> n >> p;
    while(fin >> x >> y){
        if(a[x][y] == 0){
            a[x][y] = 1;
        }
    }
    sol[1] = p;
    solmax[1] = p;
    lungmax = 1;
    bkt(2);
    for(int i = 1; i <= lungmax; i++){
        fout << solmax[i] << " ";
    }
    return 0;
}
