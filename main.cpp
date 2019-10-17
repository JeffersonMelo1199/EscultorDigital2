#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "figurageometrica.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"

using namespace std;
int main(){
    ifstream fin;
    string s;
    //Arquivos para armazenarem as informações do desenho principal.
    string arqOFF="arqOFF";
    stringstream aux;
    //Objeto do tipo Sculptor. tela branca para o desenho.
    Sculptor *figs = nullptr;
    //Vetor responsável por armazenar os comandos do desenho.
    vector<FiguraGeometrica*>fig;

    //Arquivo que contém as informações sobre o desenho.
    fin.open("C:/Users/MatrizD42018/Downloads/JM-master/JM-master/EscultorDigital2/entrada.txt");
    while(fin.good()){
        getline(fin,s);
        aux.clear();
        aux.str(s);
        aux>>s;
        //Dimensões do objeto do tipo Sculptor.
        if(s.compare("dim")==0){
            int x,y,z;
            aux>>x>>y>>z;
            figs= new Sculptor(x,y,z);
        }
        //As demais condições são para o processo do desenho.
        else if(s.compare("putvoxel")==0){
            int x0,y0,z0;
            float r,g,b,alpha;
            aux>>x0>>y0>>z0>>r>>g>>b>>alpha;
            fig.push_back(new PutVoxel(x0,y0,z0,r,g,b,alpha));
        }
        else if(s.compare("putbox")==0){
            int x0,y0,z0,x1,y1,z1;
            float r,g,b,alpha;
            aux>>x0>>y0>>z0>>x1>>y1>>z1>>r>>g>>b>>alpha;
            fig.push_back(new PutBox(x0,y0,z0,x1,y1,z1,r,g,b,alpha));
        }
        else if(s.compare("putsphere")==0){
            int x0,y0,z0,radius;
            float r,g,b,alpha;
            aux>>x0>>y0>>z0>>radius>>r>>g>>b>>alpha;
            fig.push_back(new PutSphere(x0,y0,z0,radius,r,g,b,alpha));
        }
        else if(s.compare("putellipsoid")==0){
            int x0,y0,z0,rx,ry,rz;
            float r,g,b,alpha;
            aux>>x0>>y0>>z0>>rx>>ry>>rz>>r>>g>>b>>alpha;
            fig.push_back(new PutEllipsoid(x0,y0,z0,rx,ry,rz,r,g,b,alpha));
        }
        else if(s.compare("cutvoxel")==0){
            int x0,y0,z0;
            aux>>x0>>y0>>z0;
            fig.push_back(new CutVoxel(x0,y0,z0));
        }
        else if(s.compare("cutbox")==0){
            int x0,y0,z0,x1,y1,z1;
            aux>>x0>>y0>>z0>>x1>>y1>>z1;
            fig.push_back(new CutBox(x0,y0,z0,x1,y1,z1));
        }
        else if(s.compare("cutsphere")==0){
            int x0,y0,z0,radius;
            aux>>x0>>y0>>z0>>radius;
            fig.push_back(new CutSphere(x0,y0,z0,radius));
        }
        else if(s.compare("cutellipsoid")==0){
            int x0,y0,z0,rx,ry,rz;
            aux>>x0>>y0>>z0>>rx>>ry>>rz;
            fig.push_back(new CutEllipsoid(x0,y0,z0,rx,ry,rz));
        }
    }
    //Aplicar todas as funções de desenho lidas.
    for(int i=0; i<fig.size(); i++){
        fig[i]->draw(*figs);
    }
    //Salvar o desenho em arquivo OFF e VECT.
    figs->writeOFF(arqOFF);
    //Liberar a memória.
    figs->~Sculptor();
    return 0;
}

