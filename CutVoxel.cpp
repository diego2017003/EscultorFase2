#include "CutVoxel.h"
#include "sculptor.h"
CutVoxel::CutVoxel(int x0,int y0,int z0)
{
    this->x0= x0;
    this->y0=y0;
    this->z0=z0;
}
CutVoxel::~CutVoxel()
{
    //dtor
}
void CutVoxel::Drawn(Sculptor &t){
    t.cutVoxel(x0,y0,z0);
}
