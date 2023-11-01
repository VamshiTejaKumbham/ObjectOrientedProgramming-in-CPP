#include<iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle(){
            cout << "Theez Vehicle" << endl;
        }
};

class fourwheeled : public Vehicle {
    public:
        fourwheeled(){
            cout << "Theez Four-Wheeled!" << endl;
        } 
};

class Car :public fourwheeled {
    public:
        Car(){
            cout << "Theez Car!" << endl;
        }
};

int main(){
    Car c;
    return 0;
}