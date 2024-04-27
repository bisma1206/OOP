#include"iostream"
using namespace std;
//task 03
void getdata(int a[3][3], int size)
{

	cout << "Enter  value of matrices:" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter  matrices:[" << i << "][" << j << "]";
			cin >> a[i][j];
		}
	}


	/*cout << "Enter second matrices:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter second matrices [" << i << "][" << j << "]:";
			cin >> b[i][j];
		}
	}*/
}

void display(int a1[3][3], int size)
{

	cout << "the  matrix is:" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << a1[i][j] << " " << endl;

		}
	}
	/*cout << "the second matrix is:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << b[i][j] << " " << endl;

		}
	}*/
}
void sum(int a1[3][3], int b[3][3])
{
	int sum[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = a1[i][j] + b[i][j];
		}
	}
	cout << "sum of matrix" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << sum[i][j] << " " << endl;
		}
	}
}

int main()
{ 
	int r[3][3];
	int A1[3][3];
	int A2[3][3];
	getdata(A1,3);
	display(A1,3);
	getdata(A2, 3);
	display(A2, 3);
	sum(A1,A2);

	return 0;
}
	