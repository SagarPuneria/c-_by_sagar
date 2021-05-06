#include<iostream>
using namespace std;
class shape{
protected:int b,h,r;
public :
	void getdata()
	{
		cout<<"enter base value\n";
		cin>>b;
		cout<<"enter height value\n";
		cin>>h;
	}
	void getdata1()
	{
		cout<<"enter radius value\n";
		cin>>r;
	}
	void printdata()
	{
		cout<<b<<h<<r<<endl;
	}
	virtual ~shape()
	{
		cout<<"destructor\n";
	}
	virtual void display_area()=0;
};
void find_area(shape *s)
{
	(*s).display_area();	
}
class traingle:public shape
{
	public:
	void display_area()
	{
		float area;
		area=0.5*b*h;
		cout<<"area of triangle "<<area<<endl;
	}
};
class circle:public shape
{
	public : 
	void display_area()
	{
		float area;
		area=3.142*r*r;
		cout<<"area of circle "<<area<<endl;
	}
};
int main()
{
	shape *sh[2];
	traingle t1;
	circle c1;
	sh[0]=&t1;
	sh[1]=&c1;
	t1.getdata();
	c1.getdata1();
	for(int i=0;i<2;i++)
		find_area(sh[i]);
	//find_area(&c1);
}
