#include<iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle(){
            cout << "Theez Vehicle" << endl;
        }
};

class fourwheeled{
    public:
        fourwheeled(){
            cout << "Theez Four-Wheeled!" << endl;
        } 
};
class Bus : public Vehicle {  //--------------------------> SINGLE INHERITANCE
    public:
        Bus(){
            cout << "Theez Bus!" << endl;
        } 
};

class Car :public Vehicle, public fourwheeled {  //--------------------> MULTIPLE INHERITANCE
    public:
        Car(){
            cout << "Theez Car!" << endl;
        }
};

int main(){
    Car c;
    cout <<  endl;
    Bus b;
    return 0;
}