#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int);
void printmaze();
void playmove(int x, int y);

main()
{
system("cls");
printmaze();
int x = 29;
int y = 9;
gotoxy(x,y);
cout<<" ";
x=3;
y=16;
while(true)
{
playmove( x,y);
if(x<65)
{
x=x+1;
}
if(x==65)
{
gotoxy(x-1,y);
cout<<" ";
x=3;
}
}
}


void printmaze()


{
cout<<"###################################################################"<<endl;
cout<<"||.. ................................................  .........  ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%    ...   %%%%%%%%%%%%%% |%| ..   %%%%%%%    ||"<<endl;
cout<<"||..      |%|     |%| |%|...  |%|             |%| ..      |%|     ||"<<endl;
cout<<"||..      |%|     |%| |%|...  |%|             |%| ..      |%|     ||"<<endl;
cout<<"||..       %%%%%%%%% ..  |%|...   %%%%%%%%%%%%%%%%%  ..   %%%%%%  ||"<<endl;
cout<<"||..       |%|       ..  |%|...     ............. |%|..           ||"<<endl;
cout<<"||..       %%%%%%%%%%..  |%|...     %%%%%%%%%%%%  |%|..   %%%%%%%.||"<<endl;
cout<<"||..              |%|.              |%|......     |%|..       |%|.||"<<endl;
cout<<"||..    ......... |%|.       P      |%|......|%|     ..       |%|.||"<<endl;                                                                                                                                                                                                                                            
cout<<"||..|%| |%|%%%|%|.|%|. |%|             ......|%|     ..|%|        ||"<<endl;
cout<<"||..|%| |%|   |%|..    %%%%%%%%%%%%%   ......|%|      .|%|.       ||"<<endl;
cout<<"||..|%| |%|   |%|..           ...|%|     %%%%%%%     . |%|.       ||"<<endl;
cout<<"||..|%|           .           ...|%|             |%| ..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%% |%| ..|%|%%%%%%  ||"<<endl;
cout<<"||...............................................|%| ...........  ||"<<endl;
cout<<"||   ............................................         ......  ||"<<endl;
cout<<"||..|%| |%|  |%|..       %%%%%%%%%%%   ......|%| |%| ..|%|.       ||"<<endl;
cout<<"||..|%| |%|  |%|..            ...|%|      %%%%%% |%| ..|%|.       ||"<<endl; 
cout<<"||..|%|          .       G    ...|%|             |%| ..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%  |%| ..|%|%%%%%%  ||"<<endl;
cout<<"||.............................................     ............. ||"<<endl;
cout<<"||.............................................          ........ ||"<<endl; 
cout<<"####################################################################"<<endl;
}
void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playmove(int x, int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}

