#include "iostream"
#include "string"
using namespace std;
class Student
{
 private :
    int regNO;
    string firstName;
    string lastName;
    string degree;
    float cgpa;
 public:
    //constructor
  Student(int Regnum,string firstname1,string program)
  {
    regNO=Regnum;
    firstName=firstname1;
    lastName=" ";
    degree=program;
    cgpa=-1;

  }

  Student(int Regnum,string firstname1,string last,string program)
  {
    regNO=Regnum;
    firstName=firstname1;
    lastName=last;
    degree=program;
    cgpa=-1;

  }

   Student(int Regnum,string firstname1,string last,string program,float Cgpa)
  {
    regNO=Regnum;
    firstName=firstname1;
    lastName=last;
    degree=program;
    cgpa=Cgpa;

  }
  


    //copy constructor
    Student(const Student&obj)
    {
        regNO=obj.regNO;
        firstName=obj.firstName;
        lastName=obj.lastName;
        degree=obj.degree;
        cgpa=obj.cgpa;
    }
    //destructor
    ~Student()
    {
        cout<<"DESTRUCTURE EXECUTED..."<<endl;
    }
    //Mutators (SETTERS)
    void setR(int regno1)
    {
        if(regno1>=501 && regno1<=565)
        // regNO=regno1;
        this->regNO=regno1;
        else
        regNO=0;
    }
    void setN(string name1)
    {
        // firstName=name1;
        this ->firstName=name1;
    }
    void setL(string last)
    {
        // lastName=last;
        this ->lastName=last;
    }
    void setD(string program)
    {
        // degree=program;
        this->degree=program;
    }
    void setG(float gpa)
    {
        if(gpa>=0 && gpa<=4)
        //cgpa=gpa;
        this->cgpa=gpa;
       else
       cgpa=-1;
    }
    void setinfo(int r,string n,string l,string d,float c)
    {
        setR(r);
        setG(c);
        this->firstName=n;
        this->lastName=l;
        this->degree=d;

    }
     //ACCESSOR FUNCTION (get)
     int readr()
     {
        return regNO;
     }
     string readn()
     {
        return firstName;
     }
      string readl()
     {
        return lastName;
     }
      string readd()
     {
        return degree;
     }
      float readg()
     {
        return cgpa;
     }
     void read()
     {
        cout<<"Enter Register Number:";
        cin>>regNO;
        cin.ignore();
        cout<<endl;

        cout<<"Enter First Name:";
        getline(cin,firstName);
        cout<<endl;

        cout<<"Enter Last Name:";
        getline(cin,lastName);
        cout<<endl;

        cout<<"Enter Degree:";
        cin>>degree;
        cout<<endl;

        cout<<"Enter CGPA:";
        cin>>cgpa;
        setG(cgpa);
        cout<<endl;

     }
     bool isFirstSemester(float cgpa)
     {
        return (cgpa==-1);
     }

     bool isPromoted(float cgpa)
     {
        return (cgpa>=2);
     }
     float getPercentage()
     {
       return (cgpa/4.00)*100;

     }

     //DISPLAY INFORMATION
    void write()
    {
         setR(regNO);
         setG(cgpa);
        cout<< regNO <<"\t"; 
        cout << firstName <<"\t";
        cout << lastName << "\t" ;
        cout << degree << "\t";
        cout<< cgpa <<endl;
    }


  
};


int main()
{
    Student obj1(549,"Bisma","Tanveer","BSIT",3.5);
    Student obj2(0," "," "," ",0);
    Student obj3(0," "," "," ",0);
    obj3=obj1;
    Student obj4(0," "," "," ",0);
    Student obj5(0," "," "," ",0);


    //obj1.setG(10);
     //obj1.setR(588);
     obj1.write();


     obj2=obj1;
    obj2.write();
   
    obj1.read();
    obj2.read();
   //  obj3.read();
   //  obj4.read();
   //  obj5.read();
 
    obj1.write();
    obj2.write();
   //  obj3.write();
   //  obj4.write();
   // obj5.write();

    return 0;
}