#include<iostream>
using namespace std;
int main()
{
	// Enter a sequence of integers and output the square each intger until the user enters integer 0
	 int num;
	 cout << "Enter a positive integer " << endl;
	 cin >> num;
	
	 while (num!=0)
	 {
		
		cout << "The square of positive integer is : " << endl;
	    int square = num * num ;
		cout << square << endl;

		cout << "Enter more integers: " << endl;
		cin >> num;
	 }


	 system("pause");
	 return 0;
}
