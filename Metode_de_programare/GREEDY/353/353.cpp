#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("spectacole.in");
ofstream fout("spectacole.out");

struct spectacol{
    int x,y;
}s[100];


int main(){
    int n,pot = 1, u;
    fin >> n;
    for(int i = 0; i < n; i++){
        fin >> s[i].x >> s[i].y;
    }
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(s[i].y > s[j].y)
                swap(s[i], s[j]);
        }
    }
    //for(int i = 0; i<n; i++){
    //    fout<< s[i].x <<' '<<s[i].y<<endl;
    //}
    u = s[0].y;
    for(int i = 1; i<n; i++){
        if(s[i].x >= u){
            pot++;
            u = s[i].y;
        }
    }
    fout<<pot;
}