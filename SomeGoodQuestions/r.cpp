// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Automobile {
    protected:
        string make;
        int model;
    public:
        Automobile(){
            make = "";
            model = 0;
        }
        
        Automobile(string make, int model){
            this->make = make;
            this->model = model;
        }
        
        virtual void printData(){
            cout <<"Automobile data: Make= " << make << " Model= " << model << endl;
        }
        virtual ~Automobile(){
            cout << "Destroying Automobile" << endl;
        }
};

class Car: public Automobile {
    protected:
        int doors;
    public:
        Car() : Automobile(){
            doors = 0;
        }
        
        Car(string make, int model, int doors) : Automobile(make, model){
            this->doors = doors;
        }
        
        void printData() override {
            Automobile::printData();
            cout << "Doors= "<< doors << endl;
        }
        ~Car(){
            cout << "Destroying Car" << endl;
        }
};


class Truck:public Automobile {
    protected:
        string driveType;
    public:
        Truck() : Automobile(){
            driveType="";
        }
        Truck(string make, int model, string driveType) : Automobile(make,model){
            this->driveType = driveType;
        }
        
        void printData() override{
            Automobile::printData();
            cout << "Data Type = " << driveType << endl;
        }
        ~Truck(){
            cout << "Destroying Truck" << endl;
        }
};

int main(){
    string make, dtype;
    int doors,model;
        cin>>make;
        cin>>model;
        cin>>doors;
        
        Car c(make, model, doors);
        c.printData();
        cout<<endl;
        
        cin>>make;
        cin>>model;
        cin>>dtype;
        Truck t(make, model, dtype);
        t.printData();
        
        return 0;
}