/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
float FUN_0c0685b6(void);
int FUN_0c044580(int a4);
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };



int FUN_0c044580(int a4)
{
    int t0;
    int t1;
    int t16;
    int t3;
    int stk[15];

    t0 = *(int *)0xC247CAC;
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((int)stk + 4)) = *(struct mv10 *)(0xC0F57C4); }
    t1 = (((struct oBC_int *)(a4))->v);
    t16 = t1;
    if ((int)t1 < (int)0xA) {
        nlPushMatrix(0x0);
        t3 = (((struct oBC_int *)(a4))->v);
        FUN_0c0dcc70(((((struct oC_float *)(((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268)))->v)), (((((struct o4_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0xC)))->v)) + 5.0f), ((((struct o8_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0xC)))->v)));
        nlRotateAY(((((struct o3CE_short *)(t0))->v)));
        nlRotateAX(((((struct o3CC_short *)(t0))->v)));
        FUN_0c0c465c((*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + ((int)stk + 4)) + 0x0))));
        t16 = (nlPopMatrix(0x1));
    }
    return t16;
}
