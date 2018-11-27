#include <iostream>
#include "Time.h"
#include "Appointment.h"
#include "DayAppointments.h"
#include "Calender.h"
using namespace std;

using namespace std;
/*
this function that just print the menu for user
*/
void Calender:: menu (){
    cout <<"My Beautiful list\n";
    cout <<"--------------------\n";
    cout <<"1- Insert an appointment for one day.\n2- Insert some same appointments for many days.\n";
    cout <<"3- Display appointments for a day.\n4- Display appointments for a week.\n";
    cout <<"5- Delete an appointment.\n6- Make the appointments of a day equal to another.\n";
    cout <<"7- Check if two days have equal appointments.\n8-Exit.\n";
    cout << "-------------------------\n";
    cout << "Please enter a number:-";

}
