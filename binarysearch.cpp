#include<iostream>
using namespace std;
int  binarysearch(const int A[], const int size, const int searchvalue)
{

	int startindex = 0;
	int lastindex = size - 1;
	while (startindex <= lastindex)
	{
		int middleindex = (startindex + lastindex) / 2;
		if (A[middleindex] == searchvalue)
			return middleindex;
		else if (A[middleindex > searchvalue])
			lastindex = middleindex - 1;
		else
			startindex = middleindex + 1;
	}
	return -1;

		 



}
int main()
{

	const unsigned int size = 300000000;
	int* A = new int[size];
	srand(time(0));
	A[0] = 5;
	for (int i = 1; i < size; i++)
		A[i] = rand() % 200;

	int value = A[0]-1;
	cout << "Press enter key to start  binary search ....." << endl;
	int index =  binarysearch(A, size, value);
	cout << "Finished  binary search" << endl;

	if (index == -1)
		cout << value << " was not found in the array" << endl;
	else
		cout << value << " found in the array at index" << endl;

	delete[]A;
















	system("Pause");
	return 0;

}