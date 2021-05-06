#include<iostream>
using namespace std;
class complex1
{
	float real;
	float img;
	public:
	complex1()
	{
		real=img=0;
	}
	complex1(int x,int y)
	{
		real=x;
		img=y;
	}

	void complex_print()
	{
		cout<<"real="<<real<<" img="<<img<<endl;
	}
	/*void add_complex(complex1 c1,complex1 c2)
	{
		real=c1.real+c2.real;
		img=c1.img+c2.img;
	}*/
	
	/*complex1 add_complex(complex1 c)
	{
		complex1 temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}*/
	complex1 add_complex(complex1);
	friend complex1 sub_complex(complex1,complex1);
};
complex1 sub_complex(complex1 c1,complex1 c2)
{
		complex1 temp;
		temp.real=c1.real-c2.real;
		temp.img=c1.img-c2.img;
		return temp;
}
complex1 complex1::add_complex(complex1 c)
{
		complex1 temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
}
int main()
{
	complex1 c1(2,3),c2(4,5),c3;;
	c3=c1.add_complex(c2);
	//c3.add_complex(c1,c2);
	c3.complex_print();
	c3=sub_complex(c1,c2);
	c3.complex_print();
}
