#include <fstream>

using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");

int frecv[100];

int main(){
    int n;
    fin >> n;
    int v[n+1];
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        frecv[v[i]]++;
    }
    for(int i = 0; i <= 99; i++){
        if(frecv[i] == 1) fout << i << ' ';
    }
}

