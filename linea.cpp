#include "linea.h"

using namespace std;
Linea::Linea()
{
}

Linea::Linea(Punto *p1, Punto *p2)
{

}

float Linea::getD()
{
    return d;
}

string Linea::toString()
{
    return "datos";
}

Punto Linea::getP1()
{
    return *p1;
}

Punto Linea::getP2()
{
    return *p2;
}
