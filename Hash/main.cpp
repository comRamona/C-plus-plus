#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
ifstream fin("hashuri.in");
ofstream fout("hashuri.out");
vector <int>v[666013];
vector<int>:: iterator it;
const int mod=666013;

void adaug(int x)
{
    v[x%mod].push_back(x);
}

void sterg(int x)
{
    int rest=x%mod;
    for(it=v[rest].begin();it!=v[rest].end();it++)
       if(*it==x)
          { *it=v[rest].back();
             v[rest].pop_back();
             it--;
          }
}
int caut(int x)
{
    int rest=x%mod;
    for(it=v[rest].begin();it!=v[rest].end();it++)
       if(*it==x) return 1;
    return 0;
}


int main()
{
    int n,op,x;
    fin>>n;
    while(n!=0)
    { fin>>op>>x;
      if(op==1) adaug(x);
      else if(op==2) sterg(x);
         else fout<<caut(x)<<"\n";
        n--;
    }
    adaug(112);
    fout<<v[112].back();
    return 0;

}
