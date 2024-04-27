
//BSITF21M549
//HOME WORK 01
//BISMA TANVEER MIRZA

#include "iostream"
#include "string"
using namespace std;

class Employee
{
 private:

    string name;
    int ID;
    string department;
    string position;

 public:
    //DEFAULT CONSTRUCTORS
    Employee()
    {
       name=" ";
       ID=0;
       department=" ";        
       position=" ";
    }

    //PARAMETRAIZED CONSTRUCTORS
    Employee(int name1,int IdNumber,string depart,string pos)
    {
        name=name1;
        ID=IdNumber;
        department=depart;
        position=pos;

    }

    //COPY CONSTRUCTORS

 Employee(const Employee& obj)
    {
        name=obj.name;
        ID=obj.ID;
        department=obj.department;
        position=obj.position;
    }
    
    //DESTRUCTOR
    ~Employee()
    {
        cout<<"Destructor Executed..."<<endl;
    }

    //MUTATOR FUNCTIONS (set)
    void setName(string name1)
    {
        name=name1;
    }

     void setId(int IdNumber )
    {
        if(IdNumber>0)
       ID=IdNumber;
       else
       ID=0;
    }

     void setDepartment(string depart)
    {
      department=depart;
    }

     void setPosition(string pos)
    {
      position=pos;
    }
    
    void setInfo(string names,int IdNum,string Depart,string P)
    {
        
        setName(names);
        setId(IdNum);
        setDepartment(Depart);
        setPosition(P);
    }
 
    //ACCESSOR FUNCTION (get)
    string getName()
    {
        return name ;
    }
    int  getId()
    {
        return ID ;
    }
    string getDepart()
    {
        return department ;
    }
    string getPosition()
    {
        return position ;
    }

    void getInfo()
    {
        cout<<"Enter Employee's name:";
        getline(cin,name);
        setName(name);
        cout<<endl;

        cout<<"Enter Employee's ID number:";
        cin>>ID;
        setId(ID);
        cout<<endl;

        cout<<"Enter Employee's Department:";
        cin.ignore();
        getline(cin,department);
        setDepartment(department);
        cout<<endl;

        cout<<"Enter Employee's Position:";
        getline(cin,position);
        setPosition(position);
        cout<<endl;
    }

    //DISPLAY INFORMATION
    void putInfo()
    {
       
        cout<< name <<"\t\t"; 
        cout << ID <<"\t";
        cout << department << "\t" ;
        cout <<position << endl; 
    }



};

int main()
{
   
    Employee obj1, obj2, obj3, obj4, obj5;
    obj1.setInfo("Naveed Ali",1230,"\tComputer Science","Assistant Professor");
    cout<<"Name" <<"\t\t\t" <<"ID Number" <<"\t" << " Department" << "\t\t" << "Position" <<endl;

    obj1.putInfo();
    obj2=obj1;
    obj2.putInfo();
    
    obj1.getInfo();
    obj2.getInfo();
    obj3.getInfo();
    obj4.getInfo();
    obj5.getInfo();
 
    obj1.putInfo();
    obj2.putInfo();
    obj3.putInfo();
    obj4.putInfo();
    obj5.putInfo();
 
    return 0;
}