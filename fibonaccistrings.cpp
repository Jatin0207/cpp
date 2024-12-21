#include<iostream>
#include<string>
using namespace std;
string   fibstring(int n)
{
	string s = "";
	string s3;
	string s1,s2;
		if (n == 1)
			s1 = '0';
		else if (n>1)
			s2 = '1';
		 

	for (int i = 0; i < n; i++)
	{
		s = s1 + s2;
		s1 = s2;
		s2 = s;

	}
	return s;
 }
int fibStringIndex(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')
			return 1;
		else if (s[i] == '1')
			return 2;

		else
			return s[i - 2] + s[i - 1];
	}
	return -1;

}
int main()
{
	string s = fibstring(4);
	cout << s << endl;

	system("Pause");
	return 0;
}