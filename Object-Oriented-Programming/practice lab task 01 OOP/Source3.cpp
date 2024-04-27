#include "iostream"
using namespace std;
int main()
{
	int b;
	cout << "Enter number with in the range of 1 to 10:";
	cin >> b;
	while (b < 1 || b>10)
	{
		cout << "Invalid input";
	}
	switch (b)
	{
	 case 1:
		cout << "I";
		break;
	 case 2:
		 cout << "II";
		 break;
	 case 3:
		 cout << "III";
		 break;
	 case 4:
		 cout << "IV";
		 break;
	 case 5:
		 cout << "V";
		 break;
	 case 6:
		 cout << "VI";
		 break;
	 case 7:
		 cout << "VII";
		 break;
	 case 8:
		 cout << "VIII";
		 break;
	 case 9:
		 cout << "XI";
	 case 10:
		 cout << "X";
		 break;
		 break;

	} 
	
	return 0;
}