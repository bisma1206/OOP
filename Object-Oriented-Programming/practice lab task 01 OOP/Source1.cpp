#include"iostream"
using namespace std;
int main()
{
	int b = 0,d=0;
	cout << "Enter first number:";
	cin >> b;
	cout << "Enter 2nd number:";
	cin >> d;
	if (b > d)
	{
		cout << b << " b is greater  than d" << d << endl;

		

		cout << "ascending order is " << d << endl << b;
	}
	else if (b < d)
	{
		cout << b << " b is smalller  than d" << d << endl;

		

		cout << "ascending order is " << b << endl << d;
	}
	else 
	{
		cout << "both same";
	}
	return 0;
}