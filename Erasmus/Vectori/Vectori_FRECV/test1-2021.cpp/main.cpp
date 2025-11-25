#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac2.in");

int frecv[101];

int main()
{
    int n, cate = 2;
    while(fin >> n){
        if(n<100 && n>9)
            frecv[n]++;
    }
    for(int i = 99; i>= 10; i--){
        if(cate == 0) break;
        if(frecv[i] == 0 && i%10 != i/10%10){
            cout << i <<' ';
            cate--;
        }

    }
    return 0;
}
