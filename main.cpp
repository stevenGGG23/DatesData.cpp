// main.cpp 
// A.I Statement 

#include "dateclass.h"
#include <iostream>
using namespace std;

int main() {
    // Default constructor
    dateclass firstDate;

    // Value constructor
    dateclass secondDate(3, 15, 2017);

    // Change the date of the first object
    firstDate.SetDate(4, 17, 2018);

    // Set the year of the secondDate to 2019
    secondDate.SetYear(2019);

    // Set the month to 7
    secondDate.SetMonth(7);

    // Display output  
    cout <<endl; 
    cout << "First date: "; 
    firstDate.DisplayStandard(); 
    cout << endl; 

    // Now this shows the updated month (should be 7)
    cout << "Month of second date: " << secondDate.GetMonth() << endl; 
    cout << endl; 

    // Output of second date
    cout << "Second date (standard format): "; 
    secondDate.DisplayStandard();
    cout << endl; 
  
    // Output full format
    cout << "Second date (full format): "; 
    secondDate.DisplayFull(); 
    cout << endl; 

    // Compare dates
    if (firstDate.SameDate(secondDate)) {
        cout << "They are both same date" << endl; 
        cout << endl; 
    } else {
        cout << "They are both different dates" << endl; 
        cout << endl; 
    }

    // Check if firstDate is prior to secondDate
    if (firstDate.PriorTo(secondDate)) {
        cout << "First date is prior to the second date" << endl;
    } else {
        cout << "First date is not prior to the second date" << endl;
    }

    return 0;
}
