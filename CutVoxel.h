#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class CutVoxel:public FiguraGeometrica
{
    public:
        CutVoxel(int x0=0,int y0=0,int z0=0);
        virtual ~CutVoxel();
        void Drawn(Sculptor &t);
    protected:
         int x0,y0,z0;
    private:
};

#endif // CUTVOXEL_H
