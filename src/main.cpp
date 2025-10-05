#include "iostream"
#include "Maze.h"

int main()
{   
    int choice = 1;    
    do
    {
        char (*CurrentMap)[16];
        Maze maze;
        maze.Menu(choice,CurrentMap);
        
        while(maze.JudgeWin(CurrentMap))
        {
            maze.map.Move(CurrentMap);
        }
        std::cout<<"输入0再次进行游戏\n";
        std::cin>>choice;
    }while(choice == 0);
}