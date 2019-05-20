#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "sculptor.h"
#include "FiguraGeometrica.h"
class PutSphere:public FiguraGeometrica
{
    public:
        PutSphere(int x0=0,float y0=0,float z0=0,float raio=0,float r=0,float g=0,float b=0,float a=0);
        virtual ~PutSphere();
        void Drawn(Sculptor &t);
    protected:
         int x0,y0,z0;
         float raio,r,g,b,a;
    private:
};

#endif // PUTSPHERE_H
