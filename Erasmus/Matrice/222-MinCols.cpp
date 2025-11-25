#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a[101][101];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        int minim = 1001;
        for(int i = 0; i < n; i++){
            if(a[i][j] < minim) minim = a[i][j];
        }
        cout << minim <<' ';
    }
    
}