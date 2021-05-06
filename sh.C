#include<iostream>
using namespace std;
class shape
{
	int color;
 public:
	void getcolor()
	{
	 cin>>color;
	}
	void printcolor()
	{
	 cout<<color<<endl;
	}
virtual void displaya()
	{
	cout<<"in shape ";
	}
};
class triangle:public shape
{
	int b,h;
public:
	void gett()
	{
	 cin>>b>>h;
	}
	void printt()
	{
	 cout<<b<<h<<endl;
	}
	virtual void displaya()
	{
	cout<<" area of traingle"<<((0.5)*b*h);
	}
};
class square:public shape
{
	int s;
 public:
	void getsq()
	{
	 cin>>s;
	}
	void printsq()
	{
	 cout<<s<<endl;
	}
	void displaya()
	{
	cout<<"square area"<<(s*s);
	}
};
class rectangle:public shape
{
	int b,l;
public:
	void getre()
	{
	 cin>>b>>l;
	}
	void printre()
	{
	 cout<<b<<l<<endl;
	}
	void displaya()
	{
	cout<<"rectangle "<<(l*b);
	}
};
int main()
{
	int i;
	shape sh,*shp[4];
	triangle t;
	square s;
	rectangle r;
	shp[0]=&sh;
	shp[1]=&t;	
	shp[2]=&s;
	shp[3]=&r;
	t.gett();
	s.getsq();
	r.getre();
	for(i=0;i<4;i++)
	{
	 shp[i]->displaya();
	// shp[i]->getcolor();
	//shp[i]->printcolor();
	}
	
return 0;
}
