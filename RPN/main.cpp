#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
bool isOperator(const string& input){
                string ops[]={"-","+","*","/"};
                for(int i=0;i<4;i++)
                { if(input==ops[i]) return true;  } return false;}
void performOp(string input, stack<double>& calcStack) {
   double a,b,r;
   a=calcStack.top();
   calcStack.pop();
   b=calcStack.top();
   calcStack.pop();
   if(input=="+") {r=a+b; calcStack.push(r);}
   if(input=="-") {r=a-b; calcStack.push(r);}
   if(input=="*") {r=a*b; calcStack.push(r);}
   if(input=="/") {r=a/b; calcStack.push(r);}  }
int main() {

    double num;
    stack<double> calcStack;
    string input;
    bool w=true;
    while(w) {
        cin>>input;
    if(istringstream(input)>>num) {
        calcStack.push(num);}
        else
        if(isOperator(input)) {performOp(input,calcStack);
        }
        else if(input=="q") w=false;
        else {cout<<"invalid input"<<endl;
        }
} cout<<calcStack.top(); }
