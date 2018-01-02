#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        Date();
        int d, m, y;

      //  const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                  //         31, 31, 30, 31, 30, 31};
        int countLeapYears(Date d1);
        int getDifference(Date d1,Date d2);
        int * getDate();

    protected:

    private:
};

#endif // DATE_H
