#pragma once
#include "string.h"
#include "Player.h"

class Map
{
    private:
    int x;
    int y;
    Player player;
    public:
    char Map1[10][16] = 
    {"###############",
     "#  ###       X#",
     "#   X# ## #X   ",
     "# #    ## #####",
     "#   ####      #",
     "##X #### ## # #",
     "#      #### ###",
     "# #X## ##    ##",
     "#    #    ##  #",
     "#############O#",};
    char Map2[10][16] = 
    {"###############",
     "##       #  # O",
     "## X#### #    #",
     "#       ## X###",
     "##X ## ##     #",
     "#   #  ##  #  #",
     "# ###      #  #",
     "#   X   ###X ##",
     "      X#      #",
     "###############",};
    void MapShow(char (*CurrentMap)[16]);
    void FindStart(char (*CurrentMap)[16]);
    void Move(int &choice,char (*CurrentMap)[16]);
    void ConfirmMap(int choice,char (*&CurrentMap)[16]);

};