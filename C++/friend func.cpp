#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

 
    friend void printVolume(const Box& b);
};


void printVolume(const Box& b) {
    double volume = b.length * b.width * b.height;
    cout << "Volume of the box: " << volume << endl;
}

int main() {
    Box myBox(3.5, 2.0, 1.5);
    printVolume(myBox);
    return 0;
}

