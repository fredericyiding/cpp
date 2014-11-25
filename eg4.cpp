#include<iostream>
using std::cout;
using std::endl;

int main()
{
	int a[5] = {1,2,3,4,5};
	int *p1 = &a[3];
	cout<<"*p1: "<<*p1<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"*a: "<<*a<<endl;
	*p1 = 30;
	cout<<"*p1: "<<*p1<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"*a: "<<*a<<endl;
	return 0;
}
