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
int x=30;
int y=9;
gotoxy(x,y);
cout<<" ";
playmove(x,y);
x=0;
y=23;
gotoxy(x,y);
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
void playmove(int x, int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}

void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

