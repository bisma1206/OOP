#include"iostream"
using namespace std;
#include"string"
int main()
{
	char line[80];
	cout << "Enter String:";
	cin.getline(line, 80);
	int count = 1;
	for (int i = 0; i < 80; i++)
	{
		if (line[i] == ' ')
		{
			/*if (line[i + 1] != ' ') */ //this condition chkspaces and then skip these spaces if remove this condition then it will be count all spaces.

			count++;



		}

	}
	cout << "Number of words in string is:" << count;

	return 0;

}