#include <iostream>

using namespace std;

struct nod{
    int data;
    nod* next;
}*v;

void add(nod* & v, int x){
    nod* c = new nod;
    c->data= x;
    c->next = v;
    v= c;
}
void afisare(nod* & v){
    nod*c = v;
    while(c){
        cout << c->data<<" ";
        c=c->next;
    }
}
void inseraredublu(nod* &v){
    nod* c = v;
    while(c){
        if(c->data % 2 == 0){
            nod* d = new nod;
            d->data = c->data * 2;
            d->next = c->next;
            c->next = d;
            c = d->next;
        }
        else c=c->next;
    }
}
int main(){
    int n,x;
    cin >> n;
    for(int i = 1; i<= n; i++){
        cin >> x;
        add(v,x);
    }
    
    afisare(v);
    cout<<endl;
    inseraredublu(v);
    
    afisare(v);
}