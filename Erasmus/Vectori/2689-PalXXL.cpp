#include <iostream>

using namespace std;


int ogl(int n){
    int ogl = 0;
    while(n){
        ogl = ogl*10 + n%10;
        n /= 10;
    }
    return ogl;
}
int main(){
    int n, x = 0;
    cin >> n;
    int v[n+1];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        x = x*10+v[i];
    }
    cout << x << "\n";
    if(x == ogl(x)) cout << "DA";
    else cout << "NU";
}
/* Varianta 2 in care plecam din extremitati
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,v[1001],i,j,ok=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    i=0;
    j=n-1;
    while(i<j && ok==1){
        if(v[i]==v[j]){
            i++;
            j--;
        }
        else ok=0;
    }
    for(i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    if(ok==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
*/