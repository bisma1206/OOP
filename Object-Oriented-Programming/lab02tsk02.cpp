#include "iostream"
using namespace std;
void subtractBypointer(double*ptrA,double *ptrB,double*ptrR)
{
   *ptrR=*ptrA-*ptrB;
}
int main()
{
 double b,c,d;
 cout<<"ENTER FIRST VALUE:";
 cin>>b;
 cout<<"ENTER SECOND VALUE:";
 cin>>c;
 subtractBypointer(&b,&c,&d);
 cout<<"Difference is:"<<d<<endl;



    return 0;
}