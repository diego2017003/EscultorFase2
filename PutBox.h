#ifndef PUTBOX_H
#define PUTBOX_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class PutBox:public FiguraGeometrica
{
    public:
        PutBox(int x0=0,int x1=0,int y0=0,int y1=0,int z0=0,int z1=0,float r=0,float g=0,float b=0,float a=0);
        virtual ~PutBox();
        void Drawn(Sculptor &t);
    protected:
         int x0,x1,y0,y1,z0,z1;
         float r,g,b,a;
};

#endif // PUTBOX_H
