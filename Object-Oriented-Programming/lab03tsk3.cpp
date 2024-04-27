#include "iostream"
#include "string"
using namespace std;
char *reverseCase(const char*str)
 {
    char *p=new char[20];
        for(int i=0; str[i]!=NULL; i++)
        {
            if(str[i]>='A'&& str[i]<='Z')
            {
                p[i]=str[i]+32;
            }
            
           else if(str[i]>='a'&& str[i]<='z')
            {
                p[i]=str[i]-32;
            }
            else
            {
                p[i]=str[i];
            }
            
        }
        return p;
    }

int main()
{
    string a1;
    cout<<"Enter any char:"<<endl;
    getline(cin,a1);
    char* a = reverseCase(&a1[0]);

    for(int i=0;a[i]!=NULL;i++)
    {
        cout<<*(a+i);
    }
   if(a!=NULL)
   {
    delete[]a;
   }








    return 0;
}