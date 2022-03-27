#ifndef ClassFiguraGeometrica_H
#define ClassFiguraGeometrica_H

#include <iostream>


using std::cout;

class FiguraGeometrica
{
private:

protected:
    float perimetro;
    float area;

public:
    FiguraGeometrica();
    virtual float averiguarPerimetro()=0; /* Método virtual puro o abstracto */
    virtual float averiguarArea()=0; /* Método virtual puro o abstracto */
    virtual void dibujarFigura();
    virtual void dibujarFigura(int color);
    virtual void nombreFigura();
};
#endif
