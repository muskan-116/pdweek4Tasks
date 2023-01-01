#include <iostream>
#include <windows.h>
using namespace std;
void pak(int ticket, float discount);
void ireland(int ticket,float  discount);
void india(int ticket, float discount);
void england(int ticket, float discount);
void canada(int ticket, float discount);
  
main()
{
int ticket;
float discount;
while(true)
{
pak(ticket,discount);
ireland(ticket,discount);
india(ticket,discount);
england(ticket,discount);
canada(ticket,discount);
}
}
void pak(int ticket, float discount)
{
int token;
float offsale;
cout<<"PAKISTAN"<<endl;
cout<<"enter ticket price ";
cin>>token;
offsale=0.05*token;
cout<<"total discount : "<<offsale<<endl;
}
void ireland(int ticket, float discount)
{
int token;
float offsale;
cout<<"IRELAND"<<endl;
cout<<"enter ticket price ";
cin>>token;
 offsale=0.1*token;
cout<<"total discount : "<< offsale<<endl;
}
void india(int ticket, float discount)
{
int token;
float offsale;
cout<<"INDIA"<<endl;
cout<<"enter ticket price ";
cin>>token;
offsale=0.2*token;
cout<<"total discount : "<<offsale<<endl;
}
void england(int ticket, float discount)
{
int token;
float offsale;
cout<<"england"<<endl;
cout<<"enter ticket price ";
cin>>token;
offsale=0.3*token;
cout<<"total discount : "<<offsale<<endl;
}
void canada(int ticket, float discount)
{
int token;
float offsale; 
cout<<"CANADA"<<endl;
cout<<"enter ticket price ";
cin>>token;
offsale=0.45*token;
cout<<"total discount : "<<offsale<<endl;
}
