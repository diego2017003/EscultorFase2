#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class PutEllipsoid:public FiguraGeometrica
{
    public:
        PutEllipsoid(int x0=0,int y0=0,int z0=0,float rx=1,float ry=1,float rz=1,float r=0,float g=0,float b=0,float a=0);
        virtual ~PutEllipsoid();
        void Drawn(Sculptor &t);
    protected:
         int x0,y0,z0;
         float r,g,b,a,rx,ry,rz;
    private:
};

#endif // PUTELLIPSOID_H
