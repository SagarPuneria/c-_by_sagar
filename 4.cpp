#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class string1
{
	char *str;
	int len;
public:
	string1()//defult constructor
	{
	str=NULL;
	len=0;
	}
	string1(const char *s)//parametrized constructor
	{
	 str=(char*)malloc(sizeof(char)*(strlen(s)+1));
	 strcpy(str,s);
       	 len=strlen(str);
	 }
	string1(const string1 &s)//copy constructor
	{
	 str=(char*)malloc(sizeof(char)*(s.len+1));
	 strcpy(str,s.str);
	len=s.len;
	}
	void printstring()
	{
	 if(str!=NULL)
	 {
	 cout<<str<<endl;
	}
	}
	~string1()
	{
	 if(str!=NULL)
	 free(str);
        }
};
int main()
{
 string1 s1,s2("banana"),s3("prem"),s4(s2),s5("sagar");
	s1.printstring();
	s2.printstring();
	s3.printstring();
	s4.printstring();
	s5.printstring();
	return 0;
}
