#include "DayAppointments.h"
#include <iostream>

using namespace std;
/*
in this function we just see transport the content in the pointer to the
array
*/
//**************************  [] method **********************************//
Appointment DayAppointments:: operator [](int x) {
    DayAppointments day;
    app[x] = *(app+x);
    return app[x];
}
/*
in this function take from user the number of day based on the list that showed
to him and also take number appointment based on the number that user entered
*/
//**************************  c in method **********************************//
istream& operator >> (istream& in, DayAppointments& d){
    cout <<"1- Saturday.\t2- Sunday.\n3- Monday.\t4- Tuesday.\n5- Wednesday.\t6- Thursday.\n";
    cout <<"          7- Friday.\n";
    cout <<"Enter Week Day Number :- ";
    cin  >>d.weekDay;
    for ( ; ; ){
        if (d.weekDay>7||d.weekDay<1){
            cout <<"---------------";
            cout <<"|Invalid Input| \n";
            cout <<"Enter Week Day Number :- ";
            cin  >>d.weekDay;
        }else break;
    }
    cout <<"\nEnter Number Of Appointments : ";
    cin  >>d.numOfAppointments;
    d.app = new Appointment[d.numOfAppointments];
    int bookedappointments[d.numOfAppointments];
    for(int i = 0; i < d.numOfAppointments ; i++){
        cout <<"Enter Appointment "<< i+1<<" :\n";
        cout <<"-------------------------------------------\n";
        cin  >>d.app[i];
        for (int j=(i-1); j >= 0  ; j--){
            if ((d.app[i]==d.app[j]) || (d.app[i] >= d.app[j]) || (d.app[i]<=d.app[j])){
                cout <<"Invalid Input;\nYou Have Entered Two appointment at the same time\n";
                cout <<"Please, Enter the appointment "<< i+1 <<" in other time";
                cin  >>d.app[i];
            }else break;
        }
        bookedappointments [i] = i ;
     }
     return cin;
    }
/*
in this function we just print the appointments of one day
*/
//**************************  c out method **********************************//
ostream& operator << (ostream& out, DayAppointments& d){
    if(d.weekDay==1){
        cout <<"Saturday";
    }else if(d.weekDay==2){
        cout <<"Sunday";
    }else if(d.weekDay==3){
        cout <<"Monday";
    }else if(d.weekDay==4){
        cout <<"Tuesday";
    }else if(d.weekDay==5){
        cout <<"Wednesday";
    }else if(d.weekDay==6){
        cout <<"Thursday";
    }else if(d.weekDay==7){
        cout <<"Friday";
    }
    cout<<":\n----------\n";
    for(int i=0; i < d.numOfAppointments ; i++){
        cout <<d.app[i];
    }
    return cout;
}
/*
in this function we just equal two appointments
*/
//**************************  = method **********************************//
void DayAppointments::operator = (DayAppointments d){
    this->numOfAppointments = d.numOfAppointments;
    for (int i=0; i<this->numOfAppointments ; i++){
        this->app = d.app;
    }
}
/*
in this function we see if two days have the same appointments
*/
//**************************  == method **********************************//
bool DayAppointments:: operator == (DayAppointments d){
    if (this ->numOfAppointments == d.numOfAppointments){
        for (int i=0 ; i<this->numOfAppointments ;i++){
            if (this ->app[i] == d.app[i]){
                if (i == (numOfAppointments-1)){
                    return 1;
                    break;
                }
            }else return 0;
        }
    }else return 0;
}
/*
in this function we see id two days have different appointments
*/
//**************************  != method **********************************//
bool DayAppointments:: operator != (DayAppointments d){
    if (this ->numOfAppointments == d.numOfAppointments ){
        for (int i=0 ; i<this->numOfAppointments ;i++){
            if (this ->app[i] == d.app[i]){
                if (i == (numOfAppointments-1)){
                    return 0;
                }
            }else return 1;
        }

    }else return 1;
}
//*****************************                *****************************//
void DayAppointments:: deleteappointments(){
    delete this->app;
}
int DayAppointments:: knowday(){
        int nameofday = this-> weekDay;
        return nameofday;
    }
//*************** ****************
    void DayAppointments:: copyappoinments (DayAppointments dayd){
        this-> app = dayd.app;
    }
