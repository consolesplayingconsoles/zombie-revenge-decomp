/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01db0e(int, int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0294e6(void);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c0bbbf4(int);
int FUN_0c0c4464(int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0e19f2(int, int, int, int);
int nlPrintf(int, ...);
int FUN_0c08b4d2(int a4, int a5, int a6, int a7);
int FUN_0c0c1508(int a4, int a5, int a6, int a7);
int FUN_0c01a49c(void);
int FUN_0c029b60(int a4, int a5, int a6, int a7);

int FUN_0c08b4d2(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)((a4 + 0x38));
    if ((int)(*(int *)((a4 + 0x3C))) < (int)0x3FFF) {
        *(unsigned int *)((a4 + 0x3C)) = (int)((float)(*(int *)((a4 + 0x3C))) + 273.049988f);
    } else {
        *(unsigned int *)((a4 + 0x3C)) = (int)((float)(*(int *)((a4 + 0x3C))) + 546.099976f);
    }
    if ((int)(*(int *)((a4 + 0x3C))) < (int)0x71C7) {
        *(float *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x4)) = (FUN_0c0d9e90((*(int *)((a4 + 0x3C)))));
        return 0x4;
    }
    *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x38C)) = 0x0;
    *(unsigned int *)(((*(int *)((a4 + 0x34))) + 0x38C)) = 0x0;
    *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x0)) = 0x0;
    return FUN_0c0e19f2(0x0, a5, a6, a7);
}

int FUN_0c0c1508(int a4, int a5, int a6, int a7)
{
    float t8;
    float u11;
    int stk[10];

    if ((*(int *)(((*(int *)((a4 + 0x1C))) + 0x30))) != 1) {
        return (FUN_0c0e19f2(a4, a5, a6, a7));
    }
    FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))), a6, a7);
    if (0.0f > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = 0.0f;
    }
    FUN_0c0db0a0(0x14, 0x5);
    t8 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 20));
    *(float *)(((int)stk + 16)) = t8;
    nlPrintf(0xC1E3AE0, t8);
    FUN_0c0db0a0(0x14, 0x6);
    u11 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 8)) = u11;
    nlPrintf(0xC1E3AEC, u11);
    return (FUN_0c0bbbf4(a4));
}

int FUN_0c01a49c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t13;
    int t23;
    int t33;
    int t0;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC247030 + t1) + 0x0))) != 0) {
            t3 = 0xC246FF0;
            t3 = (t3 + t2);
            t0 = 0xC0;
            t3 = (*(int *)((t3 + 0x0)));
            t7 = *(int *)((t3 + t0));
            t4 = (t4 | (((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))));
        }
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    t13 = t0;
    if ((0x1 & t4) == 0) {
        t13 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x0, 0x0));
    }
    t23 = t13;
    if ((0x4 & t4) == 0) {
        t23 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x2, 0x0));
    }
    t33 = t23;
    if ((t4 & 0x10) == 0) {
        t33 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x4, 0x0));
    }
    return t33;
}

int FUN_0c029b60(int a4, int a5, int a6, int a7)
{
    int t0;
    int t13;
    int t11;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
            return FUN_0c02a19a(a4, a5, a6, a7);
        }
        return 0x2EC;
    }
    t13 = 0x2EC;
    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
        *(volatile int *)((a4 + 0x510));
        *(unsigned int *)(((0x558 + a4) + 0x0)) = (FUN_0c0294e6());
        if ((*(int *)((a4 + 0x558))) == 0) {
            *(unsigned int *)((a4 + 0x558)) = 0x2;
        }
        t11 = *(int *)((a4 + 0x558));
        *(unsigned int *)((a4 + 0x2C4)) = ((((t11 - 1) << 1) + (t11 - 1)) + 0x44);
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        t13 = 0x3A0;
    }
    return t13;
}
