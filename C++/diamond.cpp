#include<iostream>
using namespace std;
class A
{
	public:
		A(int x)
		{
			cout<<"in A "<<endl;
		}
};

class B : virtual public A
{
	public:
		B(int y):A(x)
		{
			cout<<"in B"<<endl;
		}
};

class C: virtual public A
{
	public:
		C(int z):A(y)
		{
			cout<<"in C "<<endl;
		}
};

class D:public B, public C
{
	
	public:
		D(int m): B(y),C(z),A(x)
		{
			cout<<"in D"<<endl;
		}
};
int main()
{
	D obj(30);
}


