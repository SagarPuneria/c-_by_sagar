#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
	void get_complex()
	{
		cin>>real>>img;
	}
	void print_complex();
};
void complex :: print_complex()
{
	cout<<real<<img<<"\n";
}
int main()
{
	complex c1,c2;
	c1.get_complex();
	c2.get_complex();
	c1.print_complex();
	c2.print_complex();
}
