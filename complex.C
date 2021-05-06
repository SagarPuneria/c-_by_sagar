#include<iostream>
using namespace std;
class complex1
{
	float r;
	float i;
	public:
	complex1()//defult constructor
	{
		i=r=20;
	}
	complex1(int x,int y)//parametrized constructor
	{
		r=x;
		i=y;
	}
	complex1(const complex1 &c)//copy constructor
	{
		r=c.r;
		i=c.i;
	}
	complex1 operator()(int x,int y)//c3=c1(3,8)+c2(5); -> c1(3,8)
	{
		r=x;i=y;
		return(*this);
	}
	complex1 operator()(int x)//c3=c1(3,8)+c2(5); -> c2(5)
	{
		r=i=x;
		return(*this);
	}
	complex1(int x)//parametrized constructor
	{
		r=i=x;
	}
	void print_complex()
	{
		cout<<"real="<<r<<" img="<<i<<endl;
	}
	complex1 operator++()//++c1
	{
		++r;
		++i;
		return(*this);
	}
	complex1 operator++(int x)//c1++
	{
		complex1 temp;
		temp.r=r++;
		temp.i=i++;
		return temp;
	}
	complex1 operator+(complex1 c)//c4=c1+c2
	{
		/*complex1 temp;
		temp.r=r+c.r;
		temp.i=i+c.i;	
		return (temp);*/
		this->r+=c.r;
		this->i+=c.i;
		return(*this);
	}
	complex1 operator+=(complex1 c)//c1+=c2
	{
		this->r+=c.r;//r+=c.r;
		this->i+=c.i;//i+=c.i;
		return(*this);
	}
	complex1 operator-()//c4=-c1
	{
		/*complex1 temp;
		temp.r=-r;
		temp.i=-i;
		return temp;*/
		this->r=-r;
		this->i=-i;
		return(*this);
	}
	complex1 operator+(int x)//c5=c1+5
	{
		complex1 temp;
		temp.r=r+x;
		temp.i=i+x;
		return temp;
	}
	complex1 operator,(complex1 c)
	{
		return (c);
	}
	complex1 *operator->()
	{
		return(this);
	}
	~complex1()
	{
		cout<<"inside destructor\n";
	}
	//friend complex1 operator-(complex1,complex1);
	complex1 operator-(complex1);//c5=c1-c2
	friend complex1 operator+(int,complex1);//c4=5+c1
	friend ostream &operator<<(ostream &,complex1);//cout<<c1<<c2<<c3
	friend istream &operator>>(istream &,complex1 &);//cin>>c1>>c2
	friend complex1 operator--(complex1 &);//--c3
	friend complex1 operator--(complex1 &,int);//c3--
};
/*complex1 operator-(complex1 x,complex1 y)
{
	complex1 temp;
	temp.r=x.r-y.r;
	temp.i=x.i-y.i;
	return temp;
}*/
complex1 complex1::operator-(complex1 x)
{
	complex1 temp;
	temp.r=r-x.r;
	temp.i=i-x.i;
	return temp;
}
complex1 operator+(int x,complex1 c)
{
	complex1 temp;
	temp.r=c.r+x;
	temp.i=c.i+x;
	return temp;
}
ostream &operator<<(ostream &cout,complex1 c)
{
	cout<<"real value ="<<c.r<<endl;
	cout<<"img value ="<<c.i<<endl;
	return cout;
}
istream &operator>>(istream &cin,complex1 &c)
{
	cin>>c.r>>c.i;
	return cin;
}
complex1 operator--(complex1 &c)
{
	--c.r;
	--c.i;
	return c;
}
complex1 operator--(complex1 &c,int x)
{
	complex1 temp;
	temp.r=c.r--;
	temp.i=c.i--;
	return temp;
}
int main()
{
	complex1 c1(2,3),c2(3),c3(7,8),c5,c,c4(c3),*cptr;
	c1.print_complex();
	c2.print_complex();
	c3.print_complex();
	c4.print_complex();
	c5.print_complex();
	++c1;//complex1 operator++()
	c1.print_complex();
	c1++;//complex1 operator++(int x)
	c1.print_complex();
	c5=c1-c2;//complex1 operator-(complex1);(or)friend complex1 operator-(complex1,complex1);
	c5.print_complex();
	c4=-c1;//complex1 operator-()
	c4.print_complex();
	c4=c1+c2;//complex1 operator+(complex1 c)
	c4.print_complex();
	c1+=c2;//complex1 operator+=(complex1 c)  [c1=c1+c2]
	c1.print_complex();
	c5=c1+5;//complex1 operator+(int x)
	c5.print_complex();
	c4=5+c1;//friend complex1 operator+(int,complex1);
	c4.print_complex();		
	cout<<c4<<c5<<c1;//friend ostream &operator<<(ostream &,complex1);
	cin>>c1>>c2;//friend istream &operator>>(istream &,complex1 &);
	c1.print_complex();
	c2.print_complex();
	c3=c1(3,8)+c2(5);//complex1 operator()(int x,int y),complex1 operator()(int x)
	c3.print_complex();
	c=c1,c2;//complex1 operator,(complex1 c)
	c.print_complex();
	c--;//friend complex1 operator--(complex1 &,int);
	c.print_complex();
	--c;//friend complex1 operator--(complex1 &);
	c.print_complex();
	cptr=&c;
	cptr->print_complex();
	c->print_complex();//complex1 *operator->()
}	
