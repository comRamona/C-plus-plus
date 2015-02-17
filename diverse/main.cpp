#include <iostream>
#include <Math.h>

using namespace std;


//prim
bool prim(int x) {
 if(x==2) return true;
 if(x==0||x==1) return false;
 for(int i=2;i<=sqrt(x);i+=2) if(x%i==0) return false;
 return true; }

//desc factori primi

void factori(int n) {
int d=2;
while(n>1) { int f=0;
  while(n%d==0) {f++; n=n/d; }
  if(f) cout<<d<<"^"<<f<<" ";
  d++;
}

}

//cmmdc euclid

int cmmdc(int a,int b) {
 if(b==0) cout<<a;
 else
 cmmdc(b,a%b);
}

//Din baza 10 in baza 2

int main()
{   int n10;
    cin>>n10;
    for(int i=15;i>=0;i--)
        {int p=(n10>>i)&1; cout<<p; }
    int nb=0;
    int pb=1;
    while(n10) {nb=nb+pb*(n10%2); n10=n10/2; pb=pb*10; }
    cout<<endl;
    cout<<nb;
    factori(100);
    cmmdc(9,27);
    return 0;
}
