#include<iostream>
using namespace std;
class A
{
	public:
		virtual void call()
		{
			cout<<"in virtual of A"<<endl;
		}
		virtual void show()=0;
//		{
//			cout<<"inb show main";
//		}
};
class B : public A
{
	public:
		void call()
		{
			cout<<"in B"<<endl;
		}
		void show()
		{
			cout<<"in show"<<endl;
		}
};
int main()
{
	A * ptr= new B();
	ptr->call();
	ptr->show();
}
