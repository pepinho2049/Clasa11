#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("roy-floyd.in");
ofstream fout("roy-floyd.out");

int n,m,D[101][101];



void citire(){
    int x,y,c;
    fin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            D[i][j] = INT_MAX/2; 
        }
    }
    for(int i = 1; i <= m; i++){
        fin >> x >> y >> c;
        D[x][y] = c;
    }
}
void rf(){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(D[i][j] > D[i][k] + D[k][j]){
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }
}



int main(){
    ///Permite gasirea drumurilor de cost minim intre oricare 2 noduri din graf

    /*Consta in constr unei atr asoc in care initial fiecare element D[i][j] va fi egal cu:
            0- daca i = j
            c- daca exista arc i,j(costul asociat)
            inf- daca nu exista arc de la i la j  
    */

    ///Se parcurg toate nodurile grafului(k = 1,n)
    ///Se incearca o imbunatatatire a costului de la i la j, folosind ca intermediar nodul k
    citire();
    rf();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) D[i][j] = 0;
            if(D[i][j] == INT_MAX/2) D[i][j] = -1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            fout << D[i][j] << " ";

        }
        fout << "\n";
    }

}