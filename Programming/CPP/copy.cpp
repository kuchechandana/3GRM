#include<iostream>
using namespace std;
class A
{
	private :
		int x;
		int y;
	public :
		A(){}
		A(int a,int b)
		{
			cout<<"parameterised constructor"<<endl;
			x=a,y=b;
		}
		void print_data()
		{
			cout<<"x- "<<x<<endl;
			cout<<"y- "<<y<<endl;
		}

};
main()
{
	A a(10,20),a1;
	a.print_data();
	A.a1(a);
	a1.print_data();
}
