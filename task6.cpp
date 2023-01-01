#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printname();
void printb();
void printd();
void printe();
main()
{
system("cls");
printname();
printb();
printname();
printd();
printe();
}
void printname()
{
cout<<"    @@@   "<<endl;
cout<<"  @@   @@  "<<endl;
cout<<"  @@   @@    "<<endl;
cout<<"  @@@@@@@      "<<endl;
cout<<"  @@   @@  "<<endl;
cout<<"  @@   @@   "<<endl;
cout<<"  @@   @@   "<<endl;
cout<<"  @@   @@   "<<endl;
cout<<"          "<<endl;
}
void printb()
{
cout<<" @@              @@                                     "<<endl;
cout<<" @@              @@                                      "<<endl;
cout<<" @@              @@                          "<<endl;
cout<<" @@              @@                          "<<endl;
cout<<" @@      @@      @@                                      "<<endl;
cout<<" @@     @@ @@    @@                                   "<<endl;
cout<<" @@    @@   @@   @@                             "<<endl;
cout<<" @@   @@     @@  @@                                "<<endl;
cout<<"   @@          @@     "<<endl;
cout<<"          "<<endl;  
}

void printd()
{
cout<<"   @@@@@@@@@@@@@@@@    "<<endl;
cout<<"          @@           "<<endl;
cout<<"          @@                "<<endl;
cout<<"          @@                 "<<endl;
cout<<"          @@               "<<endl;
cout<<"          @@                   "<<endl;
cout<<"          @@                        "<<endl;
cout<<"          @@                      "<<endl;
cout<<"   @@@@@@@@@@@@@@@@                         "<<endl;
cout<<"          "<<endl;

}
void printe()
{
cout<<"       @@@@@@@@@@@@@@@@@                            "<<endl;
cout<<"      @@               @@                        "<<endl;
cout<<"     @@                                              "<<endl;
cout<<"    @@                                         "<<endl;
cout<<"       @@@@@@@@@@@@@@@@@@                                                        "<<endl;
cout<<"                          @@                               "<<endl;
cout<<"                          @@                "<<endl;
cout<<"    @@                    @@        "<<endl;
cout<<"     @@@@@@@@@@@@@@@@@@@@@@@                                                      "<<endl;
cout<<"          "<<endl;
}

void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}