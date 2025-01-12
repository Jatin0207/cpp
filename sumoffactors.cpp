#include<iostream>
using namespace std;
int main ()
{
	//Output all factors of 120
	bool flag=true;
	int g=1;
	int sumOfFactors=0;
	while(g<=120)
	{
		if(120 % g==0) //120 modulo g not g modulo 120
		{
			
			sumOfFactors += g;
		}
		
		g++;
	}
	
	cout << sumOfFactors << endl;
	system("pause");
	return 0;
}
