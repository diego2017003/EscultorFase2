#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<sstream>
#include "sculptor.h"
#include "FiguraGeometrica.h"
#include "CutBox.h"
#include "CutSphere.h"
#include "CutEllipsoid.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "PutSphere.h"
#include "PutVoxel.h"
#include "PutEllipsoid.h"
#include<vector>
using namespace std;

int main()
{
  int nx,ny,nz,nx2,ny2,nz2;
  float r,g,b,a;
  vector<FiguraGeometrica*> figs;
  ifstream fin;
  string s,s1;
  fin.open("C:/Users/Cliente/Desktop/alo2.sculptor.txt");
  if(!fin.is_open()){
    cout<<"iiiiiiiiiih";
  }
    stringstream ss1;
    getline(fin,s1);
    ss1.str(s1);
    ss1>>s1;
    cout<<s<<endl;
    if(s1.compare("dim")== 0){
        ss1>>nx>>ny>>nz;
        cout<<nx<<"X"<<ny<<"X"<<nz<<endl;
    }
    Sculptor *t = new Sculptor(nx,ny,nz);
  while(fin.good()){
    stringstream ss;
    getline(fin,s);
    ss.str(s);
    ss>>s;
    cout<<s<<endl;
    if(s.compare("putbox")== 0){
        ss>>nx>>nx2>>ny>>ny2>>nz>>nz2>>r>>g>>b>>a;
        PutBox *pb = new PutBox(nx,nx2,ny,ny2,nz,nz2,r,g,b,a);
        //(*pb).Drawn(*t);
        figs.push_back(pb);
        cout<<"putbox"<<endl;
        cout<<nx<<"-"<<nx2<<"X"<<ny<<"-"<<ny2<<"X"<<nz<<"-"<<nz2<<endl;

    }//icutbox 15 20 15 20 15 20
    if(s.compare("cutbox")== 0){
        ss>>nx>>nx2>>ny>>ny2>>nz>>nz2;
        CutBox *cb = new CutBox(nx,nx2,ny,ny2,nz,nz2);
        //(*cb).Drawn(*t);
        figs.push_back(cb);
        cout<<"cutbox"<<endl;
        cout<<nx<<"-"<<nx2<<"X"<<ny<<"-"<<ny2<<"X"<<nz<<"-"<<nz2<<endl;
    }
    if(s.compare("cutsphere")== 0){
        ss>>nx>>ny>>nz>>nx2;
        CutSphere *cs = new CutSphere(nx,ny,nz,nx2);
        //(*cs).Drawn(*t);
        figs.push_back(cs);
        cout<<"cutsphere"<<endl;
        cout<<"centro: "<<nx<<" "<<ny<<" "<<nz<<" raio"<<nx2<<endl;
    }
    if(s.compare("putsphere")== 0){
        ss>>nx>>ny>>nz>>nx2>>r>>g>>b>>a;
        PutSphere *ps = new PutSphere(nx,ny,nz,nx2,r,g,b,a);
        //(*ps).Drawn(*t);
        figs.push_back(ps);
        cout<<"putsphere"<<endl;
        cout<<"centro: "<<nx<<" "<<ny<<" "<<nz<< " raio"<<nx2<<endl;
    }
    if(s.compare("cutellipsoid")== 0){
        ss>>nx>>ny>>nz>>nx2>>ny2>>nz2;
        CutEllipsoid *ce = new CutEllipsoid(nx,ny,nz,nx2,ny2,nz2);
        //(*ce).Drawn(*t);
        figs.push_back(ce);
        cout<<"cutEllipsoid"<<endl;
        cout<<"centro: "<<nx<<" "<<ny<<" "<<nz<<" raiox"<<nx2<<" raioy"<<ny2<<" raioz"<<nz2<<endl;
    }
    if(s.compare("putellipsoid")== 0){
        ss>>nx>>ny>>nz>>nx2>>ny2>>nz2>>r>>g>>b>>a;
        PutEllipsoid *pe = new PutEllipsoid(nx,ny,nz,nx2,ny2,nz2,r,g,b,a);
        //(*pe).Drawn(*t);
        figs.push_back(pe);
        cout<<"putEllipsoid"<<endl;
        cout<<"centro: "<<nx<<" "<<ny<<" "<<nz<<" raiox"<<nx2<<" raioy"<<ny2<<" raioz"<<nz2<<endl;
    }
      if(s.compare("cutvoxel")== 0){
        ss>>nx>>ny>>nz>>nx2>>ny2>>nz2;
        CutVoxel *cv = new CutVoxel(nx,ny,nz);
        //(*cv).Drawn(*t);
        figs.push_back(cv);
        cout<<"cutVoxel"<<endl;
        cout<<"posisao: "<<nx<<" "<<ny<<" "<<nz<<endl;
    }
    if(s.compare("putvoxel")== 0){
        ss>>nx>>ny>>nz>>r>>g>>b>>a;
        PutVoxel *pv = new PutVoxel(nx,ny,nz,r,g,b,a);
        //(*pv).Drawn(*t);
        figs.push_back(pv);
        cout<<"putVoxel"<<endl;
        cout<<"posisao: "<<nx<<" "<<ny<<" "<<nz<<endl;
    }

  }
    for(unsigned int i=0;i<(figs.size());i++){
        (*(figs[i])).Drawn(*t);
    }
    (*t).writeOFF("C:/Users/Cliente/Desktop/EscultorOFF1.off");
    return 0;
}
