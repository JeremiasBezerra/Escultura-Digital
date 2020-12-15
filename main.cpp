#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    Sculptor Desenho(100,100,100);
    Desenho.setColor(1,0.7,0.8,0.1);
    Desenho.putVoxel(0,0,0);
    Desenho.cutVoxel(0,0,0);
    Desenho.putBox(0,0,0,0,0,0);
    Desenho.cutBox(0,0,0,0,0,0);
    Desenho.setColor(1,0,0,1);
   // Desenho.putSphere(0,0,0,0);
   // Desenho.cutSphere(0,0,0,0);
    Desenho.putEllipsoid(50,60,50,40,49,30);
    Desenho.cutEllipsoid(47,50,20,27,42,40);
    Desenho.writeOFF("filename.off");
    return 0;
}
