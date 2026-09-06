#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car" << endl;
    }
};
class Truck : public Vehicle {
public:
    Truck() {
        cout<< "This is a Truck"<< endl;
    }    
};
int main() {
   
    Car obj;
    Truck obj;
    return 0;
}