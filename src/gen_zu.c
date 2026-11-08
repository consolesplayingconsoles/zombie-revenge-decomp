/* Straight-line functions with calls and guards (batch gen_zu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0a6ac4(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o44_float { char p[0x44]; float v; };


int FUN_0c0a6ac4(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[23];
    register float u2;

    stk[14] = a8;
    (((struct o30_float *)(((int)stk + 4)))->v) = f10;
    (((struct o2C_float *)(((int)stk + 4)))->v) = f11;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f7);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) - f8);
    u2 = (*(float *)&a8 - f9);
    *(float *)(((int)stk + 56)) = u2;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o44_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    u2 = *(float *)&a12;
    *(float *)(((int)stk + 56)) = u2;
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o44_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (f7 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f8 + (*(float *)(((int)stk + 48))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f9 + u2);
    return 0x44;
}
