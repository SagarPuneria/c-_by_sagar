#include<iostream>
using namespace std;
//#define size 100
class stac
{
	int a[5];
	int top;
	//int size;
public:
	void push(int);
	int pop();
	int peek();
	bool isfull();
	bool isempty();
	stac()
	{
	a[5]=0;//{0,0,0,0,0};
	top=-1;
	}/*
	stac(int n)
	{
		top=-1;
		size=n;
	}*/
	void display()
	{
		int i;
		cout<<"elements are\n";	
		for(i=top;i>=0;i--)
			cout<<a[i]<<endl;
	}			
	/*stac(int b)
	{
	 a=(int *)malloc(sizeof(int)*b)
	 top=-1;
	}
	void display()
	{
	int i;
	 for(i=0;i<size;i++)
	 cout<<a[i];
	}*/
};
bool stac::isempty()
{
	return(top==-1);
}
bool stac::isfull()
{
	return(top>=5);
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
	cout<<"stack full";
	return;
}
int stac::pop()
{
	int x=-99;
	if(!(isempty()))
	{
	x=a[top];
	top--;
	cout<<"pop element is"<<x<<endl;;	
	}
	else
	cout<<"empty";
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
	stac s1,s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	//s.push(7);
	s.pop();
	s.pop();
	s.display();
return 0;
}	 
