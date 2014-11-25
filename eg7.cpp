#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main()
{
	int a[5], *p=NULL, *q=NULL, temp;
	for (p=a;p<a+5;p++)
		cin>>*p;
	for (p=a,q=a+4;p<q;p++,q--)//Notice , and ; difference
	{
		temp=*p;*p=*q;*q=temp;
	}
	for(p=a;p<a+5;p++)
		cout<<setw(3)<<*p;
	return 0;
}
