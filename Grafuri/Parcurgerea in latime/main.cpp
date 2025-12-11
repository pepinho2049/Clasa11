#include <bits/stdc++.h>

using namespace std;
ifstream fin("graf.in");

int a[100][100],n, viz[100],coada[100];

void citire()
{
    fin>>n;
    int i,j;
    while(fin>>i>>j)
        a[i][j]=a[j][i]=1;
}

void bfs(int nod)
{
    cout<<nod<<" "; //afisez nodul de pornire
    int ic=1,sc=1;
    coada[ic]=nod;//adaug in coada
    viz[nod]=1; //marchez ca vizitat
    while(ic<=sc) //cat timp mai am elemente in coada
    {
        nod=coada[ic]; //extrag nodul de la inceputul cozii
        for(int j=1;j<=n;j++) //caut vecini nevizitati
            if(a[nod][j]==1 && viz[j]==0)
            {
                cout<<j<<" "; //afisez nodul
                sc++; //cresc sfarsitul cozii
                coada[sc]=j;    //adaug la sfarsitul cozii
                viz[sc]=1; //marchez nodul ca vizitat
            }
        ic++; //cresc inceputul cozii
    }
}
int main()
{
    citire();
    bfs(1);
    return 0;
} 