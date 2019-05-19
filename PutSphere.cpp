#include "PutSphere.h"
#include "sculptor.h"
#include<cmath>
#include<cstdlib>
PutSphere::PutSphere(int x0,float y0,float z0,float raio,float r,float g,float b,float a)
{
    this->x0= x0;
    this->y0=y0;
    this->z0=z0;
    this->raio=raio;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}

PutSphere::~PutSphere()
{
    //dtor
}
void PutSphere::Drawn(Sculptor &t){
    t.testaEntrada(x0,y0,z0);
    int x,x1,y,y1,z,z1;
    t.setColor(r,g,b,a);
    x=x0-raio;
    x1=x0+raio;
    y=y0-raio;
    y1=y0+raio;
    z=z0-raio;
    z1=z0+raio;
    t.testaEntrada(x,y,z);
    t.testaEntrada(x1,y1,z1);
    for(int i=x;i<x1;i++){
            for(int j=y;j<y1;j++){
                for(int k=z;k<z1;k++){
                    if(((i-x0)*(i-x0)+(j-y0)*(j-y0)+(k-z0)*(k-z0))<=raio*raio){
                        t.putVoxel(i,j,k);
                    }

                }
            }
        }
}
