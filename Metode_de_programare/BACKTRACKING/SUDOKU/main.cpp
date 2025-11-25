#include <iostream>

using namespace std;

int tabla[9][9];
void afisare(){
    cout<<"\n";
    for(int i =0; i<=8; i++){
        for(int j = 0; j<9; j++){
            cout << tabla[i][j] << ' ';
        }
        cout<<"\n";
    }
    
}

int validlinie(int x, int y, int nr){
    for(int j = 0 ; j<=8; j++){
        if(tabla[x][j] == nr) return 0;
    }
    return 1;
}
int validcoloana(int x, int y, int nr){
    for(int i = 0; i <9; i++) {
        if(tabla[i][y] == nr) return 0;
    }
    return 1;
}
int validpatrat(int x, int y, int nr){
    for(int i = (x/3)*3; i<=(x/3)*3 +2; i++){
        for(int j =(y/3)*3; j <= (y/3)*3+2; j++){
            if(tabla[i][j] == nr) return 0;
        }
    }
    return 1;
}

void back(int x, int y){
    if(x == 9){
        afisare();
        exit(0);
    }
    else if(y == 9) back(x+1, 0);
    else if(tabla[x][y] == 0){
        for(int i = 1; i<=9; i++){
            if(validlinie(x,y, i) && validcoloana(x,y,i) && validpatrat(x,y,i)){
                tabla[x][y] = i;
                back(x,y+1);
                tabla[x][y] = 0;
            }
        }
    }
    else back(x, y+1);
}


int main(){
    for(int i =0; i<=8; i++){
        for(int j = 0; j<9; j++){
            cin >> tabla[i][j];
        }
    }
    back(0, 0);
}
