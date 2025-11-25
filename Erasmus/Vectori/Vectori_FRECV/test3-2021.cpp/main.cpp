#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac1.in");
int frecv[10], poz[10];

int main()
{
    int n, cate=0;
    while(fin >> n){
        frecv[n/10%10]++;
        cate++;
        poz[n/10%10] = cate;
    }
    int maxim = -1;
    for(int i = 0; i <= 9; i++){
        if(frecv[i] > maxim) maxim = frecv[i];
    }
    for(int i = 0; i <= 9; i++){
        if(frecv[i] == maxim) cout << poz[i]<< ' ';
    }

    return 0;
}
