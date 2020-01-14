#ifndef ENTITY_H
#define ENTITY_H

#include "graphicsobject.h"

class Entity : public GraphicsObject
{
    int rotation;
    int nextRotation;
    double speed;
    int animationStep;
public:
    Entity( double _x, double _y, int t, HANDLE h );
    void moveForvard();
    void rotate( int side );
    void paint();
};

#endif // ENTITY_H
