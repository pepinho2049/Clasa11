#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pozitiex.in");
ofstream fout("pozitiex.out");


int main()
{
    int n,x, v[10001],poz = 0, exista = false;
    fin >> x >> n;
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        if(v[i] == x) exista = true;
        if(v[i] < x) poz++;
    }
    if(exista == false) fout << "NU EXISTA";
    else fout << poz+1;
    return 0;
}
