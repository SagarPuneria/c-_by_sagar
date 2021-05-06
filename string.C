#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	char *sarr;
	int len;
	public:
	string1()//defult constructor
	{
		sarr=NULL;len=0;
	}
	string1(const char *s)//s1(apple)  parametrized constructor
	{
		sarr=new char[strlen(s)+1];
		strcpy(sarr,s);
		len=strlen(s);
	}
	string1(const string1 &s)//s4(s1)  copy constructor
	{
		sarr=new char[s.len+1];
		strcpy(sarr,s.sarr);
		len=s.len;
	}
	void print_string()
	{
		if(sarr!=NULL)
			cout<<"string is="<<sarr<<endl;
	}
	string1 operator+(string1 s)//s4=s1+s2
	{
		string1 temp;
		temp.sarr=new char[len+s.len+1];
		strcpy(temp.sarr,sarr);
		strcat(temp.sarr,s.sarr);
		temp.len=len+s.len;
		return temp;
	}
	string1 operator=(string1 s)//s2=s1
	{
		if(sarr!=NULL)
			delete sarr;
		sarr=new char[s.len+1];
		strcpy(sarr,s.sarr);
		len=s.len;
		return(*this);
	}
	string1 operator()(const char *s)//s4=s1("grapes")+s2
	{
		if(sarr!=NULL)
			delete sarr;
		sarr=new char[strlen(s)+1];
		strcpy(sarr,s);
		len=strlen(s);
		return(*this);
	}
	char &operator[](int i)
	{
		if((i>=0) && (i<len)) 
			return(sarr[i]);
		//else
		//	return 0;
	}
	~string1()
	{
		if(sarr!=NULL)
			delete sarr;
		cout<<"destructor\n";
	}
	friend ostream &operator<<(ostream &,string1);
	friend istream &operator>>(istream &,string1 &);
};
ostream &operator<<(ostream &cout,string1 s)
{
	if(s.sarr!=NULL)
		cout<<s.sarr<<endl;
	else
		cout<<"Null string"<<endl;
	return cout;
}
istream &operator>>(istream &cin,string1 &s)
{
	char temp[30];
	if(s.sarr!=NULL)
		delete s.sarr;
	cin>>temp;
	s.sarr=new char[strlen(temp)+1];
	strcpy(s.sarr,temp);
	s.len=strlen(temp);
}
int main()
{
	string1 s1("apple"),s2("banana"),s3("papaya"),s4(s1);
	s1.print_string();
	s2.print_string();
	s3.print_string();
	s4.print_string();
	s4=s1+s2;//string1 operator+(string1 s)
	s4.print_string();
	s2=s1;//string1 operator=(string1 s)
	s2.print_string();
	cin>>s3;//friend ostream &operator<<(ostream &,string1);
	cout<<s3;//friend istream &operator>>(istream &,string1 &);
	s4=s1("grapes")+s2;//string1 operator()(const char *s)
	s4.print_string();
	cin>>s4[2];//char &operator[](int i)
	cout<<s4[2];//char &operator[](int i)
}
