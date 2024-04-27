#include "iostream"
using namespace std;
int *getEvenNumbers(const int ar[],const int size,int& evenArraySize)
{

    int *p=NULL;
    if(size>0)
    {
        evenArraySize=0;

        for(int i=0; i<size; i++)
      {
        if(ar[i]%2==0)
        {
            evenArraySize++;
        }
      }

         p=new int[evenArraySize];
      
        for (int i = 0, j = 0; i < size; i++)
		{
			if (ar[i] %2== 0)
			{
				p[j] = ar[i];
				j++;
			}
		}
      

      
    }

    return p;
}
int main()
{

 
    int evenSize=0;
    int ar1[]={2, 4, 8, 9, 5, 7, 6, 13};
     int ar1_size = sizeof(ar1) / sizeof(ar1[0]);
    int* evenArray = getEvenNumbers(ar1, ar1_size, evenSize);
    
    if (evenArray == NULL)	
    {
		cout << "No Even Numbers Exist in the Array!" << endl;
    }
	else
	{
		for (int i = 0; i < evenSize; i++)
		{
			cout << evenArray[i] << "\t";	
		}
	}


    if(evenArray != NULL)
    {
        delete[] evenArray;
    }	
		


    return 0;
}