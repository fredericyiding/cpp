/* This file is to demonstrate how pointer works*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int c=7;
	int *pointer;//This means the the dereferenced variable is integer, not pointer itself//
	pointer=&c;//assign the address of c to the pointer//
	cout<<c<<endl;
	cout<<&c<<endl;
	cout<<sizeof(&c)<<endl; // this line is to check size of the address
	cout<<sizeof(c)<<endl;/* this line is to check size of variable itself*/
	cout<<*&c<<endl;// the '*' operator is to get the content from the address//
}
