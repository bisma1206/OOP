#include "iostream"
using namespace std;
void arrayBypointer(float *ptrArray,int size)
{
   for(int i=0;i<size;i++)
   {
      cout<<"ELEMENT AT: "<<i+1<<"INDEX IS: "<<*ptrArray<<"AND ADDRESS IS: "<<ptrArray<<endl;
      ptrArray++;
   }


}
int main()
{
  float array[10];
  for(int i=0;i<10;i++)
  {
    cout<<"ENTER ELEMENTS:"<<i+1<<endl;
    cin>>array[i];
  }

 arrayBypointer(array,10);


    return 0;
}