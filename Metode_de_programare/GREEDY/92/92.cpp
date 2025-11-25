#include <fstream>
using namespace std;
ifstream fin("proiecte.in");
ofstream fout("proiecte.out");
int main(){
    int n;
    fin>>n;
    int t[n+1], poz[n+1];
    for(int i = 1; i<=n ; i++){
        fin >> t[i];
        poz[i] = i;
    }
    for(int i = 1; i<=n;i++){
        for(int j = i+1; j<=n;j++){
            if(t[i]>t[j]){
                swap(t[i], t[j]);
                swap(poz[i],poz[j]);
            }
        }
    }
    for(int i =1; i<=n;i++){
        fout<<poz[i]<<' ';
    }
}