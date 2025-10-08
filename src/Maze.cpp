#include "Maze.h"
#include "Map.h"

void Maze::Menu(int &choice,char (*&CurrentMap)[16])
{
    std::cout<<"*************************************\n";
    std::cout<<"欢迎进行迷宫游玩\n";
    std::cout<<"在这里#代表墙壁,O代表你所处位置,X代表陷阱\n";
    std::cout<<"使用wasd进行上下移动\n";
    std::cout<<"请选择你要游玩的地图\n";
    std::cout<<"1:地图1\n";
    std::cout<<"2:地图2\n";
    std::cout<<"*************************************\n";
    std::cin>>choice;
    map.ConfirmMap(choice,CurrentMap);
    map.FindStart(CurrentMap);
    map.AddView();
    map.MapShow(CurrentMap);

}

int Maze::JudgeWin(char (*CurrentMap)[16])
{   

    if(CurrentMap[2][14] == 'O')
    {
        std::cout<<"恭喜你，游戏胜利！\n";
        return 0;
    }
    

    
    if(CurrentMap[8][0] == 'O')
    {   std::cout<<"恭喜你，游戏胜利！\n";
        return 0;
    }
    
    return 1;
}