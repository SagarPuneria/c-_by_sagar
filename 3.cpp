#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
	complex()//defult constructor
	{
		real=img=10;
	}
	complex(int r)//parametrized constructor
	{
		real=img=r;
	}
	complex(int r,int i)//parametrized constructor
	{
		real=r;
		img=i;
	}
	void print_complex();
	complex(const complex &c)//copy constructor
	{
		real=c.real;
		img=c.img;
	}
	~complex()
	{
		cout<<"destructor\n";

	}
	//friend void print_complex(complex);
};
/*void print_complex(complex c)
{
	
	cout<<c.real<<c.img<<"\n";
}*/
void complex :: print_complex()
{
	cout<<real<<img<<"\n";
}
/*
int main()		
{
	complex c5,c1(2,3),c3(3),c2(4,5),c4(c2);
	c1.print_complex();
	c2.print_complex();
	c3.print_complex();
	c4.print_complex();
	c5.print_complex();
}*/
int main()		
{
	complex c1(3),c5,c2(2,3);
	{	
		complex c3(c2),c4(7);
		c3.print_complex();
		c4.print_complex();
		//print_complex(c3);//friend void print_complex(complex);
		//print_complex(c4);//friend void print_complex(complex);
	}
	c1.print_complex();
	c2.print_complex();
	c5.print_complex();
	//print_complex(c1);//friend void print_complex(complex);
	//print_complex(c2);//friend void print_complex(complex);
	//print_complex(c5);//friend void print_complex(complex);
}
