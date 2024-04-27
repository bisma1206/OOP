// BITF21M549
// BISMA TANVEER MIRZA
// LAB 07

#include "iostream"
#include "string"
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    // default constructor

    Date()
    {
        day = 1;
        month = 1;
        year = 1900;
    }
    // constructor

    Date(int day, int month, int year)
    {
        setD(day);
        setM(month);
        setY(year);
    }

    // constructor 02

    Date(int month, int year)
    {

        setM(month);
        setY(year);
        day = 1;
    }

    // Mutators

    void setD(int D)
    {
        if (D >= 1 && D <= 31)
        {
            day = D;
        }
        else
        {
            day = 1;
        }
    }
    void setM(int M)
    {
        if (M >= 1 && M <= 12)
        {
            month = M;
        }
        else
        {
            month = 1;
        }
    }
    void setY(int Y)
    {
        if (Y >= 1900)
        {
            year = Y;
        }
        else
        {
            year = 1900;
        }
    }

    // Accessors

    int getd()
    {
        return day;
    }
    int getm()
    {
        return month;
    }
    int gety()
    {
        return year;
    }

    // operator overloding

    // overload stream-insertion operator

    friend ostream &operator<<(ostream &print, const Date &obj);

    // overload stream-extraction operator

    friend istream &operator>>(istream &in, Date &obj);

    // Pre-increment ++

    Date operator++()
    {
        if (day == 31 && month == 12)
        {
            day = 1;
            month = 1;
            year++;
        }
        else if (day == 31)
        {
            day = 1;
            month++;
        }
        else
        {
            ++day;
        }

        return *this;
    }

    // Post-increment ++

    Date operator++(int)
    {
        Date temp(*this);
        if (day == 31 && month == 12)
        {
            day = 1;
            month = 1;
            year++;
        }
        else if (day == 31)
        {
            day = 1;
            month++;
        }
        else
        {
            day++;
        }

        return temp;
    }
    // Pre-decrement --
    Date operator--()
    {
        if (day == 1 && month == 1)
        {
            day = 31;
            month = 12;
            year--;
        }
        else if (day == 1)
        {
            day = 31;
            month--;
        }
        else
        {
            --day;
        }

        return *this;
    }

    // Post-decrement --
    Date operator--(int)
    {
        Date temp(*this);

        if (day == 1 && month == 1)
        {
            day = 31;
            month = 12;
            year--;
        }
        else if (day == 1)
        {
            day = 31;
            month--;
        }
        else
        {
            --day;
        }
        return temp;
    }

    // subtraction operator
    int operator-(Date &obj)
    {
        Date temp;
        temp.day = day - obj.day;
        temp.day = day - obj.month;
        temp.day = day - obj.year;
        return temp.day;
    }

    //Addition operator

    bool operator+()
    {
        return ((day==5 && month==2) || (day==2 && month==3) || (day==1 && month==5));
    }
};
// overload stream-insertion operator

ostream &operator<<(ostream &print, const Date &obj)

{
    string Months;

    if (obj.month == 1)
    {
        Months = "JANUARY";
    }
    else if (obj.month == 2)
    {
        Months = "FEBURARY";
    }
    else if (obj.month == 3)
    {
        Months = "MARCH";
    }
    else if (obj.month == 4)
    {
        Months = "APRIL";
    }
    else if (obj.month == 5)
    {
        Months = "MAY";
    }
    else if (obj.month == 6)
    {
        Months = "JUNE";
    }
    else if (obj.month == 7)
    {
        Months = "JULY";
    }
    else if (obj.month == 8)
    {
        Months = "AUGUST";
    }
    else if (obj.month == 9)
    {
        Months = "SEPTEMBER";
    }
    else if (obj.month == 10)
    {
        Months = "OCTOBER";
    }
    else if (obj.month == 11)
    {
        Months = "NOVEMBER";
    }
    else
    {
        Months = "DECEMBER";
    }

    print << Months << " " << obj.day << " , " << obj.year << endl;

    return print;
}

// overload stream-insertion operator

istream &operator>>(istream &in, Date &obj)
{
    cout << "Day : ";
    in >> obj.day;
    cout << "Month : ";
    in >> obj.month;
    cout << "year : ";
    in >> obj.year;
    obj.setD(obj.day);
    obj.setM(obj.month);
    obj.setY(obj.year);
    return in;
}
int main()
{
    Date obj(29, 5, 2005);
    cout << obj;
    ++obj;
    cout<< "INCREMENT DATE IS : " << obj;
    cout<<endl;
    Date obj1(12, 06, 2009);
    cout<< obj1++;
    cout<< "INCREMENT DATE IS : " << obj1;
    cout<<endl;


    return 0;
}