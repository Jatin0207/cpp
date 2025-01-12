#include<iostream>
using namespace std;
int main(){
	int temp;
	int first=7;
	int second=5;
	if(!(first<second)){
		temp=first;
		first=second;
		second =temp;
	}
	cout << "The value of first is: " << first << " and second is: " << second << endl;
	system("pause");
	return 0;
}
