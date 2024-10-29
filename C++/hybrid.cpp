#include<iostream>
using namespace std;
class A
{
	public:
	 void show1()
		{
			cout<<"In a"<<endl;
			
		}
		
};
class B : virtual public A
			{
				public:
					void show()
					{
						cout<<"in b"<<endl;
					}
			
			};
class C: virtual public A
{
	public:
		void show()
		{
			cout<<"in c"<<endl;
	}
};
class D: public C,public B
{
	public:
     	void show()
     	{
     		cout<<"In D"<<endl;
		 }
	 
};
int main()
{
	D d;
	d.show1();
}
