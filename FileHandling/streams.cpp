#include<iostream>
#include<fstream>r
using namespace std;
int main(){
    fstream fileIn;
    fileIn.open("C:/Users/VAMSHI TEJA/I Code Good/CPP/FileHandling/demo.txt", ios::in);
    if(fileIn.is_open()){
        cout << "File Opened";
    }
    else{
        cout << "Failed to open";
    }
    return 0;
}