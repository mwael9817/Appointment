#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include "Time.h"
#include "Appointment.h"
#include <iostream>

using namespace std;


class DayAppointments
{
    public:
        DayAppointments (){
        numOfAppointments = 0;
        weekDay = 0;
        }
        ~DayAppointments (){
        delete app;
        }
        int knowday();
        void copyappoinments (DayAppointments dayd);
        Appointment operator [](int x);
        friend istream& operator >> (istream& in, DayAppointments& d);
        friend ostream& operator << (ostream& out, DayAppointments& d);
        void operator = (DayAppointments d);
        bool operator == (DayAppointments d);
        bool operator != (DayAppointments d);
        void deleteappointments();
    private:
        Appointment* app;
        int numOfAppointments;
        int weekDay;

};

#endif // DAYAPPOINTMENTS_H
