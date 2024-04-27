#include "iostream"
using namespace std;
void getposNeg(const int ar[], const int n_ar, int* &pos, int& n_pos, int* &neg,int& n_neg)
{

    n_pos = n_neg=0;
    for(int i=0; i<n_ar; i++)
    {
        if(ar[i]>0)
        {
            n_pos++;
        }
        else if(ar[i]<0)
        {
            n_neg++;
        }

    }

    if (n_pos > 0)
	{
		pos = new int[n_pos];

	
		for (int i = 0, j = 0; i < n_ar; i++)
		{
			if (ar[i] > 0)
			{
				pos[j] = ar[i];
				j++;
			}
		}
	}

     if (n_neg < 0)
	{
		neg = new int[n_neg];

	
		for (int i = 0, j = 0; i < n_ar; i++)
		{
			if (ar[i] < 0)
			{
				neg[j] = ar[i];
				j++;
			}
		}
	}


}
int main()
{
    int n_arpos = 0;
    int* arpos = NULL;
    int n_arneg = 0;
    int* arneg = NULL;
    int ar1[] = {44, -66, -55, 49, 42, 88, -58 ,28, 01, -15 };			
	int ar1_size = sizeof(ar1) / sizeof(ar1[0]);
    getposNeg(ar1, ar1_size, arpos, n_arpos, arneg, n_arneg);

	if (arpos == NULL)	
	{
		cout << "No pos Numbers Exist in the Array!" << endl;
	}
	else
		
	{
		cout << "pos Numbers Exist in the Array: "<<endl;
		for (int i = 0; i < n_arpos; i++)
		{
			cout << arpos[i] << "\t"<<endl;	
		}
	}

	if (arneg == NULL)	
	{
		cout << "No neg Numbers Exist in the Array!" << endl;
	}
	else
		
	{
		cout << "neg Numbers Exist in the Array: ";
		for (int i = 0; i < n_arneg; i++)
		{
			cout << arneg[i] << "\t";	
		}
	}
	 
	 if (arpos != NULL)	
	 {
		delete[] arpos;
	 }

	  if (arneg != NULL)	
	 {
		delete[] arneg;
	 }
		









    return 0;
}