#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "Time.h"
#include <iostream>

using namespace std;

class Appointment
{
    public:
        friend istream& operator >> (istream& in, Appointment& a);
        friend ostream& operator << (ostream& out, Appointment& a) ;
        bool operator == (Appointment a) ;
        bool operator != (Appointment a);
        bool operator < (Appointment a);
        bool operator > (Appointment a);
        bool operator <= (Appointment a);
        bool operator >= (Appointment a);

        private:
        Time start_time;
        Time end_time;
};

#endif // APPOINTMENT_H
