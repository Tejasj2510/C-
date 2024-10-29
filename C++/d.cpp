#include <iostream>
using namespace std;

int avg(int array[]);

int main()
{
	int array[5];
	cout << "enter the values : " << endl;
	
	for(int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	
	int aver = avg(array);
	cout << "The average value is: " << aver << endl;
}

int avg(int array[]){
	
	int sum = 0;
	
	for(int i = 0; i < 5; i++){
		sum += array[i]; // use += to add each element to sum
	}
	int average = sum / 5;
	return average;
}
