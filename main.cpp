//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int lucky;
  //get user input
cout<<"What is your first name?\n";
cin>> first;
cout<<"What is your last name?\n";
cin>> last;
  //tell fortune
  cout<<"Welcome,"<<first[0]<<"."<<last[0]<<"., here is your fortune...\n";
  //tell fortune
lucky = first.length();
cout<<"Your lucky number is "<<lucky<<".\n";
if (first[0] == 97 || first[0] == 65) 
|| (first[0] == 69 || first[0] == 101) 
|| (first[0] == 73 || first[0] == 105) 
|| (first[0] == 79 || first[0] == 111) 
|| (first[0] == 87 || first[0] == 117)
{
cout<<"you are destined to be famous!\n";
}
else 
{
cout<<"you should keep a low profile.\n";
}
if (last[4] == 97 || last[4] == 65) 
|| (last[4] == 69 || last[4] == 101) 
|| (last[4] == 73 || last[4] == 105) 
|| (last[4] == 79 || last[4] == 111) 
|| (last[4] == 87 || last[4] == 117)
{
cout<<"you have already met your true love.\n";
}
cout<<"have a good day!";<<endl;
return 0;
}
