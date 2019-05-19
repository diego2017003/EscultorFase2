#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class PutVoxel:public FiguraGeometrica
{
    public:
        PutVoxel(int x0=0,int y0=0,int z0=0,float r=0,float g=0,float b=0,float a=0);
        virtual ~PutVoxel();
        void Drawn(Sculptor &t);
    protected:
         int x0,y0,z0;
         float r,g,b,a;
    private:
};

#endif // PUTVOXEL_H
