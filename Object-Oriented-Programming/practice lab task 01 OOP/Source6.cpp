#include"iostream"
using namespace std;
int main()
{
	int seconds,min,hours,days;
	cout << "enter few seconds:";
	cin >> seconds;
	int sec2 = seconds;
	if (seconds==60)
	{
		min = seconds / 60;
		cout << "the amount of minutes is:"<<min;
	}
	else if (seconds >= 3600)
	{
		hours = seconds / 3600;
		cout << "the amount of hours is:"<<hours << endl;
		seconds = seconds - (hours * 3600) ;
		cout << seconds;
	}
	if (sec2 >= 86400)
	{
		days = sec2 / 86400;
		cout << "days" <<days;
	}

	return 0;
}