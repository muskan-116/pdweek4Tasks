#include <iostream>
#include <windows.h>
using namespace std;
void run(int race);
main()
{
int race;
while(true)
{
cout<<"enter SPEED : "<<endl;
cin>>race;
run(race);
}
}
void run(int race)
{
if(race>100)
{
cout<<"Halt....YOU WILL BE CHALLENGED!!!"<<endl;
}
if(race<100)
{
cout<<"PERFECT.......YOU ARE GOING GOOD"<<endl;
}
}