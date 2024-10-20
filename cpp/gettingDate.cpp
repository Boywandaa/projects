#include <iostream>
#include <cstring>
// #define print(x) std::cout << x << std:: endl;
using namespace std;

string getMonth();
int main() {
    //cout << time(0) << endl;
   
    int secondsInYear = 365 * 24 * 60 * 60;
    int years = time(0)/secondsInYear;

    
    int remainingSeconds = time(0)%secondsInYear;
    //cout << remainingSeconds << endl;

    int days = remainingSeconds/(24*60*60);
    //cout << "number of days are : " << days << endl;
     remainingSeconds %=(24*60*60);

     //cout << remainingSeconds << endl;

      int month = days/30;
      //cout << "month number is : " << month << endl;

    
    
     int remainingDays = days%30;
     //cout <<  "remaining days : " << remainingDays << endl;

    int hours = remainingSeconds/(60*60);
    remainingSeconds %= (60*60);
    //cout << remainingSeconds << endl;

    int minutes = remainingSeconds/(60);
    remainingSeconds %= 60;
    //cout << remainingSeconds << endl;


    cout << "Current date is  " << remainingDays << " " << getMonth() << " " << 1970 + years << " " << hours << ":" << minutes << ":" << remainingSeconds;


    
    return 0;
    
}
 string getMonth() {
    int secondsInYear = 365 * 24 * 60 * 60;
    int years = time(0)/secondsInYear;

    
    int remainingSeconds = time(0)%secondsInYear;
    

    int days = remainingSeconds/(24*60*60);
    
    int month = days/30;
    string nameOfMonth;
    switch (month) {
     
        case 1:
         nameOfMonth =  "January"; 
         break;
        case 2:
         nameOfMonth ="February";
         break;
        case 3:
         nameOfMonth = "March";
        break;
        case 4:
        nameOfMonth = "April";
        break;
        case 5:
          nameOfMonth = "May";
          break;
        case 6:
         nameOfMonth = "June";
         break;
         case 7:
        nameOfMonth = "July";
        break;
        case 8:
          nameOfMonth ="August";
          break;
        case 9:
          nameOfMonth = "September";
          break;
        case 10:
         nameOfMonth = "October";
         break;
        case 11:
          nameOfMonth = "November";
          break;
        case 12:
         nameOfMonth= "December";
         break;
        // default:
        //  nameOfMonth = "error";
        // break;
     }

     return nameOfMonth;
    



}