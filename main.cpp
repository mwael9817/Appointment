#include <iostream>
#include "Time.h"
#include "Appointment.h"
#include "DayAppointments.h"
#include "Calender.h"
using namespace std;



int main()
{
    int choice, gout, a3ddalayam ,youm, x = 0,a ,b;
    Calender week;
    DayAppointments day [7];
    DayAppointments tempday;
    cout <<"\t\t\t\t\t Ahlan Ya user ya habibi\n";
    cout <<"\t\t\t\t\t-------------------------\n";
    week.menu();
    cin >>choice;
    for (;(choice <= 0 ||choice >=9);){
        cout << "Invalid Input\n";
        cout << "Please enter a number again:-";
        cin  >> choice;
    }
    for ( ; ; ){
        if (choice == 1){
            cin  >> tempday;
            day[tempday.knowday()-1] = tempday;
        }
        if (choice == 2){
            cin >> tempday;
            cout <<"How many days you want to copy appointment to:- ";
            cin >>a3ddalayam;
            day[tempday.knowday()-1] = tempday;
            for (int i = 0;i < a3ddalayam;i++ ){
                cout <<"Enter number of day "<< i+1<<" :";
                cin >>youm;
                day[youm -1] = tempday;
            }
        }
        if (choice == 3){
            cout <<"Enter number of day :";
            cin >>youm;
            cout <<day[youm-1];
        }

        if (choice == 4){
            cout <<"Week Appointments :-\n"<<"--------------------\n";
            for (int y=0; y<7; y++){
                if((y+1) ==1){
                    cout <<"Saturday";
                }else if((y+1) ==2){
                    cout <<"Sunday";
                }else if((y+1) ==3){
                    cout <<"Monday";
                }else if((y+1) ==4){
                    cout <<"Tuesday";
                }else if((y+1) ==5){
                    cout <<"Wednesday";
                }else if((y+1) ==6){
                    cout <<"Thursday";
                }else if((y+1) ==7){
                    cout <<"Friday";
                }
            cout <<day[y];
            }
        }

        if (choice == 5){
            cout <<"Enter number of day you want to delete :";
            cin >>youm;
            tempday = day[youm-1];
            tempday.deleteappointments();
            day[youm-1] = tempday;
        }

        if (choice == 6){
            cout << "Enter two numbers of days you want to equal the second has the content:";
            cin >>a >>b;
            day[a-1] =day[b-1];
        }

        if (choice == 7){
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 7; j++){
                    if (i!=j){
                        if (day[i] == day[j]){
                            cout<<"Day "<<i+1<<" equal Day "<<j+1<<endl;
                            x = 1;
                        }
                    }
                }
            }
            if (x == 0){
                cout<<"No Days are equal.\n";
            }
        }

        if (choice == 8){return 0;}
        cout <<"Do You Want to exit?\n1- Yes!\t2- No!\n";
        cin  >>gout;
        for (;gout>2||gout<1;){
            cout <<"Invalid Input!!\nPlease enter again:-";
            cin  >>gout;
        }
        if (gout == 1){return 0;
        }
        week.menu ();
        cin >>choice;
        for (;(choice <= 0 ||choice >=9);){
            cout << "Invalid Input\n";
            cout << "Please enter a number again:-";
            cin  >> choice;
        }
    }
    return 0;
}
