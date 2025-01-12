#include<iostream>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int randint= rand()%10+1;
	int guess;
	cout << "Enter a guess" << endl;
	cin >> guess;
	if(guess==randint)
		cout << "Wow you guessed it" << endl;
	else
		cout << "Unclucky wrong guess" << endl;


	cout << "The random number was :" << randint << endl;
	system("pause");
	return 0;
}
