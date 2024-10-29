#include <iostream
using namespace std;

class Base {
public:
virtual void show() {
        std::cout << "Base class show function" << std::endl;
    }
virtual ~Base() {}
};


class Derived : public Base {
public:
 
    void show() override {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show(); 
    delete b;  
    return 0;
}

