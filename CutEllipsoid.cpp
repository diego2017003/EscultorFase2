#include "CutEllipsoid.h"
#include "sculptor.h"
#include<cmath>
#include<cstdlib>
CutEllipsoid::CutEllipsoid(int x0,int y0,int z0,float rx,float ry,float rz)
{
    this->x0=x0;
    this->y0=y0;
    this->z0=z0;
    this->rx=rx;
    this->ry=ry;
    this->rz=rz;
}

CutEllipsoid::~CutEllipsoid()
{
    //dtor
}
void CutEllipsoid::Drawn(Sculptor &t){
    t.testaEntrada(x0,y0,z0);
    //t.cutEllipsoid(x0,y0,z0,rx,ry,rz);
    int x,x1,y,y1,z,z1;
    x=x0-rx;
    x1=x0+rx;
    y=y0-ry;
    y1=y0+ry;
    z=z0-rz;
    z1=z0+rz;
    t.testaEntrada(x,y,z);
    t.dimensao(x1,y1,z1);
     for(int i=0;i<x1;i++){
            for(int j=0;j<y1;j++){
                for(int k=0;k<z1;k++){
                   if(sqrt(((i-x0)*(i-x0)/(rx*rx))+((j-y0)*(j-y0)/(ry*ry))+((k-z0)*(k-z0)/(rz*rz)))<=1){
                        t.cutVoxel(i,j,k);
                    }
                }
            }
        }
}
