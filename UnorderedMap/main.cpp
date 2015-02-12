#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int,string> w;
    w.insert(make_pair(1,"banane"));
    w.insert(make_pair(5,"mere"));
    w.insert(make_pair(7,"pere"));
    w.insert(make_pair(9,"masline"));
    map<int,string>::iterator pos;
    for(pos=w.begin();pos!=w.end();++pos) {
    cout<<pos->first<<"\t";
    cout<<pos->second<<endl;
    }
    pos=w.find(5);
    cout<<pos->second;
    return 0;
}
