//4)WRITE A CPP PROGRAM TO DISPLAY FACTORIAL FROM NUMBER 5 TO 8

#include<iostream>
using namespace std;
int main()
{

   int n=5;
   while(n<=8){
   	int fact=1;
   	   for(int i=1; i<=n; i++)
   {
   	fact=fact*i;
   }
   cout<<fact<<endl;
  
   	n++;
   }

}
