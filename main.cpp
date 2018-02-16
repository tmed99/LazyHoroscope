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
if (first[0] == 97 || first[0] == 65 || first[0] == 69 || first[0] == 101 || first[0] == 73 || first[0] == 105 || first[0] == 79 || first[0] == 111 || first[0] == 87 || first[0] == 117)
{
cout<<"you are destined to be famous!\n";
}
else 
{
cout<<"you should keep a low profile.\n";
}
if (lucky-1 == 97 || lucky-1 == 65 || lucky-1 == 69 || lucky-1 == 101 || lucky-1 == 73 || lucky-1 == 105 || lucky-1 == 79 || lucky-1 == 111 || lucky-1 == 87 || lucky-1 == 117)
{
cout<<"you have already met your true love.\n";
}
cout<<"have a good day!\n";
return 0;
}
