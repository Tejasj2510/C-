#include<iostream>
using namespace std;
class A
{
	int c;
public:
	int a=1;
protected:
	int b=2;
public:
	void display()
	{
		cout<<"in display of A\n";
	}
};
class B:private A
{
public:
	int c;
public:
	void show()
	{
	    display();
		cout<<a<<b;
	}
};
class C:private B
{
	public:
	void show()
	{
	   
		cout<<c;
	}
};
int main()
{
	B bobj;
	bobj.show();

}

























/*#include<iostream>
using namespace std;
class A
{
	int c;
public:
	int a=1;
protected:
	int b=2;
public:
	void display()
	{
		cout<<"in      display of A\n";
	}
/*protected:
void profun()
{
cout<<"in pro\n";
}

};
class B:public A
{
public:
		public:
	void show()
	{
	    display();
		cout<<a<<b<<endl;
	}
};
class C:public B
{
	public:
	void show()
	{
		cout<< a<<b;
			}
};
int main()
{
	B bobj;
	bobj.show();
	bobj.display();
//bobj.profun();
}*/



































//using namespace std;



//class A
//{
//int c;
//public:
//	int a=1;
//protected:
//	int b=2;
//	void display()
//	{
//		cout<<"in display of A\n";
//	}
//
//};
//class B:protected A
//{
//public:
//	int d;
//	public:
//	void show()
//	{
////	    	B bobj;
//	        display();
//		cout<<a<<b;
//	
//	}
//	//PROTECTED: a,b,display()
//};
//
//int main()
//{
//    B bobj;
//    bobj.show();
//}
