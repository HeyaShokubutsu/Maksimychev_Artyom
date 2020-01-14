#ifndef SPRITES_H
#define SPRITES_H

#include <Windows.h>

namespace PM {
const SHORT R = BACKGROUND_RED | BACKGROUND_INTENSITY;
const SHORT G = BACKGROUND_GREEN | BACKGROUND_INTENSITY;
const SHORT B = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
const SHORT Y = BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY;
const SHORT P = BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY;
const SHORT C = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
const SHORT W = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
const SHORT D = -1;

const SHORT SPR_BACK[16] = { D, D, D, D,
                             D, D, D, D,
                             D, D, D, D,
                             D, D, D, D };

const SHORT SPR_DBACK[16] = { W, D, W, D,
                              D, W, D, W,
                              W, D, W, D,
                              D, W, D, W };

const SHORT SPR_PAC_T[4][36] = {{ 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, 0, 0, Y, 0,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, 0, 0, Y, 0,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { Y, 0, 0, 0, 0, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 }};

const SHORT SPR_PAC_R[4][36] = {{ 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, 0, 0,
                                  Y, Y, Y, Y, 0, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, 0, 0, 0, 0,
                                  Y, Y, 0, 0, 0, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, 0,
                                  Y, Y, 0, 0, 0, 0,
                                  Y, Y, 0, 0, 0, 0,
                                  Y, Y, Y, Y, Y, 0,
                                  0, Y, Y, Y, Y, Y }};

const SHORT SPR_PAC_B[4][36] = {{ 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  0, Y, 0, 0, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  0, Y, 0, 0, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, Y, 0, 0, Y, Y,
                                  Y, 0, 0, 0, 0, Y }};

const SHORT SPR_PAC_L[4][36] = {{ 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  0, 0, Y, Y, Y, Y,
                                  0, 0, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { 0, Y, Y, Y, Y, 0,
                                  Y, Y, Y, Y, Y, Y,
                                  0, 0, 0, 0, Y, Y,
                                  0, 0, 0, 0, Y, Y,
                                  Y, Y, Y, Y, Y, Y,
                                  0, Y, Y, Y, Y, 0 },

                                { Y, Y, Y, Y, Y, 0,
                                  0, Y, Y, Y, Y, Y,
                                  0, 0, 0, 0, Y, Y,
                                  0, 0, 0, 0, Y, Y,
                                  0, Y, Y, Y, Y, Y,
                                  Y, Y, Y, Y, Y, 0 }};

const SHORT SPR_WALL_H[16] = { D, D, D, D,
                               B, B, B, B,
                               B, B, B, B,
                               D, D, D, D };

const SHORT SPR_WALL_V[16] = { D, B, B, D,
                               D, B, B, D,
                               D, B, B, D,
                               D, B, B, D };

const SHORT SPR_WALL_RT[16] = { D, D, D, D,
                                B, B, B, D,
                                B, B, B, D,
                                D, B, B, D };

const SHORT SPR_WALL_RB[16] = { D, B, B, D,
                                B, B, B, D,
                                B, B, B, D,
                                D, D, D, D };

const SHORT SPR_WALL_LB[16] = { D, B, B, D,
                                D, B, B, B,
                                D, B, B, B,
                                D, D, D, D };

const SHORT SPR_WALL_LT[16] = { D, D, D, D,
                                D, B, B, B,
                                D, B, B, B,
                                D, B, B, D };

const SHORT SPR_WALL_HT[16] = { D, B, B, D,
                                B, B, B, B,
                                B, B, B, B,
                                D, D, D, D };

const SHORT SPR_WALL_HB[16] = { D, D, D, D,
                                B, B, B, B,
                                B, B, B, B,
                                D, B, B, D };

const SHORT SPR_WALL_VR[16] = { D, B, B, D,
                                D, B, B, B,
                                D, B, B, B,
                                D, B, B, D };

const SHORT SPR_WALL_VL[16] = { D, B, B, D,
                                B, B, B, D,
                                B, B, B, D,
                                D, B, B, D };

const SHORT SPR_WALL_CR[16] = { D, B, B, D,
                                B, B, B, B,
                                B, B, B, B,
                                D, B, B, D };

const int AN_PAC[8] = { 0, 1, 2, 3, 3, 2, 1, 0 };
}
#endif // SPRITES_H
