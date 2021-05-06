#include<iostream>
using namespace std;
#include<math.h>

class poin1{
	int x;
	int y;
public :
	/*poin1()
	{
	x=y=0;
	cout<<"inside constructor\n";
	}
	~poin1()	
	{
		cout<<"inside destructor\n";
	}*/
	void getdata(void)
	{
	cout<<"x and y co-ordinate values";
	cin>>x>>y;
	}
	void printdata(void)
	{
	cout<<x<<y;
	}
	friend double distance1(poin1 c1,poin1 c2);
};
double distance1(poin1 c1,poin1 c2)
{
	poin1 temp;
	int a,b;
	double c;
	//poin1 a,b,c;
	temp.x=c1.x-c2.x;
	temp.y=c1.y-c2.y;
	a=temp.x*temp.x;
	b=temp.y*temp.y;
	c=sqrt((double)(a+b));

	return c;
}
int main()
{
	poin1 c1,c2,c3;
        c1.getdata();
	c2.getdata();
	cout<<"THe distance"<<distance1(c1,c2)<<'\n';
	c3.printdata();
	
return 0;
}
