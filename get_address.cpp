#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int c=7;
	cout<<c<<endl;
	cout<<&c<<endl;
	cout<<sizeof(&c)<<endl; // this line is to check size of the address
	cout<<sizeof(c)<<endl;/* this line is to check size of variable itself*/
}
