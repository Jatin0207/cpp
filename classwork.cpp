#include<iostream>
using namespace std;
int f1 (int n)
{
	if (n <= 1)
		return 1;
	else
		return n + f1(n-1);
}
// 2
int f2 (int x, int y)
{
	if (y == 1)
		return x;
	else
		return x + f2(x, y-1);
}

int main()
{

	cout << f2(5,4) << endl;
	system("pause");
	return 0;

}
