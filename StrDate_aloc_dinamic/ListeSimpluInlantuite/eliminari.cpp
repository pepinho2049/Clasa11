#include <iostream>
/*Sa se scrie functii pt urm operatii: stergerea primului nod din lista, sterg ult nod lista, 
                                       stergerea unui nod care contine o anumita inf data x
*/
using namespace std;
struct nod{
    int data;
    nod* next;
}*v;
void adaugare(nod*&v, int val){
    nod* c = new nod;
    c->data = val;
    c->next = v;
    v = c;
}
void stergereprimulnod(nod* &v){
    nod*c = v;// fac o copie a varfului
    v = v->next;
    delete c;
}
void stergereultimulnod(nod* &v){
    if(v->next == NULL){
        nod*c = v;
        v = NULL;
        delete c;
    }
    else{
        nod*d = v;
        nod*c = d->next;
        while(c->next != NULL){
            c=c->next;
            d=d->next;
        }
        d->next = NULL;
        delete c;
    }
}
void stergereLaComanda(nod* &v, int val){
    nod*d = v;
    nod*c = d->next;
    if(d->data == val) stergereprimulnod(v);
    else{
        while(c->data != val){
            d=d->next;
            c=c->next;
        }
        d->next = c->next;
        delete c;
    }
}
void afisare(nod*&v){
    nod*c = v;
    while(c){
        cout << c->data <<" ";
        c=c->next;
    }
}
int main(){
    int n, x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        adaugare(v, x);
    }
    afisare(v);
    cout << endl;
    ///stergereprimulnod(v);
    ///stergereultimulnod(v);
    int y;
    cin >> y;
    stergereLaComanda(v, y);
    afisare(v);
}