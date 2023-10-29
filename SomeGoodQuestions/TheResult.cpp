#include<iostream>
#include<ctime>
using namespace std;
struct Time{
    int Start[3],Finish[3];
};
int main(){
    time_t one_hour_from_now = time(0) + 3600;
    
    char* dt = ctime(&one_hour_from_now);
 
    
    std::cout << "One hour from now, the date and time will be: " << dt << std::endl;
 
}