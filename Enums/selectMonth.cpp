// You are using GCC
#include<iostream>
#include<string>
using namespace std;
struct Time{
    char StartTime[8];
    char FinishTime[8];
};
int main(){
    struct Time T;
    cin >> T.StartTime;
    cin >> T.FinishTime;
    int i;
    int SHH[2],SMM[2],SSS[2];
    int EHH[2],EMM[2],ESS[2];
    int SH,SM,SS;
    int EH,EM,ES;
    
    for(i=0;i<8;i++){
        if(i==0){
            SHH[i]=(int)(T.StartTime[i]);
        }
        else if(i==1){
            SHH[i]=(int)(T.StartTime[i]);
        }
        else if(i==3){
            SMM[i]=(int)(T.StartTime[i]);
        }
        else if(i==4){
            SMM[i]=(int)(T.StartTime[i]);
        }
        else if(i==6){
            SSS[i]=(int)(T.StartTime[i]);
        }
        else if(i==7){
            SSS[i]=(int)(T.StartTime[i]);
        }
    }
    for(i=0;i<8;i++){
        if(i==0){
            EHH[i]=(int)(T.FinishTime[i]);
        }
        else if(i==1){
            EHH[i]=(int)(T.FinishTime[i]);
        }
        else if(i==3){
            EMM[i]=(int)(T.FinishTime[i]);
        }
        else if(i==4){
            EMM[i]=(int)(T.FinishTime[i]);
        }
        else if(i==6){
            ESS[i]=(int)(T.FinishTime[i]);
        }
        else if(i==7){
            ESS[i]=(int)(T.FinishTime[i]);
        }
    }
   SH=(SHH[0]*10)+SHH[1];
   SM=(SMM[3]*10)+SMM[4];
   SS=(SSS[6]*10)+SSS[7];
   
   EH=(EHH[0]*10)+EHH[1];
   EM=(EMM[3]*10)+EMM[4];
   ES=(ESS[6]*10)+ESS[7];
        
    cout << (SH-EH) << ":" << (SM-EM) << ":" << (SS-ES);
    return 0;
}
