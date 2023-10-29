#include<iostream>
using namespace std;

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