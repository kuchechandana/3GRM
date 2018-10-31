#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
	void set_data()
	{
		cout<<"enter x value"<<endl;
		cin>>x;
	}
	void print_data()
	{
		cout<<"x- "<<x<<endl;
	}
	friend void swap(A &a1,B &b1);
};
class B
{
	int y;
	public:
	void set_data()
	{
		cout<<"enter y value"<<endl;
		cin>>y;
	}
	void print_data()
	{
		cout<<"y- "<<y<<endl;
	}
	friend void swap(A &a1,B &b1);
};
void swap(A &a1,B &b1)
{
	int temp;
	temp=a1.x;
	a1.x=b1.y;
	b1.y=temp;

}
main()
{
	A a1;
	B b1;
	a1.set_data();
	a1.print_data();
	b1.set_data();
	b1.print_data();
	swap(a1,b1);
	a1.print_data();
	b1.print_data();
}
