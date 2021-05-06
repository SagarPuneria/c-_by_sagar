#include<iostream>
using namespace std;
class base{
	int b1;
public:
	int b2;
	void getbase()
	{
	 cin>>b1>>b2;
	}
	void printbase()
	{
	 cout<<b1<<b2<<endl;
	}
};
class derived:public base{
	int d1;
public:
	int d2;
	void getderived()
	{
	 cin>>d1>>d2;
	}
	void printderived()
	{
	 cout<<d1<<d2<<endl;
	}
};
int main()
{
	base b;
	derived d;
		d.b2=10;
	d.d2=3;
 	d.getbase();
	d.getderived();
	d.printbase();
	d.printderived();
return 0;
}
