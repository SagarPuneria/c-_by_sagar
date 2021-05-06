#include<iostream>
using namespace std;
class DSSD_STUDENT
{
	int rno;
	char name[10];
	int m1,m2;
	public:
	void read()
	{
		cout<<"Input name\n";
		cin>>name;
		cout<<"Input rollno\n";
		cin>>rno;
		cout<<"input marks\n";
		cin>>m1>>m2;
	}
	friend ostream &operator<<(ostream &,DSSD_STUDENT);
	friend istream &operator>>(istream &,DSSD_STUDENT &);	
	friend int generate_results(DSSD_STUDENT [], int );
};
istream &operator>>(istream &cin,DSSD_STUDENT &s)
{
	cout<<"Input name\n";
	cin>>s.name;
	cout<<"Input rollno\n";
	cin>>s.rno;
	cout<<"input marks\n";
	cin>>s.m1>>s.m2;
	return cin;
}
ostream &operator<<(ostream &cout,DSSD_STUDENT s)
{
	cout<<"name "<<s.name<<endl;
	cout<<"rollno "<<s.rno<<endl;
	cout<<"marks "<<s.m1<<" "<<s.m2<<endl;
	return cout;
}
int generate_results(DSSD_STUDENT *s, int n)
{
	int i,sum=0,sm;
	float t;
	cout<<"result and grade of each student is\n";
	for(i=0;i<n;i++)
	{
		if(s[i].m1<40 || s[i].m2<40)
		{
			cout<<"student "<<i<<endl;
			cout<<"result fail\n";			
		}
		else
		{
			cout<<"student "<<i<<endl;
				sm=s[i].m1+s[i].m2;
			t=(float)sm/n;
			cout<<"Average is "<<t<<endl;
			if(t>=40 && t<60)
				cout<<"Grade C\n";
			else if(t>=60 && t<70)
				cout<<"Grade B\n";
			else
				cout<<"Grade A\n";
			cout<<"result pass\n";
		}
		sum=s[i].m1+s[i].m2+sum;
	}
	return sum;
}
int main()
{
	DSSD_STUDENT *s;
	int n;
	cout<<"Input number of students:\n";
	cin>>n;
	s=new DSSD_STUDENT[n];
	for(int i=0;i<n;i++)
		s[i].read();
	cout<<generate_results(s,n)<<endl;
	//cin>>s[1];
	//cout<<s[1];
	delete s;
}
