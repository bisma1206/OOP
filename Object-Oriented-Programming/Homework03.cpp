// HOME WORK 03
// BITF21M549
// BISMA TANVEER MIRZA
#include "iostream"
#include "cmath"
using namespace std;

class Circle
{
private:
    int x;
    int y;
    float radius;
    static const double PI;

public:
    // CONSTRUCTORS
    // Default constructors
    Circle()
    {
        this->x = 0;
        this->y = 0;
        this->radius = 5;
    }

    // Constructor 01
    Circle(int X, int Y, float R)
    {

        setX(x);
        setY(y);
        setR(radius);
    }
    // constructor 02
    Circle(int X, int Y)
    {

        setX(x);
        setY(y);
        setR(radius);
    }

    // constructor 03
    Circle(int X, float radi)
    {

        setX(x);
        setY(y);
        setR(radius);
    }

    // copy constructor
    Circle(const Circle &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
        this->radius = obj.radius;
    }

    // Destructor
    ~Circle()
    {
        cout << "DESTRUCTOR EXECUTED..." << endl;
    }

    // MUTATORS(SETTERS)
    void setX(int x1)
    {
        if (x1 >= -50 && x1 <= 50)
            this->x = x1;
        else
            this->x = 0;
    }

    void setY(int y1)
    {
        if (y1 >= -50 && y1 <= 50)
            this->y = y1;
        else
            this->y = 0;
    }

    void setR(float r1)
    {
        if (r1 >= 1 && r1 <= 10)
            this->radius = r1;
        else
            this->radius = 5;
    }

    void setCircle(int X, int Y, float R)
    {
        setX(X);
        setY(Y);
        setR(R);
    }

    // ACCESSOR (GETTERS)
    int getx() const
    {
        return x;
    }

    int gety() const
    {
        return y;
    }

    float getr() const
    {
        return radius;
    }
    void getCircle()
    {

        cout << "Enter value of x-axis:";
        cin >> x;
        cout << endl;
        cout << "Enter value of y-axis:";
        cin >> y;
        cout << endl;
        cout << "Enter value of radius:";
        cin >> radius;
        cout << endl;
        setX(x);
        setY(y);
        setR(radius);
    }

    float getArea() const
    {
        return PI * radius * radius;
    }
    float getDiameter() const
    {
        return radius * 2;
    }
    float getCircumference() const
    {
        return 2 * PI * radius;
    }

    Circle addCircle(const Circle &obj) const
    {
        Circle result;
        result.x = (x + obj.x);
        result.y = (y + obj.y);
        result.radius = (radius + obj.radius);
        return result;
    }

    bool isEqual(const Circle &obj) const
    {
        return (x == obj.x && y == obj.y && radius == obj.radius);
    }
    int findCircle(const Circle array[], const int size) const
    {
        for (int i = 0; i < size; i++)
        {
            if ((this->x == array[i].x) && (this->y == array[i].y) && (this->radius == array[i].radius))
            {
                return i;
            }
        }
        return -1;
    }
    void updateObjects(Circle array[], const int size) const
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i].x == x && array[i].y == y)
            {
                array[i].radius = radius;
            }
        }
    }
    // DISPLAY INFORMATION
    void putCircle() const
    {

        cout << x << "\t";
        cout << y << "\t";
        cout << radius << "\t";
        cout << endl;
    }
};
const double Circle ::PI = 3.14159;

int main()
{
    Circle obj1, obj2, obj3, obj4, obj5, obj7;
    obj1.setCircle(25, 35, 5.4);
    cout << "X-axis"
            "\t"
         << "Y-axis"
            "\t"
         << "Radius" << endl;
    obj1.putCircle();
    obj3 = obj1;
    obj3.putCircle();

    obj1.getCircle();
    obj2.getCircle();
    obj3.getCircle();
    obj4.getCircle();
    obj5.getCircle();

    cout << "X-axis"
            "\t"
         << "Y-axis"
            "\t"
         << "Radius" << endl;
    obj1.putCircle();
    obj2.putCircle();
    obj3.putCircle();
    obj4.putCircle();
    obj5.putCircle();

    obj7 = obj1.addCircle(obj2);
    obj7.putCircle();

    cout << "\n";

    cout << "Area:" << obj1.getArea() << "\tDiameter:" << obj1.getDiameter() << "\tCircumference:" << obj1.getCircumference() << endl;

    // update radius of object
    Circle o1(12, -67, 7.8);
    cout << "\n";
    cout << "upadation.." << endl;
    Circle o6[5];
    for (int i = 0; i < 2; i++)
    {

        o6[i].getCircle();
    }

    o1.updateObjects(o6, 2);

    for (int i = 0; i < 2; i++)
    {
        cout << "X-axis"
                "\t"
             << "Y-axis"
                "\t"
             << "Radius" << endl;

        o6[i].putCircle();
    }

    return 0;
}