#include "iostream"
using namespace std;


    int *getPositiveNumbers(const int arr[], const int size, int& newArraySize)
    {
      int  newAraySize=0;
       int *b=new int[newArraySize];
    
       for(int i=0; i<size; i++)
       {
            if(arr[i] >= 0)
            {
             *(b+i)=arr[i];
               newAraySize++;
            }   
            else
            {
                *(b+i)=0;
                newAraySize++;
            }
       }
        newArraySize = newAraySize;
        return b;
    }
     

int main()
{

    int arr[10];
    int newSize=10;

    for(int i=0; i<10; i++)
    {
        cout<<"Enter values:"<< i+1 <<endl;
        cin>>arr[i];
    }

    int *value = getPositiveNumbers(arr, 10, newSize);
    int negative = 0;
    for(int i=0; i<10; i++)
    {
        if(*(value+i)!=0)
        cout<<*(value+i)<<endl;
        negative++;
    }
   
    if(negative==0)
    {
         cout<<"NO positive Integer"<<endl;
    }
    delete [] value;

    return 0;
}