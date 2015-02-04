//============================================================================
// Name        : proj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

int main() { int j=0;
	/*cout << "!!Hello World!!!" << endl; // prints !!!Hello World!
      char s[200];
      cin.get(s,100,'\n');
      cout<<s;
      char sep[]=" '!:,?";
      string x[200];
      int i=0;
      char *r=strtok(s,sep);
      while(r) { x[i]=r;i++;r=strtok(NULL,sep);
      }
      cout<<endl;
      for(j=0;j<=i;j++)
    	  cout<<x[j]<<endl;


      //metoda 2

      string w="";
      string y[50];
      int k=0;
      getline(cin,w);

	  istringstream iss(w);
	    do
	    {

	        iss >> y[k];
	        cout << "Substring: " << y[k]<< endl;
	        k++;
	    } while (iss);


	    // stuff
	   int v[10];
	   v[0]=5;
	   for(int i=1;i<=7;i++)
		   v[i]=i;
	   for(int i=1;i<=7;i++)
	   		   cout<<v[i]<<" ";
	   int *p=new int;
	   p=&v[3];
	   *p=v[2];
	   for(int i=1;i<=7;i++)
		   cout<<v[i]<<" ";
	   cout<<endl;
	   cout<<v<<" "<<&v[0]<<" "<<*v<<" "<<(v+3)<<" "<<*(v+2)<<" "<<p<<" "<<*p<<endl;
	   char st[50]="vedem";
	   cout<<st<<" "<<&st[0]<<" "<<*st<<" "<<" "<<(st+1)<<*(st+1)<<endl;
	   char *t="yupi";
	   cout<<t<<" "<<t+1<<" "<<*t<<" "<<*(t+1)<<endl; */

	  /* char cuv[]="pare";
	   int len=sizeof(cuv)/sizeof(cuv[0])-1;
	   int g;
	   cout<<len;
	   for(g=0;g<(len/2);g++)
	    {int aux=cuv[g];
	       cuv[g]=cuv[len-g-1];
	       cuv[len-g-1]=aux;}
	   for(int z=0;z<len;z++)
		   cout<<cuv[z]<<" "; */
	   char *f="fuckyonmu";
	   char aux=*(f+2);
	   *(f+3)=aux;
	   cout<<f;

	   return 0;}


