/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int, Stk3);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int, Stk10);
int nlRotateAX(int);
int nlRotateAY(int);
float FUN_0c0685b6(void);
int FUN_0c044580(int a4);


int FUN_0c044580(int a4)
{
    int t0;
    int t1;
    int t16;
    int t3;
    int stk[15];

    t0 = *(int *)0xC247CAC;
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((int)stk + 4)) = *(struct mv10 *)(0xC0F57C4); }
    t1 = *(int *)((a4 + 0xBC));
    t16 = t1;
    if ((int)t1 < (int)0xA) {
        nlPushMatrix(0x0, *(Stk10 *)(((int)stk + 4)));
        t3 = *(int *)((a4 + 0xBC));
        FUN_0c0dcc70((*(float *)(((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x0))), ((*(float *)(((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x4))) + 5.0f), (*(float *)(((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x8))));
        nlRotateAY((*(short *)((t0 + 0x3CE))));
        nlRotateAX((*(short *)((t0 + 0x3CC))));
        FUN_0c0c465c((*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + ((int)stk + 4)) + 0x0))));
        t16 = (nlPopMatrix(0x1));
    }
    return t16;
}
