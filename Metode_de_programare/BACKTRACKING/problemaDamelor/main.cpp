#include <iostream>

#include <cmath>
using namespace std;
int n,v[20],sol;

int valid(int k)

{ int i;

for(int i=1;i<=k-1;i++)

if((v[i]==v[k])||(abs(v[i]-v[k])==k-i))

return 0;

return 1;

}

int solutie(int k)

{if(k==n)

return 1;

else

return 0;

}



void afisare()

{int i,j;

for(i=1;i<=n;i++)

{for(j=1;j<=n;j++)

if(v[i]==j)

cout<<"*"<<' ';

else

cout<<"_"<<' ';

cout<<endl;

}

}



void bk(int k)

{int i;

for(i=1;i<=n;i++)

{v[k]=i;

if (valid(k))

if(solutie(k)){

afisare();
exit(0);
}
else

bk(k+1);

}

}

int main()

{cin>>n;

bk(1);

}