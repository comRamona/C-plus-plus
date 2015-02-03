/*
 * swap.cpp
 *
 *  Created on: 3 Feb 2015
 *      Author: s1427590
 */

#include <iostream>
#include <string>
using namespace std;
void swap(char* x,char* y) {
	char temp=*x;
	*x=*y;
	*y=temp; }

int main() {
    char a[]="alabalaportocala";
	swap(a+1,a+2);
	cout<<a;
	char *p;
	p=a;
	char t=*(p+5);
	*(p+5)=*(p+6);
	*(p+6)=t;
	cout<<endl;
	cout<<p<<endl;
	p++;
	cout<<p;
	return 0;
}
