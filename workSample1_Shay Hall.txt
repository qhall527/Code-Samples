// // Name: Shay Hall
//Source File: Chap5Project.cpp
//Description: This program takes the input of a date and outputs the day of the week that corresponds to that date.
//IDE: Visual Studio 

#include <iostream>
using namespace std;

int year;


// determines if year given is a leap year
bool isLeapYear(int year)

{
    if (year % 400 == 0)
        return true;
    if (year % 4 == 0)
        return true;
    else
        return false;
}

// determines century of year 

int getCenturyValue(int& year)
{
    int century;

    century = (year / 100);

    century = (century % 4);

    century = (3 - century);
    
    century = (century * 2);

    return century;
}

// determines last two digits of year

int getYearValue(int& year)
{
    int lastDigits;
    int lastDigits2;

    lastDigits = (year % 100);
    lastDigits2 = (lastDigits / 4);
    lastDigits = lastDigits + lastDigits2;
    return lastDigits;
}

// returns value based on if year is a leap year

int getMonthValue(int month, int year)
{
    switch (month) {
    case 1: 
        if (isLeapYear(year)) return 6;
        else return 0;
        break;
    case 2: 
        if (isLeapYear(year)) return 2;
        else return 3;
        break;
    case 3: 
        return 3;
        break;
    case 4:
        return 6;
        break;
    case 5: 
        return 1;
        break;
    case 6:
        return 4;
        break;
    case 7:
        return 6;
        break;
    case 8:
        return 2;
        break;
    case 9:
        return 5;
        break;
    case 10:
        return 0;
        break;
    case 11:
        return 3;
        break;
    case 12: 
        return 5;
        break;
    }
}


// gets date from user

void getInput(int& month, int& day, int& year)
{
    char ch; //in place to take "/" character between date input
    cout << "Enter a date (mm/dd/yyyy): ";
    cin >> month >> ch >> day >> ch >> year;
}


int main()
{
    int dayOfWeek;
    int month, day, year;

    getInput(month, day, year);
    isLeapYear(year);
    getMonthValue(month, year);
    getCenturyValue(year);
    getYearValue(year);

    dayOfWeek = ((day)+(getMonthValue(month, year)) + (getYearValue(year)) + (getCenturyValue(year))) % 7;


    // determines the day of the week based on the value calculated
    {
        switch (dayOfWeek) {
        case 0:
            cout << "The day of the week is Sunday"<< endl;
            break;
        case 1:
            cout << "The day of the week is Monday" << endl;
            break;
        case 2:
            cout << "The day of the week is Tuesday" << endl;
            break;
        case 3:
            cout << "The day of the week is Wednesday" << endl;
            break;
        case 4:
            cout << "The day of the week is Thursday" << endl;
            break;
        case 5:
            cout << "The day of the week is Friday" << endl;
            break;
        case 6:
            cout << "The day of the week is Saturday" << endl;
            break;
        }
    }
}

