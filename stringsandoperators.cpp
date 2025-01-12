#include<iostream>
using namespace std;
class String
{
private:
char* str;
int len;
public:
String();
String(char * str);
~String();
String(const String& s);
bool empty();
friend ostream& operator << (ostream& outs, const String& s1);
bool operator==(const String& s1);
String& operator=(const String& s);
char& operator[](const  int& index)const;
int length()const;
String operator+(const String& s);
String upper();
int position(char ch);
String& operator+=(const char & ch);
String& operator+=(const String& s);
String substr(int start_index,int end_index);
int substring(const String& s);
//int substring(const char*arr);
};
String::String()
{
len = 0;
str = new char[len+1];
str[0] = NULL;
}
String::String(char* str)
{
int count = 0;
while(str[count]!=NULL)
count++;
len = count;
this->str = new char[len+1];
 for(int i = 0; i < this->len;i++)
 this->str[i] = str[i];

}
String::~String()
{
delete [] str;
}
bool String::empty()
{
if(len==0)
return true;
else
return false;
}
ostream& operator<<(ostream& outs,const String& s1)
{
for(int i = 0;i < s1.len;i++)
{
outs << s1.str[i];
}
return outs;
}
String& String::operator=(const String& s)
{
if(this == &s)
return *this;
this->~String();
this->len = s.len;
this->str = new char[len+1];
for(int i = 0;i < this->len;i++)
str[i] = s[i];
return  *this;

}
bool String::operator==(const String& s1)
{
bool answer = false;
for(int i = 0;i < s1.len;i++)
if(str[i] == s1.str[i])
answer = true;
return answer;
}
 
String ::String(const  String& s)
{
int length =  s.len;
str = new char[length+1];
for(int i = 0; i < length;i++)
{
str[i] = s.str[i];
}
}
char& String::operator[](const  int& index)const
{

return this->str[index];

}
int String::length()const
{
return len;

}
String String::operator+(const String& s)
{
int length = s.len + len;
char* temp = new char[length + 1];
int index = 0;
for(int i = 0; i < len;i++)
temp[index++] = str[i];
for(int k = 0; k < s.len;k++)
temp[index++] = s.str[k];
temp[index] = NULL;
return String(temp);
}
 String String::upper()
{
char *temp = new char[len+1];
int index = 0;
for(int i = 0; i < len;i++)
if(str[i] >= 'a' && str[i] <= 'z')
temp[index++] = str[i] - 32;
else
temp[index++] = str[i];
temp[index] = NULL;
return String(temp);
}
 int String::position(char ch)
 {
int index = -1;
for(int i = 0; i < len;i++)
if(str[i] == ch)
return i;
return index;

 }
 String& String::operator+=(const char& ch )
 {
len = len + 1;
char* temp = new char [len + 1];
int index = 0;
for(int i = 0; i < len - 1;i++)
temp[index++] = str[i];
temp[index++] = ch;
temp[index] = NULL;
str = temp;
return*this;
}
String& String::operator+=(const String& s)
 {
 *this = *this + s;
 return*this;
 }
String String::substr(int start_index,int end_index)
 {
if(end_index > len)
{
char*temp = new char[len +1];
int i = 0;
int index = 0;
while(i + start_index < len)
{
temp[index++] = str[i + start_index];
i++;
}
temp[index] = NULL;
return String(temp);
}
else if(end_index > start_index)
{
char* temp = new char[end_index + 1];
int i = 0;
int index = 0;
while(i < end_index)
{
temp[index++] = str[i + start_index];
i++;
}
temp[index] = NULL;
 
return String(temp) ;
}
else if(start_index > len)
{
 char* temp = new char(NULL);
 return String(temp);

}
else
{
char*temp = new char[end_index + 1];
int index = 0;
temp[index++] = str[start_index];
temp[index] = NULL;
return String(temp);

}
 }
int String::substring(const String& s)
 {

 /*int length = s.len;
 for(int i = 0; i <=len-length;i++)
 {
 int j;
 for(j = 0; j < length;j++)
 {
 if(s[j]!=str[i+j])
 break;
 if(j==length)
 return i;
 }
 
 }
 return -1;*/
	  
	 /* if(s.len==len && &s!=this)
		 return -1;
	  if(&s==this)
		 return 0;*/
	 if(s.len==len)
	 {
		 if(&s!=this)
			 return -1;
		 else
			 return 0;
	 }
	  if(s.str[0]==NULL)
	 {
		 int i = 0;
		 return i;
	 }

	 for(int i = 0;i < len;i++)
	 {
		 if(str[i]==s.str[0])
		 {
			 int j;
			 for(j =1;j <s.len;j++)
			 {
				 if(s.str[j]!=str[i+j])
					 break;
				 else
					 return i;
			 }
		 }
	 }
	 return -1;
	
 }
  


int main()
{
String s1, s2;
cout << "s1 is empty? " << s1.empty() << endl;
cout << "s2 is empty? " << s2.empty() << endl;
String s3 = "Hello";
s1 = s2 = s3;
cout << s1 << '\t' << s2 << '\t' << s3 << endl;
if (s1 == s2)
cout << "s1 and s2 are equal\n";
else
cout << "s1 and s2 are not equal\n";

s1 = s1;
cout << "\nIs there any problem here? " << s1 << endl << endl;
s2 = "hi";
s3 = s2;
cout << s1 << '\t' << s2 << '\t' << s3 << endl;
cout << "Now s1 is empty? " << s1.empty() << endl;
cout << s1.length() << '\t' << s2.length() << '\t' << s3.length() << endl;
cout << "--------------- 0 ---------------" << endl << endl;

if (s1 == s2)
cout << "They are equal\n";
else
cout << "They are not equal\n";

if (s2 == "Hello")
cout << "They are equal\n";
else
cout << "They are not equal\n";
s1[0] = 'H';
s1[1] = s1[4];
for(int i = 0; i < s3.length(); ++i)
cout << s3[i] << " ";
cout << endl;
cout << "s1 is " << s1 << endl;
cout << "s2 is " << s2 << endl;

cout << "--------------- 1 ---------------" << endl << endl;
String s4;
String space (" ");

s4 = s1 + space + s2;
cout << s4 << endl;

cout << "s4 length is " << s4.length() << endl;
if (s4 == s4)
cout << "s4 equals s4\n";
else
cout << "s4 not equals s4\n";
cout << endl;
s3 = "Monday";
cout << "s3 is " << s3 << endl;
s3 = "";
cout << "s3 is " << s3 << endl;
String friday = "Friday";
s3 = s3 + friday;
cout << "s3 is " << s3 << endl;
s3 = "SundaySunday";
s3 = s3 + "   hahaha";
cout << "s3 is " << s3 << endl;
cout << "--------------- 2 ---------------" << endl << endl;

String s5;
cout << "Do we have output here? " << endl << endl;
for(int i = 0; i < s5.length(); ++i)
cout << s5[i] << '?';

cout << "s4 is " << s4 << endl;
cout << s4.upper() << endl;
cout << s4 << endl;
cout << "The index of l in " << s4 << " is " << s4.position('l') << endl;
cout << "The index of k in " << s4 << " is " << s4.position('k') << endl;

cout << "--------------- 3 ---------------" << endl << endl;
cout << "s1 is: " << s1 << endl;
char char_o = 'o';
s1 += char_o;
String str_o = "o";
s1 += str_o;
cout << "s1 now is: " << s1 << endl;
String str;
cout << "str is " << str << endl;
char ch = 'A';
for(int i = 0; i < 10; ++i)
{
str += ch;
ch++;
}
String more = "...MORE";
str += more;
cout << "Now str is " << str << endl;

cout << "--------------- 4 ---------------" << endl << endl;
cout << "str length: " << str.length() << endl;
cout << "substring starting at 2 with size 5 is " << str.substr(2,5) << endl;
cout << "substring starting at 2 with size 20 is " << str.substr(2,20) << endl;
cout << "substring starting at 7 with size 1 is " << str.substr(7,1) << endl;
cout << "substring starting at 20 with size 5 is " << str.substr(20,5) << "empty string!" << endl;
cout << "--------------- 5 ---------------" << endl << endl;

s3 = "Hi";
int index = s1.substring(s3);
if (index >= 0)
cout << "1) " << s3 << " is a substring of " << s1 << ", starting from index " << index << endl;
else
cout << "1) " << s3 << " is not a substring of " << s1 << endl;

index = s1.substring("lo");
if (index >= 0)
cout << "2) " << "lo is a substring of " << s1 << ", starting from index " << index << endl;
else
cout << "2) " << "lo is not a substring of " << s1 << endl << endl;

String s6;
index = s1.substring(s6);
if (index >= 0)
cout << "3) " << s6 << " is a substring of " << s1 << ", starting from index " << index << endl;
else
cout << "3) " << s6 << " is not a substring of " << s1 << endl;


String s = "aabcccdefefg";
index = s.substring("bdg");
if (index >= 0)
cout << "4) bdg is a substring of " << s << ", starting from index " << index << endl;
else
cout << "4) bdg is not a substring of " << s << endl;

index = s.substring("cde");
if (index >= 0)
cout << "5) cde is a substring of " << s << ", starting from index " << index << endl;
else
cout << "5) cde is not a substring of " << s << endl;

s = "aabc";
s1 = "aabc ";
index = s.substring(s1);
if (index >= 0)
cout << "6) " << s1 << " is a substring of " << s << ", starting from index " << index << endl;
else
cout << "6) " << s1 << " is not a substring of " << s << endl;

index = s.substring(s);
if (index >= 0)
cout << "7) " << s << " is a substring of " << s << ", starting from index " << index << endl;
else
cout << "7) " << s << " is not a substring of " << s << endl;




system("pause");
return 0;
}
