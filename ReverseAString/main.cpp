#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char* p=&s[0];
    int n=s.length();
    for(int i=0;i<n/2;i++) {char aux=*(p+i); *(p+i)=*(p+n-i-1); *(p+n-i-1)=aux; }
    cout<<s;
    return 0;
}
