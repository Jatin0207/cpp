#include<iostream>
using namespace std;
// Slide 8 practice questions
int main()
{
	//Output all positive integers from 1 to 100
	int i=0;
	while(i<=100)
	{
		cout << i << '\t';
		i++;
	}
	cout << endl << endl;
	//Output all integers from 10 down to -10
	int j=10;
	while(j>=-10)
	{
		cout << j << '\t';
		j--;
	}
	cout << endl << endl;
	//Output all odd numbers from 1 to a user intered positive integer
	int k=1;
	int num1;
	cout << "Enter a positive integer until which you want the odd numbers to be calculated :" << endl;
	cin >> num1;
	while(k<=num1)
	{
		if(k%2!=0)
			cout << k << '\t';

		k++;
	}
	cout << endl << endl;
	//Output all factors of 120
	int g=1;
	while(g<=120)
	{
		if(120%g==0) //120 modulo g not g modulo 120
			cout << g << '\t';
		
		
		g++;
	}
