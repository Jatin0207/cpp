#include<iostream>
using namespace std;
void printArray(const int* A, const int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
		cout << endl;
	}
}
void bubbleSort(int* A, const int size)
{
	for (int i = 0; i < size; i++)
	{
		 
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;

			}
		}


	}
}
int main()
{
	int A[] = { 6,9,2,7,5,4,8,2,4,1 };
	cout << "Original Array ";
	printArray(A, 10);
	bubbleSort(A, 10);
	cout << "Sorted Array ";
	printArray(A, 10);
	system("Pause");
	return 0;
}