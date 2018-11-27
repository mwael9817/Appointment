#ifndef CALENDER_H
#define CALENDER_H
#include "Time.h"
#include "Appointment.h"
#include"DayAppointments.h"
#include <iostream>

using namespace std;

class Calender
{
    public:
        Calender (){
            int numOfDays = 7;
            this-> numOfDays = numOfDays;
            days = new DayAppointments  [ numOfDays];
        }
        void menu ();

    private:
        DayAppointments* days;
        int numOfDays;
};

#endif // CALENDER_H
