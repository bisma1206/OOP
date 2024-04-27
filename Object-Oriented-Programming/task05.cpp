#include"iostream"
using namespace std;
int main()
{
	
	string password;
	cout << "ENTER PASSWORD:";
	cin >> password;
	int digit = 0, upper = 0, lower = 0;
	while (password.length() < 6)
	{
		cout << "ENTER AT LEAST 6 LETTERS LONG PASSWORD:";
		cin >> password;
	}
	for (int i = 0; i < password.length(); i++)
	{
		if (password[i] >= 'a' && password[i] <= 'z')
		{
			lower++;

		}
		else if (password[i] >= 'A' && password[i] <= 'Z')
		{
			upper++;

		}
		else if (password[i] >= '0' && password[i] <= '9')
		{
			digit++;

		}

	}
	if (digit >= 1 && lower >= 1 && upper >= 1)
	{
		cout << "VALID PASSWORD";
	}
	else
	{
		cout << "INVALID PASSWORD";
	}
	return 0;
}