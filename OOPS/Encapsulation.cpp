#include<iostream>
using namespace std;

// Bundling of Data members and Function in a Class.
// --------------------------------------
class Circle{
    public:
        float radius;
        Circle(float r){
            radius = r;
        }

        float getArea(){
            return 3.14*radius*radius;
        }
};
// ---------------------------------------

int main(){
    Circle c(2.5);
    float res = c.getArea();
    cout << res;
    
    return 0;
}