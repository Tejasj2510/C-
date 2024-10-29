#include <iostream>

int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 2 and 3 (int): " << add(2, 3) << std::endl;         
    std::cout << "Sum of 2, 3, and 4 (int): " << add(2, 3, 4) << std::endl; t)
    std::cout << "Sum of 2.5 and 3.5 (double): " << add(2.5, 3.5) << std::endl; 
    
    return 0;
}


