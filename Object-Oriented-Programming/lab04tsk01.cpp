#include "iostream"
using namespace std;
class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
   

    Car(int yearModel2,string make2,int speed)
    {
        yearModel=yearModel2;
        make=make2;
        speed=0;
    }
    //COPY CONSTRUCTOR
    Car(const Car& obj1)
    {
        yearModel=obj1.yearModel;
        make=obj1.make;
        speed=obj1.speed;
    }
    //DESTRUCTOR
    ~Car()
    {
        cout<<"DESTRUCTOR.."<<endl;
    }

    //ACCESSOR FUNCTION (get)
    int getA()
    {
        return yearModel;
    }
    string getB()
    {
        return make;
    }
    int getC()
    {
        return speed;
    }

    //MUTATOR FUNCTIONS (set)
    void setA(int yearModel2)
    {
        yearModel=yearModel2;
    }

     void setB(string make2)
    {
        make=make2;
    }

     void setC(int speed2)
    {
       speed=speed2;
    }

    void setCar(int yearsModel,string made,int S)
    {
        yearModel=yearsModel;
        make=made;
        speed=S;
    }

    void getCar()
    {
        cout<<"Enter car's Model:"<<endl;
        cin>>yearModel;

        cout<<"Enter car's Make:"<<endl;
        cin>>make;

        cout<<"Enter car's speed:"<<endl;
        cin>>speed;
    }
    //DISPLAY INFORMATION
    void putCar()
    {
        cout<< yearModel <<"\t"  << make <<"\t" << speed <<endl;
    }

    int accelerate()
    {
        speed=speed+5;
        return speed;
    }

     int brake()
    {
        speed=speed-5;
        return speed;
    }


};

int main()
{
   
    Car obj1(0," ",0), obj2(0," ",0), obj3(0," ",0), obj4(0," ",0), obj5(0," ",0); 

    obj1.setCar(2021,"Suzuki Alto",40);

    obj1.putCar();

    obj2=obj1;
    obj2.putCar();

    obj1.getCar();
    obj1.accelerate();
    obj1.brake();
    obj1.putCar();

    obj3.getCar();
    obj3.accelerate();
    obj3.brake();
    obj3.putCar();

    obj4.getCar();
    obj4.accelerate();
    obj4.brake();
    obj4.putCar();

    obj5.getCar();
    obj5.accelerate();
    obj5.brake();
    obj5.putCar();

    return 0;
}