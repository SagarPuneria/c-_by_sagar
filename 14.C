#include<iostream>
using namespace std;
class shape{
	int color;
public :
	void getdata()
	{
	 cin>>color;
	}
	void printdata()
	{
	 cout<<color;
	}
};
class traingle:public shape
{
	int b,h;
public:
	void getdata()
	{
	 	cin>>b>>h;
	}
	void printdata()
	{
	 cout>>b>>h;
	}
};
class circle:public shape{
	int radius;
	public : 
	void getdata()
	{
	 cin>>radius;
	}
	void print
