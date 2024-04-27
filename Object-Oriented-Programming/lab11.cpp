#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string firstName;
    string LastName;
    string SSN;

public:
    // parameterized function
    Employee(string firstName, string LastName, string SSN)
    {
        this->firstName = firstName;
        this->LastName = LastName;
        this->SSN = SSN;
    }
    // setters
    void FN(string firstname)
    {
        this->firstName = firstname;
    }

    void LN(string lastname)
    {
        this->LastName = lastname;
    }
    void s(string ssn)
    {
        this->SSN = ssn;
    }
    // getters
    string getFN()const
    {
        return firstName;
    }
    string getLN()const
    {
        return LastName;
    }
    string gets()const
    {
        return SSN;
    }

    virtual void print()
    {
        cout << "Employee name:" << firstName << " " << LastName << endl
             << "Social Security No: " << SSN << endl;
    }
    virtual double earnings() = 0;
};

class SalariedEmployee : public Employee
{
private:
    double WeeklySalary;

public:
    // parameterized constructor
    SalariedEmployee(string firstName, string LastName, string SSN) : Employee(firstName, LastName, SSN)
    {
        this->WeeklySalary = 0;
    }
    // setters
    void setWSalary(double weeklySalary)
    {
        this->WeeklySalary = weeklySalary;
    }
    // getters
    double getweeksalary()const
    {
        return WeeklySalary;
    }
    void print()
    {
        Employee::print();
        cout << "weeklysalary:" << WeeklySalary << endl;
    }

    double earnings()
    {

        return WeeklySalary;
    }
};

class HourlyEmployee : public Employee
{
private:
    double wage;
    double hour;

public:
    // para,eterized constructor
    HourlyEmployee(string firstName, string LastName, string SSN) : Employee(firstName, LastName, SSN)
    {
        this->wage = 0;
        this->hour = 0;
    }
    // setters
    void setW(double wage)
    {
        this->wage = wage;
    }
    void setH(double hour)
    {
        this->hour = hour;
    }
    // getters
    double gettW()const
    {
        return wage;
    }
    double gettH()const
    {
        return hour;
    }
    void print()
    {
        Employee ::print();
        cout << "WAGES:" << wage << endl;
        cout << "HOURS:" << hour << endl;
    }
    double earnings()
    {
        return hour * wage;
    }
};
class CommissionEmployee : public Employee
{
private:
    double grossSale;
    double CommRate;

public:
    // parametrized constructor
    CommissionEmployee(string firstName, string LastName, string SSN, double grossSale,
                       double CommRate) : Employee(firstName, LastName, SSN)
    {
        this->grossSale = 0;
        this->CommRate = 0;
    }
    // setters
    void setGS(double grossSale)
    {
        this->grossSale = grossSale;
    }
    void setCR(double CommRate)
    {
        this->CommRate = CommRate;
    }
    // getters
    double getGS()const
    {
        return grossSale;
    }

    double getCR()const
    {
        return CommRate;
    }
    void print()
    {
        Employee ::print();
        cout << "GROSS SALE:" << grossSale << endl;
        cout << "COMMISSION RATE:" << CommRate << endl;
    }

    double earnings()
    {
        return grossSale * CommRate;
    }
};

class BasePlusEmployee : public CommissionEmployee
{
private:
    double BaseSalary;

public:
    // parameterized constructor
    BasePlusEmployee(string firstName, string LastName, string SSN, double grossSale,
                     double CommRate) : CommissionEmployee(firstName, LastName, SSN, grossSale, CommRate)
    {
        setGS(grossSale);
        setCR(CommRate);
        this->BaseSalary = 0;
    }
    // setters
    void setBS(double BaseSalary)
    {
        this->BaseSalary = BaseSalary;
    }
    // getters
    double getBS(double BaseSalary)const
    {
        return BaseSalary;
    }
    void print()
    {
        CommissionEmployee ::print();
        cout << "BaseSalary:" << BaseSalary << endl;
    }
    double earnings()
    {
        return CommissionEmployee ::earnings() + BaseSalary;
    }
};

int main()
{
    SalariedEmployee E1("BISMA", "TANVEER", "roll no 49");
    E1.print();
    cout << endl
         << endl;

    HourlyEmployee E2("AYESHA", "ASHRAF", "roll no 01");
    E2.print();
    cout << endl
         << endl;

    CommissionEmployee E3("NAMARAH", "AKRAM", "roll no 42", 3, 5);

    E3.setGS(5);

    E3.setCR(5.7);

    E3.print();
    cout << endl
         << endl;

    BasePlusEmployee E4("LAIBA", "FATIMA", "roll no 28", 9, 5);
    E4.setGS(6);

    E4.setCR(5.9);
    E4.print();

    Employee *ptr[4];
    ptr[0] = new SalariedEmployee("BISMA", "TANVEER", "roll no 49");
    cout << endl
         << endl;

    ptr[1] = new HourlyEmployee("AYESHA", "ASHRAF", "roll no 01");
    cout << endl
         << endl;
    ptr[2] = new CommissionEmployee(E3);
    cout << endl
         << endl;
    ptr[3] = new BasePlusEmployee(E4);
    cout << endl
         << endl;

    for (int i = 0; i < 4; i++)
    {
        ptr[i]->print();
        ptr[i]->earnings();
        cout << "EMPLOYEES 'S EARNINGS: " << ptr[i]->earnings() << endl;
        delete ptr[i];
        cout << endl
             << endl;
    }
    return 0;
}
