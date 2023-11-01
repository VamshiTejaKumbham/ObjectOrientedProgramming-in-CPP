#include<iostream>
using namespace std;

class operand1{                                //------------>  PARENT CLASS - 1
    protected:
        int a1;
    public: 
        operand1(){
            cout << "Operand-1 is being created" << endl;
        }
        operand1(int a){
            this->a1 = a;
        }
        void display(){
            cout << "Operand-1 : " << this->a1;
        }
};
class operand2{                                //------------>  PARENT CLASS - 2
    protected:
        int a2;
    public: 
        operand2(){
            cout << "Operand-2 is being created" << endl;
        }
        operand2(int a){
            this->a2 = a;
        }
        void display(){
            cout << "Operand-2 : " << this->a2;
        }
};

class addoperation: public operand1, public operand2{ //addoperation class is inheriting from operand1 and operand2
    protected:
        int buff;
    public:
        addoperation(){
            cout << "Add-Operation is running" << endl;
        }
        addoperation(int a, int b, int bu){
            this->a1 = a;
            this->a2 = b;
            this->buff = bu;
        }
        void display(){
            cout << this->a1 <<" + "<< this->a2 <<" + " << this->buff << " = " << (this->a1 + this->a2 + this->buff) << endl;
        }
};


int main(){
    operand1 o(3);
    o.display();

    addoperation a(1,2,3);
    a.display();            //----------> display() of Class addoperation will be called.

    return 0;
}