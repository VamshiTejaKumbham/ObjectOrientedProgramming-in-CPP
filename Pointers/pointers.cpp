#include<iostream>
using namespace std;
void print(void* ptr, char ch);
void print(void* ptr, char ch){
    if(ch =='x') cout << *((int*)ptr) << endl;
    else if(ch =='y') cout << *((char*)ptr) << endl;
    else if(ch =='z') cout << (int*)((char*)ptr) << endl;
    // else if(ch =='z') cout << (int)*((char*)ptr) << endl;
    else cout << "Invalid";
}
int main(){
    int number=10;
    char alpha1 = 'x';
    char alpha2 = 'y';
    char alpha3 = 'z';
    print(&number,alpha1);
    print(&alpha1,alpha2);
    print(&alpha3,alpha3);

}