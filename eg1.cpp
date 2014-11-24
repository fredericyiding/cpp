#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int iCount=18;
	int *iPtr = &iCount;
	*iPtr=58;

	cout<<"iCount="<<iCount<<endl;
	cout<<"iPtr="<<iPtr<<endl;
	cout<<"&iCount="<<&iCount<<endl;
	cout<<"*iPtr="<<*iPtr<<endl;
	cout<<"&iPtr="<<&iPtr<<endl;
	return 0;
}


