#include <iostream>
#include <windows.h>
using namespace std;
void sam(int number1, int number2);
main()
{
int number1,number2;
cout<<"enter number 1"<<endl;
cin>>number1;
cout<<"enter number 2"<<endl;
cin>>number2;
sam(number1,number2);
}
void sam(int number1, int number2)
{
if(number1==number2)
{ 
cout<<"TRUE ";
}
if(number1!=number2)
{
cout<<"FALSE ";
}
}