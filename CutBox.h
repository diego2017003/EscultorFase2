#ifndef CUTBOX_H
#define CUTBOX_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class CutBox:public FiguraGeometrica
{
    public:
        CutBox(int x0=0,int x1=0,int y0=0,int y1=0,int z0=0,int z1=0);
        virtual ~CutBox();
        void Drawn(Sculptor &t);
    protected:
        int x0,x1,y0,y1,z0,z1;

};

#endif // CUTBOX_H
