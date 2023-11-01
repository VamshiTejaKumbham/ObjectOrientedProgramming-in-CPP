#include<iostream>
using namespace std;

// -------- Abstraction is done using access specifiers------

class Add{
    private:
        int x,y;
    public:
        Add(int a, int b){
            x = a;
            y = b;
        }
        void display(){
            cout << "x + y = " << x+y;
        }
};

int main(){

    Add a(2,3);
    a.display();
    return 0;
}