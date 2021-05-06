#include<iostream>
using namespace std;
template<class T>
class stac
{
	T *a;
	int top;
	int size;
public:
	void push(T);
	T pop();
	T peek();
	bool isfull();
	bool isempty();
	stac()
	{
		a=NULL;
		top=-1;
		size=0;
	}
	stac(T n)
	{
		a=new T [n];
		top=-1;
		size=n;
	}
	~stac()
	{
		cout<<"inside destructor\n";
		delete a;
	}
	void display()
	{
		int i;
		cout<<"elements are\n";	
		for(i=top;i>=0;i--)
			cout<<a[i]<<endl;
	}
};
template<class T>
bool stac<T>::isempty()
{
	return(top==-1);
}
template<class T>
bool stac<T>::isfull()
{
	return(top>=size);
}
template<class T>
void stac<T>::push(T ele)
{
	if(!(isfull()))
	{
	top++;
	a[top]=ele;
	cout<<a[top]<<endl;
	}
	else
	cout<<"stack is full\n";
	//return;
}
template<class T>
T stac<T>::pop()
{
	T x=-99;
	if(!(isempty()))
	{
	x=a[top];
	top--;
	cout<<"pop element is "<<x<<endl;;	
	}
	else
	cout<<"stack is empty";
	return x;
}
template<class T>
T stac<T>::peek()
{
	T x=-99;
	if(!(isempty()))
	{
	x=a[top];
	cout<<"peak element is "<<x<<endl;;	
	}
	else
	cout<<"stack is empty";
	return x;
}
int main()
{
	/*stac<int> s(4);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);*/
	stac<char> s(4);
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	s.push('f');
	s.display();
	cout<<"poped ele is "<<s.pop()<<endl;
	cout<<"poped ele is "<<s.pop()<<endl;
	s.display();
	cout<<"peek of stack is "<<s.peek()<<endl;
	return 0;
}	  
