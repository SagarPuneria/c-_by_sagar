#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
	void get_complex();
	void print_complex();
	void add_complex(complex c1,complex c2);
	complex add_complex(complex c);
};
void complex :: get_complex()
{
	cin>>real>>img;
}
void complex :: print_complex()
{
	cout<<real<<img<<endl;
}
void complex :: add_complex(complex c1,complex c2)
{
	real=c1.real+c2.real;
	img=c1.img+c2.img;
}
complex complex :: add_complex(complex c)
{
	complex c5;
	c5.real=real+c.real;
	c5.img=img+c.img;
	return c5;
}
int main()
{
	complex c1,c2,c3,c4;
	c1.get_complex();
	c2.get_complex();
	c3.add_complex(c1,c2);
	c3.print_complex();
	c4=c1.add_complex(c2);
	c4.print_complex();	
}
