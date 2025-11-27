#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("zone.in");
ofstream fout("zone.out");

int main()
{
    int n;
    fin >> n;
    int v[3*n+1];
    for(int i = 1; i<=3*n; i++){
        fin >> v[i];
    }
    int schimbare = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 3*n; j>= 2*n+1 && schimbare == 0; j--){
            if(v[i]%2 == 0 && v[j]%2 != 0){
                swap(v[i], v[j]);
                schimbare = 1;
            }
        }
    }
    for(int i = 1; i<= 3*n; i++){
        fout << v[i] << ' ';
    }

    return 0;
}
