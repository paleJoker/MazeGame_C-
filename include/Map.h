#pragma once
#include "string.h"

class Map
{
    private:
    int x;
    int y;
    public:
    char Map1[10][16] = 
    {"###############",
     "#  ###       ##",
     "#    # ## ##   ",
     "# #    ## #####",
     "#   ####      #",
     "### #### ## # #",
     "#      #### ###",
     "# #### ##    ##",
     "#    #    ##  #",
     "#############O#",};
    char Map2[10][16] = 
    {"###############",
     "##       #  # O",
     "## ##### #    #",
     "#       ## ####",
     "### ## ##     #",
     "#   #  ##  #  #",
     "# ###      #  #",
     "#   #   #### ##",
     "      ##      #",
     "###############",};
    void MapShow(char (*CurrentMap)[16]);
    void FindStart(char (*CurrentMap)[16]);
    void Move(char (*CurrentMap)[16]);
    void ConfirmMap(int choice,char (*&CurrentMap)[16]);
};