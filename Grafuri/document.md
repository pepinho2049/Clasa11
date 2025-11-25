# **Grafuri neorientate**



**Memorarea grafurilor**



1. **Matricea de adiacenta**- Se formeaza o matric part, cu col si lin egal cu nr de noduri din graf in care fiecare elem a\[i]\[j] poate lua valorile:

&nbsp;    1- daca exista muchia \[i,j]

&nbsp;    0-daca Nu exista muchia \[i,j]



!***Suma elem de pe o linie/coloana*** repr ***gradul nodului*** respectiv

!!SUMA TUTUROR val dintr-o matr repr suma gradelor nodurilor = 2\*(nr muchii)



a^T = a(matr simetrica)





2\.**Lista de adiacenta - vom nota vecinii directi ptr fiecare nod**

	Se construieste o matrice in care pe col 0 vom pastra treptat gradul fiecarui nod, iar pe col 1->d(x) vom pastra vecinii



Cod:

for(int i = 1; i<=n; i++){

&nbsp;	cin >> x >> y;

&nbsp;	a\[x]\[0]++,a\[y]\[0]++;

&nbsp;	a\[x]\[a\[x]\[0]] = y;

&nbsp;	a\[y]\[a\[y]\[0]] = x;

}



3.Lista muchiilor(total ineficienta)

&nbsp;	struct muchia{

&nbsp;		int x,y; - capetele muchiei

&nbsp;	}v\[100]; - fiecare elem din vect va memora cate o muchie	

**Nr de grafuri distincte care se pot construi cu n noduri  = 2^(n(n-1)/2)**





















