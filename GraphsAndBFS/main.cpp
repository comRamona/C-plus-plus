#include <iostream>
#include <vector>
#include <queue>
#include <iterator>

using namespace std;
vector<int> L[10000];
queue<int> q;
queue<int> f;
bool vis[10000],viz[10000];

void BFS(int r)
{
    q.push(r);
    vis[r]=true;
    while(!q.empty()) {
    r=q.front();
    q.pop();
    for(vector<int>::iterator it=L[r].begin();it!=L[r].end();it++)
     {  if(!vis[*it]) {
         f.push(*it);   //parcurgere BFS
         vis[*it]=true;
         q.push(*it); }
     }
    }
}

void DFS(int r) {
viz[r]=true;
cout<<r<<" ";
vector<int>::iterator it;
for(it=L[r].begin();it!=L[r].end();it++)
    if(!viz[*it]) DFS(*it);
}
int main()
{   int n,m,r,x,y,i;
    cin>>n>>m>>r;
    for(i=1;i<=m;i++)
       {   cin>>x>>y;
           L[x].push_back(y);   //citeste lista de adiacenta
           L[y].push_back(x);
       }
     BFS(r);
     cout<<f.back()<<endl;   //ultimul parcurs(deepest node) using BFS
     while(!f.empty()) {int p=f.front(); f.pop(); cout<<p<<" ";}
     cout<<endl;  //BFS
     DFS(r);
    return 0;
}
