#include<iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	if(x<3)
		cout << "small" << endl;
	else if(x<5)
		cout << "medium" << endl;
	else if(x<7)
		cout << "large" << endl;
	else
		cout << "giant" << endl;
	system("pause");
	return 0;
}
