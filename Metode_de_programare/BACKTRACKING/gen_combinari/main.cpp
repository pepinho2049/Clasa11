#include <iostream>
using namespace std;

int n,p,x[10];

void afisare(int k){
    for(int i =1; i<=k;i++){
        cout<<x[i] << ' ';
    }
    cout<<"\n";
}
// fiecare val posibila de pe componenta k va pleca de la componenta de pe k-1 plus 1


//avand ordine strict crescatoare, cond de nr distincte este indeplinita!!!

//REZULTA CA VECT UZ DEVINE INUTIL
void backtracking (int k){
    for(int i = x[k-1]+1; i<=n; i++){
            x[k] = i;
            if(k == p) afisare(k);
            else backtracking(k+1);
        
    }
}
int main(){
    cin >> n >> p;
    backtracking(1);
}