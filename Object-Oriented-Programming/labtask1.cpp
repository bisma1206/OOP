#include"iostream"
using namespace std;

float celcius(float F);
int main()
{
    float c ;
    cout << "Display celcius tempareture for 0 to 20"<<endl;
    for (int i = 0; i < 20; i++)
    {
        c = celcius(i);
        cout << i << "Degree equal to:" << c << "Degree of celcius" << endl;
    }

    return 0;
}
float celcius(float F)
{
    float c;
    c = 5.0 / 9 * (F - 32);
    return c;
}

// simple way of practice
/*#include"iostream"
using namespace std;
int main()
{
    float fahren,cel;
    cout<<"The temparature in fahrenheit is:"<<endl;
    cin>>fahren;
    cel=(fahren-32)*5/9;
    cout<<"The temparature in farenheit:"<<fahren<<endl;
    cout<<"The temparature in celcius:"<<cel<<endl;

 


    return 0;
}*/