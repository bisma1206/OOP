#include"iostream"
using namespace std;
int main()
{
	int a[10];
	int sum[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the 10 integers:" << i+1<< endl;
		cin >> a[i];

	}

	for (int i = 0; i < 10; i++)
	{
		sum[i] = a[i] + a[i + 1];
		cout << "The pairs of sum is:" << sum[i] << endl;
		
		i++;
	}





	return 0;
}