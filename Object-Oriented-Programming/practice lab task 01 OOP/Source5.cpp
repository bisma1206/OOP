#include"iostream"
using namespace std;
int main()
{
	int digit,distance;
	cout << "enter choice:";
	cin >> digit;
	while (digit<1||digit>3)
	{
		cout << "enter any digit with in the range of 1-3:";
		cin >> digit;
	}
	cout << "Medium\t""Speed\t" << endl << "Air\t""1100 feet per second" << endl << "Water\t""4900 feet per second"
	<< endl << "Steel\t""16400 feet per second" << endl;
	cout << "enter distance:";
	cin >> distance;
	int b1, b2, b3;
	if (digit == 1)
	{
		b1 = distance / 1100;
		cout << "the amount of time is" << b1 << endl;
	}
	 else if (digit == 2)
	{
		b2 = distance / 4900;
		cout << "the amount of time is" << b2 << endl;
	}
	else if (digit == 3)
	{
		b3 = distance / 16400;
		cout << "the amount of time is" << b3 << endl;
	}

	return 0;
}