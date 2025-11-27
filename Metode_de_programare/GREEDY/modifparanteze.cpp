#include <iostream>
#include <cstring>
using namespace std;
char s[1003];
int main(){
    int n,cnt = 0, nrop = 0;
    cin >> s;
    n = strlen(s);
    if(n%2 == 1) return -1;
    for(int i = 0; i< n; i++){
        if(s[i] == '(') cnt ++;
        else cnt --;
        if(cnt < 0){
            nrop++;
            cnt = 1;
        }
    }
    nrop += cnt/2;
    cout<< nrop;

}