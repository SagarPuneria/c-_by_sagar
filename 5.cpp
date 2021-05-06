#include<iostream>
using namespace std;
class complex
{
	float r;
	float i;
	public:
	static int count;
	void get_complex()
	{
		cin>>r>>i;
	}
	void print_complex()
	{
		cout<<r<<i<<count<<"\n";
	}
};
int complex :: count=30;
int main()
{
	cout<<complex::count;//(or)
	complex c1;
	cout<<c1.count;
	c1.get_complex();
	c1.print_complex();
}
