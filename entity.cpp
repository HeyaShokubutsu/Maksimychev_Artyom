#include "entity.h"

Entity::Entity( double _x, double _y, int t, HANDLE h ):
    GraphicsObject( _x, _y, t, h )
{
    animationStep = 0;
    rotation = 3;
    speed = 1;
}

void Entity::moveForvard()
{
    switch( rotation ) {
        case 0:{
            y -= speed;
            break;
        }
        case 1:{
            x += speed;
            break;
        }
        case 2:{
            y += speed;
            break;
        }
        case 3:{
            x -= speed;
            break;
        }
        default:
            ;
    }
}

void Entity::rotate( int side )
{
    rotation = side;
}

void Entity::paint()
{
    COORD point;
    DWORD l;
    int xcord = int( this->x ) * 8 - 1;
    point.X = xcord;
    point.Y = int( this->y ) * 4 - 1;
    SetConsoleCursorPosition( handle, point );
    for( int r = 0; r < 6; r++ ){

        for( int c = 0; c < 6; c++ ){

            if( SPR_PAC_T[ AN_PAC[ animationStep ] ][ r * 6 + c ] != 0 ){

                if( SPR_PAC_T[ AN_PAC[ animationStep ] ][ r * 6 + c ] == -1 ) {
                    FillConsoleOutputAttribute( handle, 0, 2, point, &l );
                }
                else {
                    FillConsoleOutputAttribute( handle, SPR_PAC_T[ AN_PAC[ animationStep ] ][ r * 6 + c ], 2, point, &l );
                }
            }

            point.X += 2;
        }
        point.Y++;
        point.X = xcord;
        SetConsoleCursorPosition( handle, point );
    }

    animationStep++;
    if( animationStep > 7 ) animationStep = 0;

}
