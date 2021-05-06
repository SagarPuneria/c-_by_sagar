#include<iostream>
using namespace std;
class deque
{
	int *a;
	int size;
	public:
	insert_rear();
	delete_rear();
	insert_front();
	delete_front();
};
class stack:public deque
{
	int top;
	public()
	push()
	{
		insert_rear();
	}
	pop()
	{
		delete_rear();
	}
};
class queue:public deque
{
	int f,r;
	public:
	enqueue()
	{
		insert_rear();
	}
	dequeue()
	{
		delete_front();
	}
};
