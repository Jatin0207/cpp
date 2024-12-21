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
void  insertionSort(int* A, const int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = A[i];
		int j;
		for ( j = i - 1; j >= 0; j--)
		{
			if (A[j] > temp)
				A[j + 1] = A[j];
			else
				break;
		}
		A[j + 1] = temp;
	}


	
}
int main()
{
	int A[] = { 6,9,2,7,5,4,8,2,4,1 };
	cout << "Original Array ";
	printArray(A, 10);
	insertionSort(A, 10);
	cout << "Sorted Array ";
	printArray(A, 10);
	system("Pause");
	return 0;
}