#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class CutEllipsoid:public FiguraGeometrica
{
    public:
        CutEllipsoid(int x0=0,int y0=0,int z0=0,float rx=1,float ry=1,float rz=1);
        virtual ~CutEllipsoid();
        void Drawn(Sculptor &t);
    protected:
        int x0,y0,z0,rx,ry,rz;
};

#endif // CUTELLIPSOID_H
