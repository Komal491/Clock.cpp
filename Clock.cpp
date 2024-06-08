#include<iostream>
#include<windows.h>
using namespace std;
int main(){

    int hour, min, second, a, err;
    err=a=0;
    while(err==0){
        cout<<"Enter hour: "<<endl;
        cin>>hour;
        cout<<"Enter minute: "<<endl;
        cin>>min;
        cout<<"Enter second: "<<endl;
        cin>>second;
        if(hour<24 && min<60 && second<60){
            err++;
        }
        else{
            system("cls");
        }
    }
    while(a==0){
        system("cls");
        cout<<hour<<":"<<min<<":"<<second<<endl;
        Sleep(1000);
        second++;
        if(second>59){
            second=0;
            min++;
        }
        if(min>59){
            min = 0;
            hour++;
        }
        if(hour>24){
            hour=0;
        }
    }

    return 0;
}