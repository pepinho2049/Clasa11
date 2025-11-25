#include <iostream>
#include <cmath>
using namespace std;

void teren(int x, int y){
    int arie = x * y;
    if(arie %2 != 0) cout<<"nu exista";
    for(int i = 2; i <= sqrt(arie); i += 2){
        if(arie % i == 0 ){
            if(i%2 == 0) cout << i<< ' ' << "parcele de"<< ' '<<arie/i<<endl;
        }
    }
}



int main(){
    teren(3,5);
}