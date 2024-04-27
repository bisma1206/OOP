#include "iostream"

using namespace std;

void getEvenOdd(const int ar[], const int n_ar, int *&even, int& n_even, int *&odd, int& n_odd)
{
     int *even=new int[n_even];
     int *odd=new int[n_odd];
     int countEven=0;
     int countOdd=0;
     for(int i=0; i<n_ar; i++)
     {
        if(*(ar+i)%2==0)
        {
            *(even+countEven)=*(ar+i);
            countEven++;
        }
        else
       {
         *(odd+countOdd)=*(ar+i);
          countOdd++;
       }
     }
     cout<<"Even:"<<endl;

     for(int i=0; i<n_ar;i++)
     {
        if(*(even+i)!=0)
        {
            cout<<*(even+i);
        }
     }

     cout<<"Odd:"<<endl;

     for(int i=0; i<n_ar;i++)
     {
        if(*(even+i)!=0)
        {
            cout<<*(odd+i);
        }
     }

     delete[]even;
     delete[]odd;

}

int main()
{

    int array[10];
    int *even , *odd;
    int nEven,nOdd;

    for(int i=0;i<10;i++)
    {
        cout<<"Enter"<<i+1<<"Values:"<<endl;
        cin>>array[i];
    }

    getEvenOdd(array,10,even,nEven,odd,nOdd);

    return 0;
}