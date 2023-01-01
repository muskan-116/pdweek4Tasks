#include <iostream>
#include <windows.h>
using namespace std;
void add(string name, string input);
main()
{
string name,input;
cout<<"enter name ";
cin>>name;
cout<<"input ";
cin>>input;
add(name, input);
}
void add(string name,string input)
{
if(name==input)
{
cout<<"FALSE";
}
if(name!=input)
{
cout<<"TRUE";
}
}