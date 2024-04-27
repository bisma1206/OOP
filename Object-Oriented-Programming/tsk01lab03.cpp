#include "iostream"
using namespace std;

int main()
{

   float *ptrX=NULL;
   float *ptrY=NULL;
   
   float *b=new float(4.5);
   float *b1=new float(9.3);

   ptrX=b;
   ptrY=b1;

    cout<<"The address of ptrX:"<<&ptrX<<endl<<"Value of ptrX:"<<*ptrX<<endl;
    cout<<"The address of ptrY:"<<&ptrY<<endl<<"Value of ptrY:"<<*ptrY<<endl;

    delete(b);
    delete(b1);
    
    return 0;
}