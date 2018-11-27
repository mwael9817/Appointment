#include <iostream>
#ifndef TIME_H
#define TIME_H
 using namespace std;

class Time
{
    public:
       Time (){
        this->hour = 0;
        this->minute = 0;
        this->daynight = 0;
    }
   Time (int hour, int minute, int daynight){
        this-> hour=hour;
        this-> minute=minute;
        this-> daynight=daynight;
    }
//************************** c in method **********************************//
    friend istream& operator >> (istream& in,Time &t) ;


//************************** c out method **********************************//

    friend ostream& operator<<(ostream& out, Time t)  ;

//************************** == method **********************************//
 bool operator == (Time t) ;
//**************************  ÞÈá < method **********************************//
 bool operator < (Time t) ;
//**************************  ÈÚÏ > method **********************************//
 bool operator > (Time t) ;
//**************************  != method **********************************//
 bool operator != (Time t) ;



    private:
        int hour;
        int minute;
        int daynight;


};


#endif // TIME_H
