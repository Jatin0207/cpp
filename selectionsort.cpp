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
void selectionsort(int* A, const int size)
{
	for (int i = 0; i < size; i++)
	{
		int index = i;
		for (int j = i+1; j < size; j++)
		{
			if (A[j] < A[index])
				index = j;
		}
		int temp = A[i];
		A[i] = A[index];
		A[index] = temp;
	}


}
int main()
{
	int A[] = { 6,9,2,7,5,4,8,2,4,1 };
	cout << "Original Array";
	printArray(A, 10);
	selectionsort(A, 10);
	cout << "Sorted Array";
	printArray(A, 10);
	system("Pause");
	return 0;
}