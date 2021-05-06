#include<iostream>
using namespace std;
#include<math.h>
class pola1
{
	double x,y;
	//static int c;
public:
	double radi();
	double angl();
	void getdata()
	{
		cin>>x>>y;
	}	
	pola1()
	{
		 x=0.0;
		 y=0.0;
		//c++;
	}
	pola1(double a,double b)
	{
		 x=a;
		 y=b;
		 //c++;
	 }
	/*static int gec()
	{
		 return c;
	}*/
};
//int pola1::c=0;
double pola1::radi()
{
	double f;
	f=sqrt((x*x)+(y*y));
	return f;
}
double pola1::angl()
{
	double p;
	p=tan(y/x);
	return p;
}
int main()
{
	pola1 p,p2;
	//p.getdata();
	p2.getdata();
	cout<<p2.radi()<<endl;
	cout<<p2.angl()<<endl;
	return 0;
}
