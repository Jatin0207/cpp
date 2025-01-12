#include<iostream>
#include<ctime>
#include<ctime>
using namespace std;
//void check_score (int score) // same function as in Week 5 Practice 2
//{
	/*if (score < 0 || score > 100)
	cout << score << " is out of range" << endl;
	else if (score >= 80)
	cout << score << " is good" << endl;
	else if (score >= 60)
	cout << score << " is average" << endl;
	else
	cout << score << " needs improvement" << endl;
}
int main()
{
	int score,numOfScores;
	 
	cout << "How many scores do you want to check ? " << endl;
	cin >> numOfScores;
	 
	for ( int i = 1; i <= numOfScores; i++)
	{
		cout << "Enter Score " << i << endl;
		cin >> score;
		check_score(score);

	}
	cout << "Done" << endl;*/
	/*system("pause");
	return 0;
}*/

//int main()
//{
//
//	srand( (unsigned)time(0) );
//	int randint = rand() % 10 + 1;
//	int maxNumGuesses;
//	cout << "How many guesses? ";
//	cin >> maxNumGuesses;
//	int i = 1, guess;
//	do
//	{
//		cout << "Enter guess " << i << ": ";
//		cin >> guess;
//		++i;
//	}
//	while (i <= maxNumGuesses && guess != randint);
//	// when we get here, either the guess is right, or, we ran out of max guess times. 
//	// we need to check which case it is, then output a corresponding message.
//	if (guess == randint)
//	cout << "Got it.\nThe random number is " << randint << endl;
//	else
//	cout << "No luck.\nThe random number is " << randint << endl;
// 
//
//
//
//
//	system("pause");
//	return 0;
//	 
//
//}
//int sum(int num)
//{
//
//	int total = 0;
//	for(int i = 1; i <= num ; i++)
//	{
//		total +=i;
//	}
//
//	return total;
//
//}
// int main()
// {
//	  int num1;
//	  cout << "Enter the integer uptil the number whose sum u want" << endl;
//	  cin >> num1;
//	  int num = sum(num1);
//	  cout << " The sum is: " << num << endl;
//
//	  system("pause");
//	  return 0;
//
//
//
//
//
//
//
//
// }
// version 5 � there will be a warning for this version
//int largestFactor(int num)
//{
//	for (int candidate = num/2 ; candidate >= 1; candidate--)
//	if (num % candidate == 0)
//	return candidate;
//}
//Question 5
//
//Question 6 Pattern 1
//int main()
//{
//	int rows,columns;
//	cin >> rows;
//	cin >> columns;
//	for(int i = 0; i < rows; i++)
//	{ 
//		for(int j = 0 ; j < columns; j++)
//		cout << "* ";
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
// Question 6 Pattern 2
//int main()
//{
//	int rows,columns;
//	cin >> rows >> columns;
//	int i = 0;
//	while(i < rows)
//	{
//		int j = 0;
//		while(j<=i)
//		{
//			cout << "* ";
//			j++;
//		
//		}
//		cout << endl;
//		i++;
//	
//	}
//	
//
//
//	system("pause");
//	return 0;
//}
//int gcd(int num, int num1) //Pre Condition num,num1>0
//{
//	int temp;
//	if(num1 > num)
//	{
//		temp = num1;
//		num1 = num;
//		num = temp;
//	
//	}
//	int m = num;
//	int n = num1;
//	int remainder;
//	remainder = m%n;
//	 
//	 
//	 
//	while(remainder!=0)
//	{
//		
//	 
//		m = n;
//		n = remainder;
//		remainder = m%n;
//	}
//	 
//	return n;
//}
//Question 9
 //bool check_prime( int num) //Precondition num > 1
 //{
 //  for(int i = 2; i < num;i++)
 //  {
	//   if(num % i==0)
	//	   return false;
	//   else
	//	   return true;
 //  
 //  }
 //
 //}


//Question10
int reversedInteger(int num)
{
	int answer = 0;
	do
	{
		int digit = num % 10;
		answer = answer * 10 + digit;
		num /=10;
	}while(abs(num) > 0);
	return answer;



}
int main()
{
	int answer = reversedInteger(6453);
		cout << answer << endl;
	system("pause");
	return 0;
}

 
