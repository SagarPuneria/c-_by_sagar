#include<iostream>
using namespace std;
class alpha
{
	public:
	virtual void fun1()
	{
		cout<<"Hello\n";
	}
};
class beta:public alpha
{
	public:
	void fun1()
	{
		cout<<"hi\n";
	}
};
int main()
{
	/*
	beta b;
	b.fun1();//o/p:-hi*/

	/*
	alpha a;
	a.fun1();//o/p:-hello*/
	
	alpha *a;
	a=new beta;
	//(*a).fun1();(or)
	a->fun1();//o/p:-hi--->virtual void fun1() in base class*/

	/*
	alpha *a;
	beta b;
	a=&b;
	//(*a).fun1();
	a->fun1();//o/p:-hi--->virtual void fun1() in base class*/

	/*
	alpha *a;
	beta b;
	a=&b;
	//(*a).fun1();
	a->fun1();//o/p:-hello--->void fun1() in base class*/	
}
