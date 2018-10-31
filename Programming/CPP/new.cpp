#include<iostream>
#include<cstring>
using namespace std;
class A
{
	char *p;
	public:
	A(){}
	A(const char *s)
	{
		p=new char[strlen(s)+1];
		strcpy(p,s);
	}
	void modify()
	{
		p[0]='s';
	}
	void print_data()
	{
		cout<<"string-"<<p<endl;
	}
};
main()
{
	A o("vector"),o1;
	o1=o;
	o.print_data();
	o1.print_data();
	o.modify();
	cout<<"--------------------------"<<endl;
	o.print_data();
	o1.print_data();
}
