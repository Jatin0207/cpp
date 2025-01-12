#include<iostream>
using namespace std;
bool has_duplicates(int arr[],int size)
{
	 
	 for(int i = 0; i < size;i++)
	 {
		 for(int j = i+1;j<size;j++)
		 {
			 if(arr[i]==arr[j])
				 return true;
		 
		 
		 }
	 
	 
	 }
	 return false;
}
void printArray(int arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		if(arr[i]!=0)
		cout << arr[i] << endl;
	
	
	}



}
int ask_user_to_fill_array(int arr[],int size)
{
	int count = 0;
	cout << "Enter up to 10 nonnegative integers" << endl;
	for(int i = 0;i < size;i++)
	{
		cin >> arr[i];
		count++;
		if(arr[i]==0)
			break;
	}
	return count;
	
}

void swap(int * num, int * num1)
{
	int temp = *num;
	*num = *num1;
	*num1 = temp;


}
int main()
{
	 

				cout << "Step 1:\n";
				int max_size;
				cout << "What is the max size of the array? ";
				cin >> max_size;
				int* arr = new int[max_size];
				int used_size = ask_user_to_fill_array(arr, max_size);
				cout << "\nStep 2:\n";
				printArray(arr, used_size);
				cout << "\nStep 3:\n";
				if (has_duplicates(arr, used_size))
					cout << "There are duplicates in the array.\n";
				else
					cout << "There are no duplicates in the array.\n";






				system("pause");
				return 0;
}
