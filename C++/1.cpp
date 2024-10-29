//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.//

#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"enter two num ";
	cin>>a;
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b;
	
}
