#include<iostream>
using namespace std;
template<class T>
class queue
{
	int f,r;
	T *a;
	int size;
	public:
	void enque(T);
	T deque();
	bool underflow();
	bool overflow();
	void display();
	queue();
	queue(T );
	~queue();
};
template<class T>
queue<T>::queue()
{
	size=0;
	f=r=-1;
	a=NULL;
}
template<class T>
queue<T>::queue(T n)
{
	size=n;
	a=new T[n];
	f=r=-1;
}
template<class T>
bool queue<T>::underflow()
{
	return((f==-1)&&(r==-1));
}
template<class T>
bool queue<T>::overflow()
{
	return(r+1==size);
}
template<class T>
void queue<T>::enque(T ele)
{
	if(!overflow())
	{
		if(f==-1 && r==-1)
			f++;
		a[++r]=ele;
		cout<<"inserted element is "<<a[r]<<endl; 
	}
	else
		cout<<"overflow\n";
}
template<class T>
void queue<T>::display()
{
	for(int i=f;i<=r;i++)
		cout<<a[i];
	cout<<endl;
}
template<class T>
T queue<T>::deque()
{
	T x=-99;
	if(!underflow())
	{
		x=a[f];
		if(f==r)
			f=r=-1;
		else
			f++;
	}
	else
		cout<<"underflow\n";
	return x;
}
template<class T>
queue<T>::~queue()
{
	cout<<"inside destructor\n";
	delete a;
}
int main()
{
	/*queue<int> s(4);
	s.enque(1);
	s.enque(2);
	s.enque(3);
	s.enque(4);
	s.enque(5);
	s.enque(6);
	s.enque(7);
	s.display();
	cout<<"deleted element is "<<s.deque()<<endl;
	s.display();*/
	queue<char> s(4);
	s.display();
	s.enque('a');
	s.enque('b');
	s.enque('c');
	s.enque('d');
	s.enque('e');
	s.enque('f');
	s.enque('g');
	s.display();
	cout<<"deleted element is "<<s.deque()<<endl;
	s.display();
	return 0;
}
