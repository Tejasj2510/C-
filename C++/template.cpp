#include <iostream>  
using namespace std;  
template<class A> 
A sub(A &a,A &b)  
{  
    A res = a-b;  
    return res;  
      
}  
int main()  
{  
  int i =6;  
  int j =2;  
  float m = 3.5;  
  float n = 1.2;  
  cout<<"Subtraction of i and j is :"<<sub(i,j);  
  cout<<'\n';  
  cout<<"Subtraction of m and n is :"<<sub(m,n);  
  return 0;  
}

//// overling tempplate
//#include <iostream>  
//using namespace std;  
//template<class X>
// void fun(X a)  
//{  
//    std::cout << "Value of a is : " <<a<< std::endl;  
//}  
//template<class X,class Y> 
//void fun(X b ,Y c)  
//{  
//    std::cout << "Value of b is : " <<b<< std::endl;  
//    std::cout << "Value of c is : " <<c<< std::endl;  
//}  
//int main()  
//{  
//   fun(10);  
//   fun(20,30.5);  
//   return 0;  
//}  
