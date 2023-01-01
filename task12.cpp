#include <iostream>
#include <windows.h>
using namespace std;
void flower(float redq, float whiteq,float tulipsq);
main()
{
float redq,whiteq,tulipsq;
while(true)
{
cout<<"enter red rose quantity : "<<endl;
cin>>redq;
cout<<"enter white rose quantity : "<<endl;
cin>>whiteq;
cout<<"enter tulips rose  quantity: "<<endl;
cin>>tulipsq;
flower(redq,whiteq,tulipsq);
}
}
void flower(float redq, float whiteq,float tulipsq)
{
float rose1,rose2,rose3; 
float red=2.00;
float white=4.10;
float tulips=2.50;
float totalPrice;
float priceAfterDiscount;
rose1=red*redq;
rose2=white*whiteq;
rose3=tulips*tulipsq;
totalPrice=rose1+rose2+rose3; 
cout<<"TOTAL PRICE : "<<totalPrice<<endl;
if(totalPrice>200)
{
float discount;
discount=0.20*totalPrice;
priceAfterDiscount=totalPrice-discount;
cout<<"Price After Discount : "<<priceAfterDiscount<<endl;
}
}