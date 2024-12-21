#include<iostream>
#include<ctime>
using namespace std;
int* computeFreqArray(int& n)
{
	int* A = new int[n];
	int* ans = new int[n];
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	int a6 = 0;
	 
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 7;

		if (A[i] == 1)
		{
			a1++;
			
		}
		
		else if (A[i] == 2)
		{
			a2++;
			
		}
		
		else if (A[i] == 3)
		{
			a3++;
			
		}
		else if (A[i] == 4)
		{
			a4++;
		}
		else if (A[i] == 5)
		{
			a5++;
			
		}
		else
			a6++;
		
		 
	}
	int i = 0;
	while (i < 7)
	{
		ans[i] = a1;
		i++;
		ans[i] = a2;
			i++;
			ans[i] = a3;
			i++;
			ans[i] = a4;
			i++;
			ans[i] = a5;
			i++;
			ans[i] = a6;
			i++;
			break;
	 }
 
	return ans;
}

int main()
{
	srand(time(0));
	int n;
	cout << "Enter a positive integer" << endl;
	cin >> n;
	while (n <= 0)
	{
		cout << "Enter a positive integer" << endl;
		cin >> n;
	}
	int *A = computeFreqArray(n);
	cout << "The elements of the frequency array are: " << A << endl;
	int min = A[0], max = A[0];
	for (int i = 0; i < 6; i++)
	{
		if (A[i] < min)
			min = A[i];
		if (A[i] > max)
			max = A[i];
	}
	cout << "The minimum frequency is" << min << endl;
	cout << "The maximum frequency is" << max << endl;
	if (max - min < 0.5 * n)
		cout << "The die is fair" << endl;
	else
		cout << "The die is not fair" << endl;
	system("Pause");
	return 0;
}