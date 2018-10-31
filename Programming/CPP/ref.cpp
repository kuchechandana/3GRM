#include<iostream>
using namespace std;
main()
{
int x=100;
int &var_x=x;
cout<<"x- "<<x<<endl;
cout<<"var-x- "<<var_x<<endl;
cout<<"&x- "<<(unsigned)&x<<endl;
cout<<"&var- "<<(unsigned)&var_x<<endl;
}
