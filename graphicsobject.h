#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H
#include "sprites.h"

using namespace PM;

class GraphicsObject
{
protected:
    double x;
    double y;
    HANDLE handle;
    int type;
public:
    GraphicsObject( double _x, double _y, int t, HANDLE h );
    void paint();
    int getType();
};

#endif // GRAPHICSOBJECT_H
