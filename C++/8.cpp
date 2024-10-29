//C++ Program to Find number of Digits in any number

#include<iostream>
using namespace std;
main()
{
     
	int x,count=0;
	cout<<"Enter the Number";
	cin>>x;
	while(x!=0)
	{
		x=x/10;
		count++;
	}
	cout<<"Number of digits in given number is "<<count;
}
