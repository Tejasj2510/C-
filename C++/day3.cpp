//malloc

/*#include<stdio.h>
#include <stdlib.h>
int main(){
	
	int* ptr;
	int n,i;
	
	printf("enter the no of elements \n" );
	scanf("%d" ,&n);
	ptr = (int*) malloc(n* sizeof(int));
	        printf("accept elements \n");

	for(i=0;i<n;i++)
		scanf("%d", &ptr[i]);
	
	printf("display elements \n");
	for(i=0;i<n;i++)
	printf("%d", ptr[i]);
	
} */

// new and delete operator

/* #include<iostream>
using namespace std;

int main(){
	
	int* p;
	char* q;
	float* r;
	
	 p = new int(54);
	 cout<< *p <<"\n";
	 q= new char('P');
	 cout<< *q <<"\n";
	 r =  new float(5.09f);
	 cout<< *r <<"\n";
	 
	 delete p;
	 delete q;
	 delete r;
	 
}
*/

/*
#include <iostream>

using namespace std;
#include<string.h>

int main(){
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int* ptr=new int[n];
	for(int i=0;i<n;i++){
		cin>>*(ptr + i);
	}
	
	for(int i=0;i<n;i++){
		cout<<ptr[i];
	}
	cout<<endl;
	//cout<<strlen();
	cout<<sizeof(ptr);
	delete []ptr;
} 
*/
/*
#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

class student{
	int rollno;
	char* name;
	public:
		void display();
		student(int,char*);

		~student(){
		cout<<"dest";

		}
		
		
};

student::student( int r, char* sptr){
	
	rollno=r;
	name = new char[strlen(sptr) + 1]; 
	strcpy(name,sptr);
}

void student :: display(){
	
	cout<<rollno,name;
	
}
int main(){
	
	student * ptr =  new ptr(1,'sarthak');
	ptr -> display();
	
	return 0 ;
} */

/*
#include <iostream>
using namespace std;
int main() 
{
  int num;
  cout << "Enter total no of students: ";//2
  cin >> num;
  float* ptr;
  ptr = new float[num];
  cout << "Enter CGPA of students." << endl;//8 9
  for (int i = 0; i < num; i++) 
  {
    cout << "Student" << i + 1 << ": ";
    cin >> ptr[i];
  }
  cout << "\nDisplaying CGPA of students." << endl;
  for (int i = 0; i < num; ++i) 
  {
    cout << "Student" << i + 1 << ": " << ptr[i] << endl;
  }
  
  delete[] ptr;

  return 0;
} */

#include<iostream>
using namespace std;

int main(){
	int n,m,i,sum=0;
	
}
