#ifndef LINEA_H
#define LINEA_H
#include "punto.h"

#include <string>

using namespace std;
class Linea{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;


public:
    Linea();
    Linea(Punto *p1,Punto *p2);
    float getD(); //mostrar dato
    string toString();
    Punto getP1();
    Punto getP2();
    static int NUM_LINEAS;
};

#endif // LINEA_H
