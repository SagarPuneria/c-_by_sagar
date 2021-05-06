#include<iostream>
using namespace std;
class shape{
	char c[10];
public :
	void getc()
	{
		cout<<"enter color\n";
		cin>>c;
	}
	void printc()
	{
		cout<<c<<endl;
	}
	virtual void display_area()
	{
		cout<<"Not known\n";
	}
	virtual ~shape()
	{
		cout<<"destructor\n";
	}
};
class traingle:public shape
{
	int b,h;
	public:
	void get_t()
	{
		cout<<"enter base value\n";
		cin>>b;
		cout<<"enter height value\n";
		cin>>h;
		getc();
	}
	void print_t()
	{
		cout<<b<<h;
		printc();
	}
	void display_area()
	{
		float area;
		area=0.5*b*h;
		cout<<"area of triangle "<<area<<endl;
		printc();
	}
};
class circle:public shape
{
	int r;
	public :
	void get_c()
	{
		cout<<"enter radius value\n";
		cin>>r;
		getc();
	}
	void print_c()
	{
		cout<<r;
		printc();
	}	 
	void display_area()
	{
		float area;
		area=3.142*r*r;
		cout<<"area of circle "<<area<<endl;
		printc();
	}
};
int main()
{
	shape *sh[2],s;
	traingle t1;
	circle c1;
	sh[0]=&t1;
	sh[1]=&c1;
	t1.get_t();
	c1.get_c();
	//t1.display_area();
	//sh[0]->display_area();
	for(int i=0;i<2;i++)
		sh[i]->display_area();
	//find_area(&c1);
	s.display_area();
}
