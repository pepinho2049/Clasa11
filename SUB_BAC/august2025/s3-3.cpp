#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int minZ, minP;
    fin >> minZ >> minP;

    int zi = 0, suma = 0, nr = 0, val, prima_zi;

    while(fin >> val){
        zi++;
        if(val >= minZ){
            if(suma == 0){
                prima_zi = zi;
            }
            suma += val;
            nr++;
        }
        else{
            if(suma >= minP && nr > 1){
                cout << prima_zi << " " << zi - 1 << " " << suma << endl;
            }
            suma = 0;
            nr = 0;
        }
    }
        if(suma >= minP && nr > 1){
                cout << prima_zi << " " << zi - 1 << " " << suma << endl;
            }
}