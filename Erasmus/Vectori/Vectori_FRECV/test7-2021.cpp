#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");
int frecv[10];
int main(){
    int n;
    while(fin >> n){
        frecv[n]++;

    }
    int exista = 0;
    for(int i = 0; i<=9; i++){
        if(i%2 == 0){
            if(frecv[i]) exista++;
        }
    }
    if(exista == 0) cout <<"nu";
    else{
        for(int i = 0; i<=8; i+=2){
            if(i%2 == 0){
                for(int j = 1; j <= frecv[i]; j++){
                    cout << i << " ";
                }
            }
        }
    }
}