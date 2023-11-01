#include<iostream>
using namespace std;

class Vehicle{
    protected:
        string cat;
    public:
       Vehicle(){
         cout << "Model to render - Vehicle" << endl;
       }
       Vehicle(string cat){
        this->cat = cat ;
       }
       void setCat(string cate ){
        this->cat = cat;
       }
       string getCat(){
        return cat;
       }
       void display(){
        cout << "Category - " << cat << endl;
       }

};

class Car: public Vehicle{
    protected:
        int gears, yom;
        string model;
    public:
        Car(){
             cout << "Car is being rendered" << endl;
        }
        Car(string ca, string mod,int y,int g){
            this->gears = g;
            this->yom = y;
            this->model = mod;
            this->cat = ca;
        }
        void setGears(int ge){
            this->gears = ge;
        }
        int getGears(){
            return this->gears;
        }
        void setYom(int yo){
            this->yom = yo;
        }
        int getYom(){
            return this->yom;
        }
        void setModel(string mo){
            this->model = mo;
        }
        string getModel(){
           return this->model;
        }
        void display(){
            cout << "Category - " << this->cat << ", Model - " << this->model << ", Year of Make" << this->yom << ", Number Of Gears - " << this->gears << endl;
        }
};

// Only Car Class is inheriting the properties of Vehicle Class ----> SINGLE INHERITANCE

int main(){
    
    // Vehicle v("Car");
    // v.display();

    Car c("Car","Dodge Chlngr", 1996,6);
    c.display();

    return 0;
    
}