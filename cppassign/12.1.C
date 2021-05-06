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
class derived:private base{
	int d1;
public:
	int d2;
	void getderived()
	{
	 getbase();
	 cin>>d1>>d2;
	}
	void printderived()
	{
	 printbase();
	 cout<<d1<<d2<<endl;
	}
};
int main()
{
	base b;
	derived d;
	b.b2=99;
	//	d.d2=3;*/
 	//b.getbase();
//	d.getderived();
	b.printbase();
//	d.printderived();
return 0;
}
