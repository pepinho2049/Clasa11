#include <iostream>
#include <algorithm>
using namespace std;

struct ob{
    int g, v;
    float rentabil;
}obiect[1001];

int main(){
    int n, gmax, s = 0;
    cin >> n >> gmax;
    for(int i = 1; i<=n; i++){
        cin >> obiect[i].g >> obiect[i].v;
        obiect[i].rentabil = (float)obiect[i].v / obiect[i].g;
    }
    sort(obiect+1, obiect+n+1, [](ob g, ob v){
        return g.rentabil > v.rentabil;
    });
    for(int i = 1; i<=n; i++){
        float val = 0;
        if(gmax == 0) break;
        if(obiect[i].g <= gmax){
            val = obiect[i].v;
            gmax -= obiect[i].g;
            
        }
        else{
            val=obiect[i].v*((float)gmax/obiect[i].g);
            gmax = 0;
        }
        s+=val;
    }
    cout<<s;
}