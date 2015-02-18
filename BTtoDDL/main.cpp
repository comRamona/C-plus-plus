#include <iostream>

using namespace std;

struct node{int data; node* urm; node* ant;}; node *p,*u;
void insertL(int val,node *&u,node *&p){
  node *q=new node;
  q->data=val;
  q->urm=0;
  q->ant=0;
  if(p==0) p=u=q;
  else { u->urm=q;
         q->ant=u;
         u=q;}

}
void afisL(node *p) {node *q=new node;
q=p;
while(q) { cout<<q->data; q=q->urm;}
}

struct Treenode {int inf; Treenode* left; Treenode* right;
Treenode(int x) {inf=x; left=NULL; right=NULL;}
 }; Treenode *r;
void insertT(int x, Treenode *&root) {
if(root==NULL) root=new Treenode(x);
else
if(x>root->inf) insertT(x,root->right);
else insertT(x,root->left);
}
void inorder(Treenode *root) { if(root!=NULL) { inorder(root->left); insertL(root->inf,u,p); inorder(root->right);} }




int main()
{
    p=u=NULL;
    r=NULL;
    cout<<"n= ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
      {    int x;
           cout<<"a"<<i<<" "; cin>>x;
           insertT(x,r);
      }
      inorder(r);
      cout<<endl;
      afisL(p);
    return 0;
}
