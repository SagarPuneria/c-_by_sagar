#include<iostream>
using namespace std;
class stac
{
	int *a;
	int top;
	int size;
public:
	void push(int);
	int pop();
	int peek();
	bool isfull();
	bool isempty();
	stac()
	{
		a=NULL;
		top=-1;
		size=0;
	}
	stac(int n)
	{
		a=new int [n];
		top=-1;
		size=n;
	}
	void display()
	{
		int i;
		cout<<"elements are\n";	
		for(i=top;i>=0;i--)
			cout<<a[i]<<endl;
	}
};
bool stac::isempty()
{
	return(top==-1);
}
bool stac::isfull()
{
	return(top>=size);
}
void stac::push(int ele)
{
	if(!(isfull()))
	{
	top++;
	a[top]=ele;
	cout<<a[top];
	}
	else
	cout<<"stack is full";
	return;
}
int stac::pop()
{
	int x=-99;
	if(!(isempty()))
	{
	x=a[top];
	top--;
	cout<<"pop element is"<<x<<endl;	
	}
	else
	cout<<"stack is empty";
	return x;
}/*
bool stac::isfull()
{
	if(top+1>=size)
	return 1;
	else
	return 0;
}
bool stac::isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}*/
int main()
{
	stac s1,s(4);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.pop();
	s.pop();
	s.display();
return 0;
}	 
