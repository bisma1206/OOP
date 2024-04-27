#include"iostream"
using namespace std;
int main()
{
	float l1, l2, w1, w2,a1,a2;
	cout << "Enter length1:";
	cin >> l1;
	cout << "Enter length2:";
	cin >> l2;
	cout << "Enter width1:";
	cin >> w1;
	cout << "Enter width2:";
	cin >> w2;
	cout << "Enter area1:";
	cin >> a1;
	cout << "Enter area2:";
	cin >> a2;
	a1 = l1 * w1;
	a2 = l2 * w2;
	if (a1 > a2)
	{
		cout << a1 << "a1 is greater than a2:" << a2 << endl;
	}
	else if (a1 < a2)
	{
		cout << a1 << "a1 is smaller than a2:" << a2 << endl;
	}
	else
	{
		cout << "both are same";
	}

	return 0;
}