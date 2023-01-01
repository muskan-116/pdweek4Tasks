#include <iostream>
using namespace std; 
main()

{
int holidays,workingdaysTime;
int tomSleep=30000;
int numberofdaysInYear=365;
int timeofplayingOnHolidays,timeofplayingOnWorkingdays,timeForgamOnWorkingdays,timeForgamOnHolidays;
int totalTimeforGamePlay,difference;
int timeInHours,remainingMinutes;
cout<<"enter holidays...";
cin>>holidays;
timeofplayingOnWorkingdays=63;
timeofplayingOnHolidays=127;
timeForgamOnWorkingdays=(numberofdaysInYear-holidays)*63;
timeForgamOnHolidays=holidays*127;
totalTimeforGamePlay=timeForgamOnWorkingdays+timeForgamOnHolidays;
difference=30000-totalTimeforGamePlay;
timeInHours=difference/60;
remainingMinutes=difference%60;
cout<<"total difference is....."<<timeInHours<<"hours"<<remainingMinutes<<"minutes"<<endl;
if(totalTimeforGamePlay>30000)
{
cout<<"TOM WILL RUN AWAY";
}
if(totalTimeforGamePlay<30000)
{
cout<<"TOM SLEEP WELL";
}
}
