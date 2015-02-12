#include <iostream>
#include <string>

using namespace std;

int main()
{
    string source="Look for a substring in me";
    string substring="sub";
    int max=source.length()-substring.length();
    int q=0;
    for(int i=0;i<=max;i++)
        {
        int n=substring.length();
        int j=i;
        int k=0;
        int w=1;
        while(n) {if(source[j]!=substring[k]) {w=0; break; }
               j++; k++; n--;
               }
        if(w==1) {q=1; break;}
     }

     if(q) cout<<"yep"; else cout<<"nope";
     return 0;

}
