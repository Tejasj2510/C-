//2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT.

#include <iostream>  
using namespace std;  
int main()  
{  
  int a,b,sum=0,temp;    
  cout<<"Enter the Number= ";    
  cin>>a;    
 temp=a;//12321    
 while(a>0)    
{    
 b=a%10; //b=1  ;
 sum=(sum*10)+b; //sum=1232   
 a=a/10; //1232   
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}
