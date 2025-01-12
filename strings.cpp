#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int cstringlength( char*S)
{
	int index = 0;
	while(S[index]!=NULL)
		index++;
	return index;

}
int myStrcmp(char* s1, char* s2)
{
	int length = cstringlength(s1);
	int length2 = cstringlength(s2);
	for(int i = 0; i < length || i < length2;i++)
	{
		if(s1[i] > s2[i])
			return 1;
		else if(s1[i] < s2[i])
			return -1;
	}
	return 0;





}
char*initials_1(char*s1,char*s2)
{
	int len = strlen(s1);
	char* ans = new char[len];
	ans[0] = s1[0];
	ans[1] = '.';
	ans[len-2] = s2[0];
	ans[len-1] = '.';
	ans[len] = NULL;

	return ans;
}
char* initials_2(char*s1)\
{
	int len = strlen(s1);
	char* ans = new char[len];
	ans[0] = s1[0];
	ans[1] = '.';
	for(int i = 0; i < len;i++)
		if(s1[i] == ' ')
			ans[2] = s1[i+1];
	ans[3] = '.';
	ans[4] = NULL;
	return ans;

}
void changeFirstchar(string& str)
{
	str[0] = str[0] - 32;
	



}
int main()
{
	 string name = "martin";
	 changeFirstchar(name);
	 cout << name << endl;

	 

	system("pause");
	return 0;

}
