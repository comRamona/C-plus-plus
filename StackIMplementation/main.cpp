#include <iostream>

using namespace std;

struct nod {int inf; nod* uback; }; nod* varf;
void push(nod *&v, int x) {
nod* c;
if(!v) {v=new nod; v->inf=x; v->uback=0;}
else
        {c=new nod; c->inf=x; c->uback=v; v=c;}
        }
void afis(nod *v) {nod *c;
c=v;
while(c) {cout<<c->inf<<" ";
c=c->uback;}}
int main()
{ int i,k,j,m,n;
cin>>n>>m;
nod* L[n];
for(k=1;k<=n;k++)
 L[k]=0;
for(k=1;k<=m;k++)
      { cin>>i>>j; push(L[i],j); push(L[j],i);}

    cout<<"\'1\'  "; afis(L[1]);
    return 0;
}
