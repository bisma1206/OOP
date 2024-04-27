#include"iostream"
using namespace std;
int main()
{
   int a[10][10],row,col,transpose[10][10],i,j;
   cout<<"Enter ROWS"<<endl;
   cin>>row;
   cout<<"Enter col"<<endl;
   cin>>col;
   cout<<"Enter elements of matrices:"<<endl;
   //store elements of matrices
   for(int j=0;j<col;j++)
   {
    for(int i=0;i<row;i++)
    {
        cout<<"Enter Elements"<<endl;
        cin>>a[i][j];
    }
   }
    cout<<"Enter matrix:"<<endl;
    for(int j=0;j<col;j++)
   {
    for(int i=0;i<row;i++)
    {
        cout<<a[i][j];
    }
   }
    for(int j=0;j<col;j++)
   {
    for(int i=0;i<row;i++)
    {
       
        transpose[j][i]=a[i][j];
       
    }
   }
   cout<<"The transpose is:"<<endl;
    for(int j=0;j<col;j++)
   {
    for(int i=0;i<row;i++)
    {
       cout<<" "<<transpose[i][j];
       
    }
   }

    return 0;
}