#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x value"<<endl;
		cin>>x;
		cout<<"enter y value"<<endl;
		cin>>y;
	}
	void print_data()
	{
		cout<<"x- "<<x<<endl;
		cout<<"y- "<<y<<endl;
	}
	friend void swap(A &a1,B &b1);
};
class B
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x value"<<endl;
		cin>>x;
		cout<<"enter y value"<<endl;
		cin>>y;
	}
	void print_data()
	{
		cout<<"x- "<<x<<endl;
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

	temp=a1.y;
	a1.y=b1.x;
	b1.x=temp;
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
