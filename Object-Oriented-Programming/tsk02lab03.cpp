#include "iostream"

using namespace std;

int main()
{
    int size;

    cout<<"Enter Size of integer Array:"<<endl;
    cin>>size;

    int *a=new int[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<i+1<<"content for reading:"<<endl;
        cin>>*(a+i);
    }

    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+*(a+i);
    }

    cout<<"Sum is:"<<sum<<endl;

    delete(a);

    return 0;

}