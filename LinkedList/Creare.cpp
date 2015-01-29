/*
 * Creare.cpp
 *
 *  Created on: 29 Jan 2015
 *      Author: ramona
 */


#include <iostream>
using namespace std;
struct nod{
	int inf;
	nod* urm;
}; nod *p,*u;
void inseraresf(nod *&p,nod *&u,int v) {
	nod *q;
	q=new nod;
	q->inf=v;
	q->urm=0;
	if(p==0) p=u=q;
	else
	{u->urm=q;
	 u=q;
	}
}
void creare(nod *&p,nod *&u,int n) {
	p=u=0;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		inseraresf(p,u,x);}
}
void afis(nod *p){
	nod *q;
	q=p;
	while(q) { cout<<q->inf<<" ";
	           q=q->urm; }
	           cout<<'\n';
	}
int main() {int n; cin>>n; creare(p,u,n); afis(p); return 0;}


