#include <fstream>
#include <iostream>
#include <string>

using namespace std;
ifstream fin("A-large-practice.in");
ofstream fout("output2.txt");

int main()
{
    long n;
    fin>>n;
    fin.get();
    string v;
    for(long k=1;k<=n;k++) {
    getline(fin,v);
     string ans=v;
     for(long q=1;q<v.length();q++)
         ans[q]='0';
     ans[0]='1';
     string nums="0123456789z";
     long u=0,h=1;
     for(long i=1;i<v.length();i++)
      {  long w=0;
         for(long j=0;j<i;j++)
             if(v[i]==v[j]) { w=1; ans[i]=ans[j]; break; }
        if(w==0) {if(u==1) u++; ans[i]=nums[u]; if(u)h=u;  u++;  }

      }

      long long int m=0,p=1;
      for(long g=ans.length()-1;g>=0;g--) { long i=ans[g]-'0';
      m=m+i*p;
      p=p*(h+1);


      } fout<<"Case #"<<k<<": "<<m<<endl;




         }


    fin.close();

    return 0;
}
