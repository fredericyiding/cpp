#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n=0;
	int * p=&n;
	cout<<p<<endl;
	p++;
	cout<<p<<endl;
	return 0;
}
