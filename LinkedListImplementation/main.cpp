#include <iostream>

using namespace std;
struct nod {int inf; nod* urm;}; nod *p,*u;
void inseraresf(nod *&p,nod *&u,int v) {
nod*q=new nod;
q->inf=v;
q->urm=0;
if(p==0) p=u=q;
else { u->urm=q;
       u=q;

} }
void creare(nod *&p,nod *&u) {
   p=u=0;
   for(int i=1;i<=5;i++)
      inseraresf(p,u,i);


}
void afis(nod *p) {
nod *q;
q=p;
while(q) { cout<<q->inf<<" "; q=q->urm;}}
int main()
{
    creare(p,u);
    afis(p);
    return 0;
}
