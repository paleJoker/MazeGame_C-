#include "Map.h"
#include "windows.h"
#include "iostream"
#include "conio.h"


void Map::MapShow(char (*CurrentMap)[16])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<16;j++)
            {   
                if(flag[i][j] == 1)
                {
                    std::cout<<CurrentMap[i][j];
                }
                else
                {
                    std::cout<<' ';
                }
            }
        std::cout<<"\n";
    }
    
}

void Map::FindStart(char (*CurrentMap)[16])
{
    int i;
    int j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<16;j++)
        {
            if(CurrentMap[i][j] == 'O')
            {
                x = i;
                y = j;
                break;
            }
        }
        if(CurrentMap[i][j] == 'O')
        break;
    }
}

void Map::ConfirmMap(int choice,char (*&CurrentMap)[16])
{
    if (choice == 1) 
    CurrentMap = Map1;
    else if (choice == 2) 
    CurrentMap = Map2;
}

void Map::Move(int &choice,char (*CurrentMap)[16])
{   
    char key;
    key = getch();
    switch(key)
    {
        case 'w':
            if(x>0 && (CurrentMap[x-1][y] == ' '||CurrentMap[x-1][y] == 'X'))
                {
                    if(CurrentMap[x-1][y] == 'X')
                    player.TakeDamage(choice);
                    CurrentMap[x-1][y] = 'O';
                    CurrentMap[x][y] = ' ';
                    x--;
                }
            break;
        case 'a':
            if(y>0 && (CurrentMap[x][y-1] == ' '||CurrentMap[x][y-1] == 'X'))
                {
                    if(CurrentMap[x][y-1] == 'X')
                    player.TakeDamage(choice);
                    CurrentMap[x][y-1] = 'O';
                    CurrentMap[x][y] = ' ';
                    y--;
                }
            break;
        case 's':
            if(x<9 && (CurrentMap[x+1][y] == ' '||CurrentMap[x+1][y] == 'X'))
                {
                    if(CurrentMap[x+1][y] == 'X')
                    player.TakeDamage(choice);
                    CurrentMap[x+1][y] = 'O';
                    CurrentMap[x][y] = ' ';
                    x++;
                }
            break;
        case 'd':
            if(y<15 && (CurrentMap[x][y+1] == ' '||CurrentMap[x][y+1] == 'X'))
                {
                    if(CurrentMap[x][y+1] == 'X')
                    player.TakeDamage(choice);
                    CurrentMap[x][y+1] = 'O';
                    CurrentMap[x][y] = ' ';
                    y++;
                }
            break;
        default:
            break;
    
    }
    AddView();
    if(choice != 0)
    {
    system("cls");
    MapShow(CurrentMap);
    }
}

void Map::AddView()
{
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(x-2+i>=0 && x-2+i<10 && y-2+j>=0 &&y-2+j <15)
            {
                flag[x-2+i][y-2+j]=1;
            }
        }
    }
}