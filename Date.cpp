#include "Date.h"
#include <bits/stdc++.h>
using namespace std;

Date::Date()
{
    //ctor
}

int Date::countLeapYears(Date d)
{
    const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31};
    int years = d.y;

    // Check if the current year needs to be considered
    // for the count of leap years or not
    if (d.m <= 2)
        years--;

    // An year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    return years / 4 - years / 100 + years / 400;
}

int Date::getDifference(Date dt1, Date dt2)
{
    // COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1'

    const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31};
    // initialize count using years and day
    long int n1 = dt1.y*365 + dt1.d;

    // Add days for months in given date
    for (int i=0; i<dt1.m - 1; i++)
        n1 += monthDays[i];

    // Since every leap year is of 366 days,
    // Add a day for every leap year
    n1 += countLeapYears(dt1);

    // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'

    long int n2 = dt2.y*365 + dt2.d;
    for (int i=0; i<dt2.m - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);

    // return difference between two counts
    return (n2 - n1);
}

int* Date::getDate(){
    int ci[3];
    const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31};
    cout <<"Enter Day:";
    cin >>d;
    if(d<0)
        cout<<"Enter valid date";
        cin >>d;
    cout <<"Enter Month:";
    cin >>m;
    if(m<0||m>12){
        cout<<"Enter valid month";
        cin>>m;
        if(d>monthDays[m]){
            cout<<"Enter valid date";
            cin>>d;
        }
    }

    cout <<"Enter Year:";
    cin >>y;
    if(y/2000<1){
        cout<<"Enter valid Year";
        cin >> y;
    }
    ci[0]=d;
    ci[1]=m;
    ci[2]=y;
    return ci;
    }
