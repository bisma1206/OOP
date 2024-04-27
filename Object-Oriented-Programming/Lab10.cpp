#include "iostream"

using namespace std;

class FeetInches
{
private:
    int feet;   // To hold a number of feet
    int inches; // To hold a number of inches

    void simplify()
    {
        if (inches >= 12)
        {
            feet += (inches / 12);
            inches = inches % 12;
        }
        else if (inches < 0)
        {
            feet -= ((abs(inches) / 12) + 1);
            inches = 12 - (abs(inches) % 12);
        }
    }

public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    FeetInches(const FeetInches &right)
    {
        feet = right.feet;
        inches = right.inches;
        simplify();
    }

    // Mutator functions
    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    // Accessor functions
    int getFeet() const
    {
        return feet;
    }

    int getInches() const
    {
        return inches;
    }

    FeetInches operator+(const FeetInches &right)
    {
        FeetInches temp;

        temp.inches = inches + right.inches;
        temp.feet = feet + right.feet;
        temp.simplify();

        return temp;
    }

    FeetInches operator-(const FeetInches &right)
    {
        FeetInches temp;

        temp.inches = inches - right.inches;
        temp.feet = feet - right.feet;
        temp.simplify();

        return temp;
    }

    FeetInches operator*(const FeetInches &right)
    {
        FeetInches temp;

        temp.inches = inches * right.inches;
        temp.feet = feet * right.feet;
        temp.simplify();

        return temp;
    }

    FeetInches operator++()
    {
        ++inches;
        simplify();

        return *this;
    }

    FeetInches operator++(int)
    {
        FeetInches temp(feet, inches);

        inches++;
        simplify();

        return temp;
    }

    FeetInches operator--()
    {
        --inches;
        simplify();

        return *this;
    }

    FeetInches operator--(int)
    {
        FeetInches temp(feet, inches);

        inches--;
        simplify();

        return temp;
    }

    bool operator>(const FeetInches &right)
    {
        bool status;

        if (feet > right.feet)
            status = true;
        else if (feet == right.feet && inches > right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    bool operator<(const FeetInches &right)
    {
        return !(*this > right);
    }

    bool operator>=(const FeetInches &right)
    {
        bool status;

        if (feet >= right.feet)
            status = true;
        else if (feet == right.feet && inches >= right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    bool operator<=(const FeetInches &right)
    {
        return !(*this >= right);
    }

    bool operator==(const FeetInches &right)
    {
        bool status;

        if (feet == right.feet && inches == right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    bool operator!=(const FeetInches &right)
    {
        return !(*this == right);
    }

    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &, FeetInches &);
};

ostream &operator<<(ostream &out, const FeetInches &obj)
{
    out << "Feet = " << obj.feet << "\tInches = " << obj.inches << endl;

    return out;
}

istream &operator>>(istream &in, FeetInches &obj)
{
    cout << "Enter Feet:\t";
    in >> obj.feet;

    cout << "Enter Inches:\t";
    in >> obj.inches;

    return in;
}

class RoomDimension
{
private:
    FeetInches length;
    FeetInches width;

public:
    RoomDimension(FeetInches length, FeetInches width) : length(length), width(width)
    {

        // constructor
    }

    // setters
    void setlength(int feet, int inches)

    {
        length.setFeet(feet);
        length.setInches(inches);
    }

    void setwidth(int feet, int inches)

    {
        width.setFeet(feet);
        width.setInches(inches);
    }

    // getters

    FeetInches getlength()const
    {
        return length;
    }

    FeetInches getwidth()const
    {
        return width;
    }

    FeetInches Area()
    {
        return length * width;
    }

    void display()

    {
        cout << "THE LENGTH IS : " << length << endl;
        cout << "THE WIDTH IS: " << width << endl;
    }
};

class RoomCarpet
{
private:
    RoomDimension roomsize;
    float costPerSquareFoot;

public:
    // setters
    void setroomsize(int lengthfeet, int lengthinches, int widthfeet, int widthinches)
    {
        roomsize.setlength(lengthfeet, lengthinches);
        roomsize.setwidth(widthfeet, widthinches);
    }

    void setCostperSquare(float costpersquareroot)
    {
        this-> costPerSquareFoot=costPerSquareFoot;
    }


    //getters
    RoomDimension getRoomsize()const
    {
        roomsize.getlength();
        roomsize.getwidth();

    }

    float getCostperSquare()const
    {
        return costPerSquareFoot;
    }


    RoomCarpet(RoomDimension roomsize, float costperSquareFoot) : roomsize(roomsize)
    {
        this-> costPerSquareFoot=costPerSquareFoot;
    }

    float TotalCost()
    {
        return (costPerSquareFoot*roomsize.getlength().getFeet()*roomsize.getwidth().getFeet());
        
    }

    // static float TotalCost(RoomDimension roomsize, float costpersquareFoot)
    // {
    //     return costPerSquareFoot*(roomsize.getlength().getFeet()*roomsize.getwidth().getFeet());
        
    // }
    

    void display()
    {
        roomsize.display();
        cout << "THE costpersquareFoot is : " << costPerSquareFoot << endl;
    }

    

};

int main()
{
    FeetInches o4(6,7),o5(4,8);
    RoomDimension o1(o4,o5);
    cout << "After simplify:" << endl;
    cout << o1.Area() << endl;
    RoomCarpet C(o1,9);
    o1.display();

    FeetInches L;
    FeetInches W;
    float c;
    cout << "Enter Len of room 1st : "<< endl;
    cin>>L;

    cout << "Enter width of room 1st : " << endl;
    cin>>W;
   
    cout << "Enter cost of room : " << endl;
    cin >> c;

   RoomDimension user(L,W);

//    cout << RoomCarpet :: TotalCost(user,c);
//     carpet.display();

    return 0;
}