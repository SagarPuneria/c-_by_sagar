#include<iostream>
using namespace std;
class base{
	int b1;
protected:
	int b3;
public:
	int b2;
	void getbase()
	{
	 cin>>b1>>b2>>b3;
	}
	void printbase()
	{
	 cout<<b1<<b2<<b3;
	}
};
class derived:protected base{
	int d1;
protected:
	int d3;
public:
	int d2;
	void getderived()
	{
	 getbase();
	 cin>>d1>>d2>>d3;
	}
	void printderived()
	{
	 printbase();
	 cout<<d1<<d2<<d3;
	}
};
int main()
{
	base b;
	derived d;
	//b.b2=10;
	//d.d2=3999999;
	//d.b3=2;//error
	//d.d3=4;error
 	//d.getbase();//error
	d.getderived();
	//d.printbase();//error
	d.printderived();
return 0;
}
