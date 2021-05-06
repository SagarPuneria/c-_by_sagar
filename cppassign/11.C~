#include<iostream>
using namespace std;
class A{
	int a,b,c;
public:
	//int a,b,c;
	A()
	{
		a=b=c=0;
	}	
	A(int i,int j,int k)
	{
	 a=i;b=j;c=k;
	}
	void printdata1()
	{
	cout<<a<<b<<c;
	}
};
class B:public A
{
	 int d;
public :
	
	B(int i,int j,int k,int l):A(i,j,k)
	{
	  d=l;
	}
	void printdata()
	{
	cout<<d;//<<i<<j<<k<<d;
	}
};
int main()
{
	B b(1,2,3,4);
	b.printdata1();
	b.printdata();
	return 0;
}
	
	
