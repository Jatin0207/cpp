#include<iostream>
using namespace std;
void rearrangeArray2(int arr[],int size)
{
	int i = 0;
	int j = size -1;
	while(i < j)
	{
		if(arr[i] >= 0 && arr[j] < 0)
		{
			int temp = arr[i];
			arr[i++] = arr[j];
			arr[j--] = temp;
		
		
		
		}
	
		else if( arr[i] >= 0 && arr[j] >= 0)
		{
			i++;
			j--;
		
		
		}
		else if(arr[i] < 0 && arr[j] >=0)
		{
			i++;
		
		
		}
		else 
			j--;
	
	}


}


void rearrangeArray(int arr[],int size)
{
	int temp;
	for(int  i = 0;i < size;i++)
	{
		if(arr[i] > 0)
			continue;
		else
		{
			temp = arr[i];
			for(int j = i-1;j >=0;j--)
			{
				arr[j] = temp;
				arr[i] = arr[j];
			
			
			}

		
		}

	
	
	}


}
void number_replace(int arr[],int size,int target,int replacevalue)
{
	int temp;
	for(int i = 0;i < size;i++)
	{
		if(arr[i]==target)
		{
			temp = arr[i];
			arr[i] = replacevalue;
		
		
		
		}
	
	
	}

}
void arrayaddition(int arr[],const int size,int arr2[],const int size2)
{
	
	int sum = 0;
	for(int i = 0;i < size;i++)
	{
		int sum = arr[i] + arr2[i];
		arr[i] = sum;
		
		
	}

}
void swap(int arr[],int size,int index,int index1)
{
	 int temp;
	 int i = arr[index];
	 int j = arr[index1];
	 temp = arr[index];
	 arr[index] = arr[index1];
	 arr[index1]=temp;
	
	
	}



void num_increment(int arr[],int size)
{
	for(int i = 0;i < size;i++)
		arr[i] = arr[i] + 1;


}
int average(int arr[],int size)
{
	int average;
	int sum = 0;
	for(int  i = 0;i < size;i++)
	{
		sum+=arr[i];
		
	}
	average = sum /size;
	return average;
		
}
	


int Sum(int arr[],int size)
{
	int sum = 0;
	for(int i = 0; i < size;i++)
		sum+=arr[i];
	return sum;

}
int largest(int arr[],int size)
{
	int maximum = arr[0];
	for(int i = 1;i < size;i++)
	{
		if(arr[i] > maximum)
			maximum = arr[i];
	}
	return maximum;


}
int position_finderfromend(int arr[],int size,int target)
{
	for(int i = size -1; i >= 0;i--)
		if(arr[i]==target)
			return i;
	return -1;



}
int position_finder(int arr[],int size,int target)
{
	for(int i = 0;i < size;i++)
	{
		if(arr[i] == target)
			return i;
	}

	return -1;

}

int number_count(int arr[],int size,int target)
{
	int count = 0;
	for(int i = 0;i < size;i++)
	{
		if(target==arr[i])
			count++;
	
	
	}

	return count;

}
int even_counter(int arr[],int size)
{
	int count = 0;
	for(int i = 0;i < size;i++)
	{
	
		if(arr[i] % 2==0)
			count++;
	
	}
	return count;

}
bool numbercheck(int arr[],int size,int target)
{
	bool check = false;
	for(int i = 0;i < size;i++)
	{
		if(arr[i]==target)
			check = true;
		
	
	
	
	}
	return check;


}
bool oddNumber(int arr[],int size)
{
	bool check = false;
	for(int  i = 1;i <= size;i++)
	{
		if(arr[i] % 2 !=0)
			check = true;

	
	
	
	}
	return check;


}
void reverse(int arr[],int size)
{
	int i = 0;
	int j = size -1;
	int temp;
	while(i < j)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		i++;
		j--;
	}
}

int main()
{

	int arr[]={-2,-4,-6,1,3,5};
	 rearrangeArray2(arr,6);
	 for(int i = 0;i < 6;i++)
	 {
		cout << arr[i] << endl;
	 
	 }
	 









	system("pause");
	return 0;

}
