#pragma once
#include "map.h"
#include "Player.h"
#include "iostream"

class Maze
{
    private:
    public:
    void Menu(int choice,char (*&CurrentMap)[16]);
    int JudgeWin(char (*CurrentMap)[16]);
    Map map;
    
};