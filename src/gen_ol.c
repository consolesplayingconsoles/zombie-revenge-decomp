/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0a6928(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0a6928(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    *(float *)(((int)&s + -4)) = f10;
    *(float *)(((int)&s + -8)) = f11;
    *(unsigned int *)(((int)&s + -36)) = a4;
    *(unsigned int *)(((int)&s + -40)) = a5;
    *(unsigned int *)(((int)&s + -44)) = a6;
    *(float *)(((int)&s + -4)) = ((*(float *)(((int)&s + -4))) - f7);
    *(float *)(((int)&s + -8)) = ((*(float *)(((int)&s + -8))) - f8);
    u2 = (*(float *)&s.w[0] - f9);
    *(float *)(((int)&s + 0)) = u2;
    u3 = (*(float *)&s.w[1] - f7);
    *(float *)(((int)&s + 4)) = u3;
    u4 = (*(float *)&s.w[2] - f8);
    *(float *)(((int)&s + 8)) = u4;
    u5 = (*(float *)&s.w[3] - f9);
    *(float *)(((int)&s + 12)) = u5;
    FUN_0c0a7714(((int)&s + -52), ((int)&s + -48), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)&s + -52)))));
    nlRotateAY((-(*(int *)(((int)&s + -48)))));
    *(float *)(((int)&s + -20)) = (*(float *)(((int)&s + -4)));
    *(float *)(((int)&s + -16)) = (*(float *)(((int)&s + -8)));
    *(float *)(((int)&s + -12)) = u2;
    FUN_0c0db470(((int)&s + -20), ((int)&s + -32));
    *(float *)(((int)&s + -4)) = (*(float *)(((int)&s + -32)));
    *(float *)(((int)&s + -8)) = (*(float *)(((int)&s + -28)));
    *(float *)(((int)&s + 20)) = (*(float *)(((int)&s + -24)));
    *(float *)(((int)&s + -20)) = u3;
    *(float *)(((int)&s + -16)) = u4;
    *(float *)(((int)&s + -12)) = u5;
    FUN_0c0db470(((int)&s + -20), ((int)&s + -32));
    *(float *)(((int)&s + 24)) = (*(float *)(((int)&s + -32)));
    *(float *)(((int)&s + 28)) = (*(float *)(((int)&s + -28)));
    *(float *)(((int)&s + 32)) = (*(float *)(((int)&s + -24)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)&s + -48))));
    nlRotateAX((*(int *)(((int)&s + -52))));
    if (*(float *)&s.w[4] > u2) {
        u2 = *(float *)&s.w[4];
        *(float *)(((int)&s + 0)) = u2;
    }
    *(float *)(((int)&s + -20)) = (*(float *)(((int)&s + -4)));
    *(float *)(((int)&s + -16)) = (*(float *)(((int)&s + -8)));
    *(float *)(((int)&s + -12)) = u2;
    FUN_0c0db470(((int)&s + -20), ((int)&s + -32));
    *(float *)(((int)&s + -4)) = (*(float *)(((int)&s + -32)));
    *(float *)(((int)&s + -8)) = (*(float *)(((int)&s + -28)));
    *(float *)(((int)&s + 20)) = (*(float *)(((int)&s + -24)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)&s + -36))) + 0x0)) = (f7 + (*(float *)(((int)&s + -4))));
    *(float *)(((*(int *)(((int)&s + -40))) + 0x0)) = (f8 + (*(float *)(((int)&s + -8))));
    *(float *)(((*(int *)(((int)&s + -44))) + 0x0)) = (f9 + u2);
    return 0x48;
}
