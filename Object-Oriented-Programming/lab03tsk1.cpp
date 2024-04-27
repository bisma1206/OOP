#include "iostream"
#include "string"
using namespace std;
int *pairWiseSum(const int ar[],const int size,int &newArraySize)
{

   if(size>0)
   {
    newArraySize=0;
   }
    
        if(size%2==0)
        {
            newArraySize=(size/2);
        }
        else
        {
             newArraySize=(size/2)+1;
        }
    
    int pairsum=0;
    int *p=new int[newArraySize];
    if(size%2==0)
    {
         for(int i=0,j=0;i<=size; i+=2,j++)
        {
           
          
             *(p+j)=*(ar+i)+*(ar+i-1);
            
          
       }

    }
    else
    {
       
        for(int i=0,j=0;i<=size; i+=2,j++)
        {
           
            
                 *(p+j)=*(ar+i)+*(ar+i-1);
            
             *(p+newArraySize)=*(ar+size);
        }

    }
    return p;
}
int main()
{

    const int size1=9;
    int array[size1];

    for(int i=1;i<=size1;i++)
    {
        cout<<"ENTER ANY VALUE:"<<i<<endl;
        cin>>array[i];
    }

    int Size=0;

    int *b=pairWiseSum(array,size1,Size);

    if(Size==0)
    {
        cout<<"NO VALUE"<<endl;
    }
    else
    {
        if(size1 %2 == 0)
        {
            for(int i=0;i<Size;i++)
            {
                cout<<" "<<*(b+i);
            }
        }
        else
        {
             for(int i=0;i<Size;i++)
            {
                cout<<" "<<*(b+i);
            }

             cout<<" "<<*(b+Size);

        }
    }

    if(b!=NULL)
    {
        delete[] b;
    }

    return 0;
}