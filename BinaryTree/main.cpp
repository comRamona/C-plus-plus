#include <iostream>

using namespace std;
int h=0;
struct Treenode{ int data; Treenode* left; Treenode* right;
Treenode(int x) {data=x; left=NULL; right=NULL;} };
Treenode *r;

void treeInsert(Treenode *&root, int x) {
if(root==NULL) root=new Treenode(x);
else
 if(x<root->data) treeInsert(root->left,x);
 else treeInsert(root->right,x);
 }


void creare() { int n; cout<<"n= ";cin>>n;
r=NULL;
for(int i=1;i<=n;i++)
    {   int a;
        cout<<"a"<<i<<"= "; cin>>a;
        treeInsert(r,a);
    }
}

bool contains(Treenode *root,int item) {
if(root==NULL) return false;
else
if(root->data==item) return true;
else if(item<root->data) return contains(root->left,item);
else return contains(root->right,item);
}

void preordine(Treenode* root){
if(root!=NULL)
{cout<<root->data<<" ";
preordine(root->left);
preordine(root->right);}

}

void preordine2(Treenode* root,int niv){   //determina max depth
    if(root!=NULL){
    if(h<niv) h=niv;
preordine2(root->left,niv+1);
preordine2(root->right,niv+1);}

}

void preordine3(Treenode* root,int niv){   //gaseste nodurile de pe ultimul nivel
    if(root!=NULL){
    if(niv==h) cout<<root->data<<" ";
preordine3(root->left,niv+1);
preordine3(root->right,niv+1);}

}

void inordine(Treenode* root){
if(root!=NULL)
{
inordine(root->left);
cout<<root->data<<" ";
inordine(root->right);}

}

void postordine(Treenode* root){
if(root!=NULL)
{
postordine(root->left);
postordine(root->right);
cout<<root->data<<" ";}

}

int maxDepth(Treenode *root) {
    if(root==NULL) return 0;
    else {
int lD=maxDepth(root->left);
int rD=maxDepth(root->right);
if(lD>rD) return (lD+1);
else return (rD+1);} }

int main()
{
    cout << "Hello world!" << endl;
    creare();
    if(contains(r,7)) cout<<"yes"; else cout<<"no";
    cout<<endl;
    preordine(r);
    cout<<endl;
    inordine(r);
    cout<<endl;
    postordine(r);
    cout<<endl;
    preordine2(r,1);
    cout<<h;
    cout<<endl;
    preordine3(r,1);
    cout<<endl<<maxDepth(r);
    return 0;
}
