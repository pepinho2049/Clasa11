#include <iostream>
using namespace std;

int n , frecv[10], a[10];

int main(){
    for(int i = 0 ; i <10 ; i ++)
        a[i] = i;
    cin  >> n;  
    for(int i = 1 ; i <= n ;  ++i)
    {
        int x;
        cin >> x;
        do
        {
            frecv[x % 10] ++;
            x /= 10;
        }
        while(x > 0);
    }
    for(int i =0; i < 9 ; i++)
        for(int j= i + 1; j < 10 ; j ++)
            if(frecv[i]>frecv[j]){
            
                swap(frecv[i], frecv[j]);
                swap(a[i], a[j]);
            }
            else
                if(frecv[i] == frecv[j])
                    if(a[i] > a[j]){
                        swap(a[i], a[j]);
                    }
    for(int i = 0 ; i < 10 ; i ++)
        if(frecv[i] > 0)
            cout << a[i] << " ";
    return 0;
}