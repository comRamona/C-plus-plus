/*
 * h.cpp
 *
 *  Created on: 30 Jan 2015
 *      Author: ramona
 */




#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char s[50]="";
	cin.get(s,10,'\n');
	char *p;
	p=strchr(s,'a');
	cout<<p-s;
	int v[10]={1,2,3,4};
	int *a,*b=new int;
	a=&v[1];
	b=&v[2];
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
	cout<<v[0]<<v[1]<<v[2]<<v[3];
	return 0;
}
