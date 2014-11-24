#include<iostream>
using std::cin;
using std::cout;
using std::endl;//better than "using namespace std" because you don't want to have a collision of names later. This is a general good habit.//

int main()
{
	int c=0;
	cout<<"enter 1 for case 1, 2 for case 2"<<endl;
	cin>>c;
	int a=0, b=0, temp1;//temp1 is for eg1
	int *p1=NULL, *p2=NULL;
	int *temp2=NULL;//eg2

	cin>>a>>b;
	p1=&a;
	p2=&b;
	
	if(*p1<*p2)
	{
		switch(c)
		{
			case 1:temp1=*p1;*p1=*p2;*p2=temp1;//eg2
			break;//don't forget the break, otherwise the next line will be executed too.
			case 2:temp2=p1;p1=p2;p2=temp2;//eg3
		}

	}
	cout<<"max="<<*p1<<",min="<<*p2<<endl;
	return 0;
}
