#include <iostream>
#include "graphicsobject.h"
#include "entity.h"
#include "game.h"

using namespace std;

int main()
{
    DWORD l;
    COORD point;
    point.X = 0; point.Y = 0;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    char pacman[] = {"100001110011110011110011111111011110"};
    LPCWSTR title = L"PACMAN";
    SetConsoleTitle( title );
    SetConsoleOutputCP(1251);
    SetConsoleTextAttribute(hout, FOREGROUND_RED | FOREGROUND_INTENSITY);

    Game g( hout );
    g.start0();
//    char c;
//    ReadFile(hin, &c, 1, &l, NULL);
    return 0;
}
