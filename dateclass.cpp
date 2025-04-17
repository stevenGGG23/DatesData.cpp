// dateclass.cpp 
// A.I Statmenet 

#include "dateclass.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
dateclass::dateclass() {
    month = 1;
    day = 1;
    year = 1970;
}

// Value constructor
dateclass::dateclass(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

// Mutators
void dateclass::SetYear(int y) {
    year = y;
}

void dateclass::SetMonth(int m) {
    month = m;
}

void dateclass::SetDay(int d) {
    day = d;
}

void dateclass::SetDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

// Accessors
int dateclass::GetYear() const {
    return year;
}

int dateclass::GetMonth() const {
    return month;
}

int dateclass::GetDay() const {
    return day;
}

// Other methods
void dateclass::DisplayStandard() const {
    cout << month << "/" << day << "/" << year << endl;
}

void dateclass::DisplayFull() const {
    string monthName;
    string daySuffix;
    
    // Determine month name
    switch(month) {
        case 1: monthName = "January"; break;
        case 2: monthName = "February"; break;
        case 3: monthName = "March"; break;
        case 4: monthName = "April"; break;
        case 5: monthName = "May"; break;
        case 6: monthName = "June"; break;
        case 7: monthName = "July"; break;
        case 8: monthName = "August"; break;
        case 9: monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
        default: monthName = "Unknown"; break;
    }
    
    // Determine day suffix
    if (day == 1 || day == 21 || day == 31) {
        daySuffix = "st";
    } else if (day == 2 || day == 22) {
        daySuffix = "nd";
    } else if (day == 3 || day == 23) {
        daySuffix = "rd";
    } else {
        daySuffix = "th";
    }
    
    cout << monthName << " " << day << daySuffix << ", " << year << endl;
}

bool dateclass::SameDate(const dateclass& otherDate) const {
    return (month == otherDate.month && day == otherDate.day && year == otherDate.year);
}

bool dateclass::PriorTo(const dateclass& otherDate) const {
    if (year < otherDate.year) {
        return true;
    } else if (year == otherDate.year) {
        if (month < otherDate.month) {
            return true;
        } else if (month == otherDate.month) {
            return (day < otherDate.day);
        }
    }
    
    return false;
}