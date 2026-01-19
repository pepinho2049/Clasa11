#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], n, viz[100], coada[100];

void citire(){
    ifstream fin("graf.in");
    int x,y;
    fin >> n;
    while(fin >> x >> y){
        a[x][y] = a[y][x] = 1;
    }
}
void latime(int nod){
    viz[nod] = 1; // il marchez ca vizitat
    cout << nod << " ";
    int ic = 1,sc = 1; // initializez inceputul si sfarsitul cozii
    coada[ic] = nod;/// pun nodul in inceputul cozii

    while(ic <= sc){
        int x = coada[ic]; // ii dau lui x inceputul cozii
        for(int i = 1; i <= n; i++){
            if(a[x][i] == 1 && viz[i] == 0) /// daca exista muchie intre x si i si nodul i nu este vizitat
            {
                viz[i] = 1;
                cout << i << " ";
                sc++;/// cresc sfarsitul cozii
                coada[sc] = i; /// il pun pe nodul i la sfarsitul cozii
            }
        }
        ic ++ ;/// dupa ce am terminat de vizitat vecinii, cresc inceputul
    }


}

int main()
{
    citire();
    latime(8);
    return 0;
}
