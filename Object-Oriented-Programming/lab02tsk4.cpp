#include "iostream"

using namespace std;

void getMinMax(int *ptrARRAY,int size,int*ptrMin,int *ptrMax)
{
    *ptrMin=*(ptrARRAY+0);
    
    *ptrMax=*(ptrARRAY+0);

    for(int i=0;i<10;i++)
    {
        if(*(ptrMax)<*(ptrARRAY+i))
        {
          *(ptrMax)=*(ptrARRAY+i);
        }
        else  if(*(ptrMin)>*(ptrARRAY+i))
        {
          *(ptrMin)=*(ptrARRAY+i);
        }
    }

}
int main()
{

  int Array[10]={55,56,58,61,49,42,28,15,1,38};
  int ptrMin,ptrMax;
  getMinMax(Array,10,&ptrMin,&ptrMax);
  cout<<"Minimum value is: "<<ptrMin<<endl<<"Maximum value is: "<<ptrMax<<endl;




    return 0;
}