#include"iostream"
using namespace std;
int main()
{
                             
   int x=2;
   int y=8;
   int *ptrx=&x;
   int *ptry=&y;
   cout<<"The Adress of X is:"<<&x<<endl<<"Value of X is:"<<x<<endl;
   cout<<"The Adress of Y is:"<<&y<<endl<<"Value of Y is:"<<y<<endl;
   cout<<"The Adress of ptrx is:"<<&ptrx<<endl<<"Value of X is:"<<*ptrx<<endl;
   cout<<"The Adress of ptry is:"<<&ptry<<endl<<"Value of Y is:"<<*ptry<<endl;


    return 0;
}