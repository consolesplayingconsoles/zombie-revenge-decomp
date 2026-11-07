/* Straight-line functions with calls and guards (batch gen_qy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0a7064(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0a7064(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[27];
    register float u24;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    stk[18] = a11;
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = f10;
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = f11;
    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) - f7);
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f8);
    u2 = (*(float *)&a8 - f9);
    *(float *)(((int)stk + 60)) = u2;
    u3 = (*(float *)&a9 - f7);
    *(float *)(((int)stk + 64)) = u3;
    u4 = (*(float *)&a10 - f8);
    *(float *)(((int)stk + 68)) = u4;
    u5 = (*(float *)&a11 - f9);
    *(float *)(((int)stk + 72)) = u5;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 48)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = u3;
    *(float *)(((int)stk + 44)) = u4;
    *(float *)(((int)stk + 48)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x58) + 0x0)) = (*(float *)(((int)stk + 36)));
    u2 = (-u2);
    *(float *)(((int)stk + 60)) = u2;
    u5 = (-u5);
    *(float *)(((int)stk + 72)) = u5;
    u24 = (-u2);
    if (*(float *)&a12 > (-u2)) {
        u2 = *(float *)&a12;
        *(float *)(((int)stk + 60)) = u2;
        u24 = *(float *)&a12;
    }
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 48)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = u3;
    *(float *)(((int)stk + 44)) = u4;
    *(float *)(((int)stk + 48)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x58) + 0x0)) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 24))) + 0x0)) = (f7 + (*(float *)(((int)stk + 56))));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f8 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f9 + u2);
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((*(float *)(((int)stk + 56))) - u3);
    *(float *)((a13 + 0x0)) = ((*(float *)(((int)stk + 52))) - u4);
    *(float *)((a14 + 0x0)) = (u2 - u5);
    return 0x4C;
}
