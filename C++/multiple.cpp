#include<iostream>
using namespace std;
class parent1
{
	public:
	parent1()
		{
			cout<<"in parent1 def"<<endl;
		}
	void show()
	{
		cout<<"in parent1 show"<<endl;
		}	
};
class parent2{
public:
		parent2()
		{
			cout<<"in parent2 def"<<endl;
		}
	void show()
	{
		cout<<"in parent2 show"<<endl;
	}
	};
	class child:public parent1,public parent2{
	public:
		child()
			{
				cout<<"in child"<<endl;
			}
			
	void show()
	{
		cout<<"in child show"<<endl;
	}
};
	 int main()
{
	child c;
	c.parent1::show();
	c.parent2::show();
	c.child::show();
	
}
