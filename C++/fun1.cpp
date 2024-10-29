#include<stdio.h>

int check(int);
int main(){
	int no;
	printf("Enter Number to check\n");
	scanf("%d",&no);
	int c = check(no);
	(c==1)?printf("Even\n"):printf("Odd\n");
	printf("End main...");
	
}

int check(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
