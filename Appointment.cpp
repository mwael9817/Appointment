#include "Appointment.h"
#include <iostream>

using namespace std;
/*
in this function we just take from user the start time and end time of an appointment
and not allowing him to enter end time before start time
*/
//**************************  c in method **********************************//
istream& operator >> (istream& in, Appointment& a){
        cout<<"\nEnter Appointment Start Time : \n";
        cin >>a.start_time;
        cout<<"\nEnter Appointment End Time : \n";
        cin >>a.end_time;
        for( ;  ; ){
            if (!(a.end_time > a.start_time)){
                cout<<"Invalid Input!!\n";
                cout<<"Enter Appointment End Time Again : \n";
                cin >>a.end_time;
            }else {break;}
        }
        cout<<"--------------------------------------------------\n";
        return cin;
    }
/*
in this function we just print the appointment's first time and end time
*/
//**************************  c out method**********************************//
ostream& operator << (ostream& out, Appointment& a){
        cout<<"Appointment time :-\n";
        cout<<"From "<<a.start_time;
        cout<<" To  "<<a.end_time;
        cout<<"--------------------------------------------------\n";
        return cout;
    }
/*
in this function we just compare if two appointment are at the same time so we just
see if all variables at the first appointment equal to all variables in th other appointment
*/
//**************************  == method**********************************//
bool Appointment::  operator == (Appointment a){
    if ((this->start_time == a.start_time)&&(this->end_time == a.end_time)) {
    return 1;
    }
}
/*
in this function we just compare if two appointment are not at the same time so we just
see if one variable at the first appointment not equal to the parallel variable in th other appointment
*/
//**************************  != method**********************************//
bool Appointment:: operator != (Appointment a){
    if (!((this->start_time == a.start_time)&&(this->end_time == a.end_time))) {
    return 1;
    }
}
/*
in this function we just see that if an appointment start and end before another
*/
//**************************  < method**********************************//
bool Appointment:: operator < (Appointment a){
    if (this ->end_time < a.start_time){
        return 1;
    }
}
/*
in this function we just see that if an appointment start and end after another
*/
//**************************  > method**********************************//
bool Appointment:: operator > (Appointment a){
    if (this->start_time > a.end_time){
        return 1;
    }
}
/*
in this function we just see if an appointment interrupt other appointment
here we see if an appointment starts before another but it ends after the other
start
*/
//**************************  <= method**********************************//
bool Appointment:: operator <= (Appointment a){
    if ((this->start_time < a.start_time)&& ((this ->end_time > a.start_time))){
        return 1;
    }
}
/*
in this function we just see if an appointment interrupt other appointment
here we see if an appointment ends after another but it starts before the other
end
*/
//**************************  >= method**********************************//
bool Appointment:: operator >= (Appointment a){
    if ((this->start_time  >a.start_time)&& (this->start_time < a.end_time) ){
        return 1;
    }
}

