#include<iostream>
using namespace std;

class Animal{
    public: 
        Animal(){
            cout << "That's an Animal" << endl;
        }
};

class Dog : public Animal{
    public:
        Dog(){
            cout << "What d dog doing?" << endl;
        }
};

class Cat : public Animal{
    public:
        Cat(){
            cout << "Meow!" << endl;
        }
};

int main(){

    Dog d;

    Cat c;

    return 0;
}