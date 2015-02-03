//============================================================================
// Name        : BinaryTrees.cpp
// Author      : ramona
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct TreeNode {
		int item;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int n) {
			item=n;
			left=NULL;
			right=NULL;
		}
	};
void treeInsert(TreeNode *&root, int newItem) {
	if(root==NULL)  root=new TreeNode(newItem);
	else
		if(newItem<root->item) treeInsert(root->left,newItem);
		else
			treeInsert(root->right,newItem);
}
void preorderPrint(TreeNode *root) {
	if(root!=NULL) {cout<<root->item<<" ";
	preorderPrint(root->left);
	preorderPrint(root->right); }
}
void postorderPrint(TreeNode *root) {
	if(root!=NULL) {postorderPrint(root->left);
	               postorderPrint(root->right);
	                cout<<root->item<<" ";
	                } }
void inorderPrint(TreeNode *root) {
		if(root!=NULL) {inorderPrint(root->left);
		                cout<<root->item<<" ";
		               inorderPrint(root->right);

		                }
}
int main() {
	cout<<"dati nr ";
	int nr=0;
	cin>>nr;
	TreeNode *root=NULL;
	for(int i=1;i<=nr;i++) {
		int j;
		cout<<"dati nr "<<i;
		cin>>j;
        treeInsert(root,j); }
	preorderPrint(root);
	cout<<'\n';
	postorderPrint(root);
	cout<<'\n';
	inorderPrint(root);
	return 0;
}
