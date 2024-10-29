//5)WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS.
#include<iostream>
using namespace std;
int main()
{
	 int Osum=0,Esum=0,s;
	 
	 cout<<"Enter the size of arry ";
	 cin>>s;
	 int a[s];
	 cout<<"elements of array ";
	 for(int i=0;i<s;i++)
	 {
	 	cin>>a[i];
	 }
	for(int i=0;i<s;i++){

	 	if(a[i]%2==0)
	 	{
	 		Esum=Esum+a[i];
		 }
		 else
		 {
		 	Osum=Osum+a[i];
		 }
}
	  cout<<"Sum of even is  "<<Esum<<endl;
	  cout<<"Sum of odd is  "<<Osum
	  ;
}
