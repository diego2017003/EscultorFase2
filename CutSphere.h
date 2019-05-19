#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class CutSphere:public FiguraGeometrica
{
    public:
        CutSphere(int x0=0,int y0=0,int z0=0,int raio=0);
        virtual ~CutSphere();
        void Drawn(Sculptor &t);
    protected:
        int x0,y0,z0,raio;
    private:
};

#endif // CUTSPHERE_H
