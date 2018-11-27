#include "Time.h"
#include <iostream>

using namespace std;


//************************** c in method **********************************//
////////////////////////////// comment ////////////////////////////////////
/*
this function takes two parameters istream &Time object this function take time from user as hours & minute & day night and also has a diffence
a for loop that privent user from entering a hour greater than 12 and minute greater than 59 and entering some thing except am or pm
*/
 istream &operator >> (istream& in,Time &t){
    cout << "Enter hour: ";
    cin >> t.hour;

    for ( ; ; ){
        if (t.hour >12 || t.hour <=0){
            cout<<"Invalid Input !!\nPlease Enter Hour again : ";
            cin >>t.hour;
        }else break;
    }

    cout<<"Enter Minute : ";
    cin >> t.minute;

    for ( ;; ){
        if (t.minute >=60 || t.minute <0){
            cout<<"Invalid Input !!\nPlease Enter Minute again : ";
            cin >>t.minute;
        }else break;
    }
    cout <<"Enter 1- AM \t2- PM : ";
    cin >> t.daynight;
    for ( ; ; ){
        if ((t.daynight >2)||(t.daynight <1)){
            cout<<"Invalid Input !!\nPlease Enter Am or PM again : ";
            cin >>t.daynight;
        }else break;
    }



cout<<"--------------------------------------------------\n";

    return cin ;
}
/*
this function just print all variables in class Time except daynight it see if it's 1 print AM
if it's 2 print PM
*/
//************************** c out method **********************************//

ostream& operator<<(ostream& out, Time t){
    cout<<"Time ==> "<<t.hour<<" : "<<t.minute;
    if (t.daynight==2){
        cout<<" PM";
    }else if(t.daynight==1) {cout<<" AM";}
    cout<<endl;

    return cout ;
}
/*
In this function we just see if all variables in the first class equal to all variables in the second class
*/
//************************** == method **********************************//
 bool Time :: operator == (Time t){
    if ((this->hour==t.hour)&& (this->minute==t.minute)&& (this->daynight == t.daynight)){

    }
    return 1;
}
/*
In this function it seems that we just compare two time which is smaller, here (<) doesn't mean which one is
smaller it means which one happened first so i compare first between AM or PM if it's AM so it happens before
the other if no so it's not but if the both time are AM or PM we see hours if < or not but if hours is = we see
minute
*/
//**************************  ÞÈá < method **********************************//
 bool Time :: operator < (Time t){
    if (this-> daynight == t.daynight ){
        if (this->hour == t.hour ){
            if (this-> minute < t.minute){
                return 1;
            }
        }

        if (this->hour < t.hour ){
            return 1;
        }

    }else if(this->daynight < t.daynight){
        return 1;
    }
}
/*
In this function it seems that we just compare two time which is bigger, here (>) doesn't mean which one is
bigger it means which one happened second so i compare first between AM or PM if it's PM so it happens after
the other if no so it's not but if the both time are AM or PM we see hours if > or not but if hours is = we see
minute */
//**************************  ÈÚÏ > method **********************************//
 bool Time :: operator > (Time t){
    if(this->daynight > t.daynight){
        return 1;
    }else if (this-> daynight == t.daynight ){
        if (this->hour > t.hour ){
            return 1;
        }
        else if (this->hour == t.hour ){
            if (this-> minute > t.minute){
                return 1;
            }
        }
    }else return 0;
}
/*
In this function we just see if one variable in the first class not equal to the parallel one in the
other class
*/
//**************************  != method **********************************//
 bool Time :: operator != (Time t){
    if (!((this->hour==t.hour)&& (this->minute==t.minute)&& (this->daynight == t.daynight))){

    }
    return 1;
}



