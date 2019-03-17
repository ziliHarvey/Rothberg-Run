#include "drawPlayer.h"

void DrawPlayer::draw()
{
    
}

DrawPlayer::DrawPlayer(GamePlayer &player)
{
    YsVec3& posVec = player.getPosition();
    setVtxList(posVec);
    setColList();
}
DrawPlayer::~DrawPlayer()
{

}

void DrawPlayer::toString()
{
    printf("Player current position: x:%lf  y:%lf  z:%lf\n", vtx[0], vtx[1], vtx[2]);
}

void DrawPlayer::setVtxList(YsVec3 posVec)
{
    vtx.push_back(posVec[0]);
    vtx.push_back(posVec[1]);
    vtx.push_back(posVec[2]);
}

void DrawPlayer::setColList()
{
    col.push_back(0.0f);
    col.push_back(1.0f);
    col.push_back(0.0f);
    col.push_back(1.0f);
}



