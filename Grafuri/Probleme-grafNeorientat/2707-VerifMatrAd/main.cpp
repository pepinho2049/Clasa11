#include <iostream>

using namespace std;

int matr[101][101];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            cin >> matr[i][j];
        }
    }
    int ok = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j && matr[i][j] == 1) ok = 0;
            if(matr[i][j] != matr[j][i]) ok =0;
            if(matr[i][j] != 0 && matr[i][j] != 1) ok = 0;

        }
    }
    cout << ok;
    return 0;
}
