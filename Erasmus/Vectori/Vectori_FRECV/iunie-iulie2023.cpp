#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");

int sufix[100], prefix[100];



int main(){
    int x;
    while(fin >> x){
        if(x>99){
            int c = x;
            sufix[x%100]++;
            while(c >= 100){
                c /= 10;
            }
            prefix[c]++;
        }
    }
    int cate = 0;
    for(int i = 10; i <=99; i++){
        if(sufix[i] && prefix[i]){
            if(prefix[i] == sufix[i])
                cate++;
        }
    }
    cout << cate;
    
}