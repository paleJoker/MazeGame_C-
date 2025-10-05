#include "Player.h"


void Player::TakeDamage(int &choice)
{
    Blood--;
    if(Blood == 0)
    {
        choice = 0;
        std::cout<<"很遗憾,血量归零,游戏结束\n";
    }
}