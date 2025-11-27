#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");

int frecv[10];

int main(){
    int n;
    while(fin >> n){
        while(n){
            frecv[n%10]++;
            n /= 10;
        }
    }
    for(int i = 9; i>= 0; i--){
        for(int j = 1; j <= frecv[i]; j++){
            cout << i;
        }
    }
}