//C++ Program to Reverse a Number

#include <iostream>  
using namespace std;  
int main()  
{  
  int a,b,rev=0,temp;    
  cout<<"Enter the Number= ";    
  cin>>a;    
 	temp=a;   
 			while(a>0)    
		{    
 			b=a%10; 
 			rev=(rev*10)+b;   
 			a=a/10; 
 
		}  
			cout<<"Reversed number is  "<<rev; 
}
