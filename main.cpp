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
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune...\n";
  //tell fortune
lucky = first.length();
cout<<"your lucky number is "<<lucky<<"\n";
if (first[0] == 97 || first[0] == 65 || first[0] == 69 || first[0] == 101 || first[0] == 73 || first[0] == 105 || first[0] == 79 || first[0] == 111 || first[0] == 87 || first[0] == 117)
{
cout<<"you are destined to be famous!\n";
}
else if ( !(first[0] == 97 || first[0] == 65 || first[0] == 69 || first[0] == 101 || first[0] == 73 || first[0] == 105 || first[0] == 79 || first[0] == 101 || first[0] == 87 || first[0] == 117) )
{
cout<<"you should keep a low profile.\n";
}
if (last.length()-1 == 97 || last.length()-1 == 65 || last.length()-1 == 69 || last.length()-1 == 101 || last.length()-1 == 73 || last.length()-1 == 105 || last.length()-1 == 79 || last.length()-1 == 111 || last.length()-1 == 87 || last.length()-1 == 117)
{
cout<<"you have already met your true love.\n";
}
cout<<"have a good day!\n";
return 0;
}
