#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);

main()
{
cout<<"test";
gotoxy(29,20);
cout<<"MY NAME IS MUSKAN ";
}
void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


 