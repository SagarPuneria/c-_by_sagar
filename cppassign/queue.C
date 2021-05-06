#include<iostream>
using namespace std;
class queue
{
	int f,r;
	int *a;
	int size;
	public:
	void enque(int);
	int deque();
	//bool underflow();
	//bool overflow();
	void display();
	queue();
	queue(int );
	~queue();
};
queue::queue()
{
	size=0;
	f=r=-1;
	a=NULL;
}
queue::queue(int n)
{
	size=n;
	a=new int[n];
	f=r=-1;
}
/*bool queue::underflow()
{
	return((f==-1)&&(r==-1));
}
bool queue::overflow()
{
	return(r+1==size);
}*/
void queue::enque(int ele)
{
	if(r==size-1)//if(!overflow())
	{
	cout<<"overflow\n";
	return;
	}
	if(f==-1 && r==-1)
		f++;
	a[++r]=ele;
	cout<<"inserted element is "<<a[r]<<endl; 
}
void queue::display()
{
	for(int i=f;i<=r;i++)
		cout<<a[i];
	cout<<endl;
}
int queue::deque()
{
	int x=-999;
	if((f==-1 && r==-1) || (f==r+1))//if(!underflow())
		cout<<"underflow\n";
	x=a[f];
	if(f==r)
		f=r=-1;
	else
		f++;
	return x;
}
queue::~queue()
{
	cout<<"inside destructor\n";
	delete a;
}
int main()
{
	queue s(4);
	s.enque(1);
	s.enque(2);
	s.enque(3);
	s.enque(4);
	s.enque(5);
	s.enque(6);
	s.enque(7);
	s.display();
	return 0;
}
