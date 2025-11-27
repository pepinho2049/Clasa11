#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("unice1.in");
ofstream fout("unice1.out");

int vpoz[1000000], vneg[1000000];


int main()
{
    int n, cnt = 0;
    fin >> n;
    int x;
    for(int i = 1; i <= n; i++){
        fin >> x;
        if(x < 0) vneg[-x]++;
        else vpoz[x]++;
    }
    for(int i = 1; i<= 1000000; i++){
        if(vneg[i] == 1) cnt++;
        if(vpoz[i] == 1) cnt++;
    }
    fout << cnt;
    return 0;
}
