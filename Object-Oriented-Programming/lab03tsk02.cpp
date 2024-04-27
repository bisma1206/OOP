#include "iostream"
#include "string"
using namespace std;
void letterPerWord(const char* str)
{
    int count=0;
      cout<<"Word"<<"\t"<<"Numbers of words"<<endl;
    for(int i=0; str[i]!=NULL; i++)
    {
       if(str[i]!=' ')
       {
         count++;
         cout<<str[i];
       }
       else if(str[i]==' ')
       {
         cout<<"\t"<<count<<endl;
         count=0;
       }
       cout<<"\t"<<count<<endl;
    }

}

int main()
{
    string str;
    cout<<"ENTER ANY CHARACTER STRING:"<<endl;
    getline(cin, str);
    letterPerWord(&str[0]);

    return 0;
}

