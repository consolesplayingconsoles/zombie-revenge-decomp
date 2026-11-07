/* Straight-line functions with calls and guards (batch gen_adt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c061a8a(int, int, float);
int FUN_0c061ccc(void);
int FUN_0c062180(int, int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c062934(int a4, float f4, float f5);

int FUN_0c062934(int a4, float f4, float f5)
{
    int stk[10];
    register int t1;
    register int t41;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register float u34;
    register float u40;

    nlPushMatrix(0x0);
    t1 = *(int *)((a4 + 0x244));
    t41 = 0;
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            FUN_0c062180((a4 + 0x30), (a4 + 0x6C));
        }
        u40 = f5;
        t41 = ((t1 == 1));
    } else {
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x70))));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        nlPushMatrix(0x0);
        FUN_0c0caf6a(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((*(int *)0xC247B94) + 0x3C))));
        FUN_0c0db840((((int)stk + 4) + 0x18));
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = ((*(float *)(((int)stk + 28))) - (*(float *)(((int)stk + 4))));
        *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = ((*(float *)(((int)stk + 32))) - (*(float *)(((*(int *)0xC247B94) + 0x3C))));
        *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = ((*(float *)(((int)stk + 36))) - (*(float *)(((int)stk + 8))));
        u28 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
        u29 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
        u30 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
        u31 = (u28 * u28);
        u31 = u31 + u29 * u29;
        u32 = u31;
        u32 = u32 + u30 * u30;
        nlScale((f5 / 1.0f), (f5 / 1.0f), _builtin_sqrtf(u32));
        u34 = (f5 / 1.0f);
        if (_builtin_sqrtf(u32) > (f5 / 1.0f)) {
            u34 = _builtin_sqrtf(u32);
        }
        FUN_0c061a8a((0x254 + a4), (0x258 + a4), u34);
        nlPopMatrix(0x1);
        FUN_0c061ccc();
        u40 = _builtin_sqrtf(u32);
        t41 = ((_builtin_sqrtf(u32) > (f5 / 1.0f)));
    }
    return (nlPopMatrix(0x1));
}
