# include <iostream>
using namespace std;

int n, v[105];

int divide(int v[], int st, int dr)
{
    if(st == dr)
    {
        if (v[st]%2==0)
            return 1;
        else
            return 0;
    }
    else
    {
        int mij = (st + dr)/2;
        int R1 = divide(v, st, mij);
        int R2 = divide(v, mij+1, dr);
        if( R1 && R2)
            return 1;
        else
            return 0;

    }
}

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>v[i];
     if(divide(v, 1, n)==1)
        cout<<"DA";
     else
        cout<<"NU";
     return 0;
}