#include <iostream>
#include "Date.h"

#define MONTHS_AMOUNT 12
#define GREGORIAN_CREATED 1582

void Date::validate(int day, int month, int year) {
    int indexMonth = month - 1;
    int daysInMonth[MONTHS_AMOUNT] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    enum months {january, february, march, april, may, june, july, august, september, october};
    
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
        daysInMonth[february] += 1;
    }

    if (  year < GREGORIAN_CREATED ) {
        throw new InvalidDate("Inccorect Year");
    }
    if ( month > MONTHS_AMOUNT || month <= 0 ) {
        throw new InvalidDate("Incorrect Month");
    }
    if ( day > daysInMonth[indexMonth] || day <= 0) {
        throw new InvalidDate("Incorrect Day");
    }
}


Date::Date(int day, int month, int year) {
    this->validate(day, month, year);
    
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {};

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << "." << date.getMonth() << "." << date.getYear();
    
    return out;
}
