#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[5] = {1,2,3,4,5};
	int *p=NULL; //good habit//
	cout<<a<<endl;
	p = a;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<*p++<<endl;//Notice that it prints out a[0] first then point to a[1]// 
	cout<<*p++<<endl;
	return 0;
}
