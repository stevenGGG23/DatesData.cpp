// dateclass.h
// A.I Statement

#ifndef DATECLASS_H
#define DATECLASS_H

class dateclass {
private:
    int month;  
    int day;    
    int year;  

public:
    // Constructors
    dateclass();                       
    dateclass(int m, int d, int y);

    // Mutators
    void SetYear(int y);
    void SetMonth(int m);
    void SetDay(int d);
    void SetDate(int m, int d, int y);

    // Accessors
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

    // Other methods
    void DisplayStandard() const;
    void DisplayFull() const;
    bool SameDate(const dateclass& otherDate) const;
    bool PriorTo(const dateclass& otherDate) const;
};

#endif
