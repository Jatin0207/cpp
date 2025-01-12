#include<iostream>
using namespace std;
int main()
{
	int i = 0,noOfQuestions=0, questionSolvedOnDayOne=2;
	while (i<30)
	{
		noOfQuestions+=questionSolvedOnDayOne;
		questionSolvedOnDayOne+=2;
		i++;
	}
	cout << "The total questions tommy solved are " << noOfQuestions << endl;
	system("pause");
	return 0;
}
