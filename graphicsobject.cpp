#include "graphicsobject.h"

GraphicsObject::GraphicsObject( double _x, double _y, int t, HANDLE h )
{
    this->x = _x;
    this->y = _y;
    this->handle = h;
    this->type = t;
}

void GraphicsObject::paint()
{
    COORD point;
    DWORD l;
    int xcord = int( this->x ) * 8;
    point.X = xcord;
    point.Y = int( this->y ) * 4;
    SetConsoleCursorPosition( handle, point );
    for( int r = 0; r < 4; r++ ){

        for( int c = 0; c < 4; c++ ){

            if( SPR_BACK[ r * 4 + c ] != 0 ){

                if( SPR_BACK[ r * 4 + c ] == -1 ) {
                    FillConsoleOutputAttribute( handle, 0, 2, point, &l );
                }
                else {
                    FillConsoleOutputAttribute( handle, SPR_BACK[ r * 4 + c ], 2, point, &l );
                }
            }

            point.X += 2;
        }
        point.Y++;
        point.X = xcord;
        SetConsoleCursorPosition( handle, point );
    }
}

int GraphicsObject::getType()
{
    return this->type;
}
