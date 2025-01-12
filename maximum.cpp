#include<iostream>
using namespace std;
int main(){
	double num1, num2, maximum;
	num1=2.5,num2=4.5;
	maximum=num1;
	maximum=(num2>maximum)?num2:maximum;
	cout << "Maximum is " << maximum << endl;
	system("pause");
	return 0;
}
