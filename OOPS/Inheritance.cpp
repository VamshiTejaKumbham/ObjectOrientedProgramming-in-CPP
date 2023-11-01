#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void setPersonDetails(){
            cout << "Enter the Name of the person : ";
            cin >> name;
            cout << "Enter the Age: ";
            cin >> age;
        }

        void display(){
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

class Student : private Person{   // --- Student is privatelty Inheriting Person; if the access modifier is not specified
    private:                      //     then private access modifier is taken as the default modifier.
        int id;
        float fee;
    public:
        void setStudentdetails(){
            setPersonDetails();
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Fee: ";
            cin >> fee;
        }

        void dis(){
            display();
            cout << "Student Id : " << id << endl << "Fee: " << fee;
        }

};


int main(){

    Student s1;
    s1.setStudentdetails();
    s1.dis();
    return 0;
}