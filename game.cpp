#include "game.h"

Game::Game( HANDLE h )
{
    handle = h;
    int field[28][36];
}

void Game::start0()
{
    GraphicsObject *arr[3][16];

    for( int r = 0; r < 3; r++ ){
        for( int c = 0; c < 16; c++ ){
            arr[r][c] = new GraphicsObject( c, r, 0, handle );
        }
    }

    Entity ob1( 2, 1, 1, handle );
    Entity ob2( 5, 1, 1, handle );
    Entity ob3( 8, 1, 1, handle );
    Entity ob4( 11, 1, 1, handle );
    Entity ob5( 14, 1, 1, handle );

    for( int n = 0; n < 10; n++ ){

        for( int r = 0; r < 3; r++ ){
            for( int c = 0; c < 16; c++ ){
                arr[r][c]->paint();
            }
        }
        ob1.paint();
        ob2.paint();
        ob3.paint();
        ob4.paint();
        ob5.paint();
        Sleep( 40 );
    }
    for( int r = 0; r < 3; r++ ){
        for( int c = 0; c < 4; c++ ){
            arr[r][c]->paint();
        }
    }
    ob1.rotate( 3 );
    ob1.moveForvard();
    ob1.paint();

}

void Game::start1()
{
    COORD point;
    DWORD l;
    point.X = 0;
    point.Y = 0;
    for( int i = 0; i < 256; i++ ){
        FillConsoleOutputAttribute( handle, i, 5, point, &l );
        point.Y++;
    }
}
