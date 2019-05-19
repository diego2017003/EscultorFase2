#include "CutBox.h"
#include "sculptor.h"
CutBox::CutBox(int x0,int x1,int y0,int y1,int z0,int z1)
{
    this->x0= x0;
    this->x1=x1;
    this->y0=y0;
    this->y1=y1;
    this->z0=z0;
    this->z1=z1;
}

CutBox::~CutBox()
{
    //dtor
}
void CutBox::Drawn(Sculptor &t){
        t.testaEntrada(x0,y0,z0);
        t.testaEntrada(x1,y1,z1);
        if(x0>x1){
                int a;
                a=x0;
                x0=x1;
                x1=a;
        }
        if(y0>y1){
                int a;
                a=y0;
                y0=y1;
                y1=a;
        }
        if(z0>z1){
                int a;
                a=z0;
                z0=z1;
                z1=a;
        }
        for(int i=x0;i<=x1;i++){
            for(int j=y0;j<=y1;j++){
                for(int k = z0;k<=z1;k++){
                    t.cutVoxel(i,j,k);
                }
            }
        }
}
