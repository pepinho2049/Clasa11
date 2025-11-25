#include <iostream>
using namespace std;

struct val{
    int valoare, sumdiv;
};

int sum_div(int n){
    int sum = 0;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0){
            sum += n / d;
            sum += d;
        }
        if(d * d == n)
            sum -= d;
    }
    return sum;
}

int main(){
    int n, cate = 0;
    cin >> n;
    val v[n+1];
    int st = 0, dr = n-1;
    for(int i = 0; i <n; i++) {
        cin >> v[i].valoare;
        v[i].sumdiv = sum_div(v[i].valoare);
    }
    while(st < dr){
        if(v[st].sumdiv == v[dr].sumdiv){
            cate++;
        }
        if(st+1 == dr){
            st++;
            dr = n;
        }
        else{
            dr--;
        }
    }
    cout << cate;
}