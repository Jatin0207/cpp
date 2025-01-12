#include<iostream>
using namespace std;
int cstringlength(char*str)
{
	int count = 0;
	while(str[count] !=NULL)
		count++;
	return count;
}
int countLower(char*str)
{
	int count = 0 ;
	int length = cstringlength(str);
	for(int i = 0; i < length;i++)
		if(str[i] >= 'a' && str[i] <= 'z')
			count++;
	return count;
}
void bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size;i++)
		for(int j = 0;j < size-i-1;j++)
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

}
void selectionSort(int*A,int size)
{
	for(int i = 0; i < size;i++)
	{
		int index =i;
		for(int j= i+1;j< size;j++)
		{
			if(A[j] < A[index])
				index =j;
		}
		int temp = A[i];
		A[i] =A[index];
		A[index] = temp;
	}
}
void insertionSort(int*A,int size)
{
	for(int i = 1; i < size;i++)
	{
		int temp = A[i];
		int j;
		for(j = i-1;j>=0;j--)
		{
			if(A[j] > temp)
				A[j+1] = A[j];
		
		else
			break;
		}
		A[j+1] =temp;
	}

}
int main()
{

	system("pause");
	return 0;

}
