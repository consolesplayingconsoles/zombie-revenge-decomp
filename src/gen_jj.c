/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
int FUN_0c0278d0(int, int);
int FUN_0c02a19a(int);
int FUN_0c0352b4(int, int, int);
int FUN_0c0b1542(int, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(int);
int FUN_0c0e5fe4(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c027bca(int a4);
int FUN_0c0b1670(int a4, int a5, int a6, int a7, float f4);
int FUN_0c03ec7c(int a4, int a5, int a6, int a7);
int FUN_0c07ba72(int a4, int a5, int a6, int a7);
int FUN_0c07dc90(int a4, int a5, int a6, int a7);
int FUN_0c020962(int a4, int a5, int a6, int a7);
int FUN_0c07cc3a(int a4, int a5, int a6, int a7);

int FUN_0c027bca(int a4)
{
    register int t0;

    if ((*(int *)((a4 + 0x514))) != 0) {
        FUN_0c0277c4(a4, 0.0149999997f);
        FUN_0c0352b4(a4, 0x80, 0x1);
        t0 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
        } else {
            FUN_0c02a19a(a4);
        }
    } else {
        FUN_0c0278d0(a4, 0x0);
        t0 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            FUN_0c02a19a(a4);
        }
    }
    return FUN_0c022838(a4);
}

int FUN_0c0b1670(int a4, int a5, int a6, int a7, float f4)
{
    register float u0;
    register int t11;

    u0 = *(float *)0xC0B1768;
    if ((int)(*(int *)((a4 + 0x58))) < (int)0x3C) {
        *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) - u0);
    } else {
        if (1.0f > (*(float *)((a4 + 0x78)))) {
            *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + u0);
        } else {
            *(float *)((a4 + 0x78)) = 1.0f;
        }
    }
    t11 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0b1542((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))));
    return FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x1), (*(float *)((a4 + 0x78))));
}

int FUN_0c03ec7c(int a4, int a5, int a6, int a7)
{
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t16;
    register int t24;
    int t2;
    register int t3;
    register int t7;
    register int t8;

    if (((*(int *)0xC23ED50) == (*(int *)((a4 + 0x30)))) && (t2 = *(int *)((a4 + 0x34)), t3 = *(int *)0xC2462FC, (t3 & t2) == 0)) {
        t7 = 0xC2462FC;
        t8 = t2;
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t10 = t7;
    t11 = t8;
    t12 = 0x0;
    for (;;) {
        t15 = *(int *)((t12 + 0xC247030));
        t16 = *(int *)(((0xC246FF0 + t12) + 0x0));
        t24 = t15;
        if (t15 == 4) {
            if (((*(float *)((t16 + 0x30)))) > ((*(float *)0xC03ED84))) {
                t10 = (*(int *)0xC2462FC);
                t11 = (*(int *)((a4 + 0x34)));
                t10 = (t10 | t11);
                *(unsigned int *)0xC2462FC = t10;
            }
            t24 = 0x30;
        }
        t12 = (t12 + 0x4);
        if ((unsigned int)t12 >= (unsigned int)0x8) {
            break;
        }
    }
    return t24;
}

int FUN_0c07ba72(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0e19f2(a4, 0xC23ED88, a6, a7);
            }
            t1 = t0;
            if (((*(int *)0xC23ED5C) & 0x200) != 0) {
                t0 = *(int *)0xC23ED88;
                *(unsigned int *)0xC23ED88 = (t0 | 0x2);
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                t1 = (t0 | 0x2);
            }
            return t1;
        }
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        t1 = 0x58;
        if ((int)(t0 - 1) <= 0) {
            t0 = *(int *)0xC23ED88;
            *(unsigned int *)0xC23ED88 = (t0 | 0x4);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            t1 = (t0 | 0x4);
        }
        return t1;
    }
    *(unsigned int *)0xC23ED88 = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x3C;
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x58;
}

int FUN_0c07dc90(int a4, int a5, int a6, int a7)
{
    register int t6;

    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) != 0) {
        t6 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        if (((*(int *)((t6 + 0x290))) & 0x40000000) != 0) {
            FUN_0c0e19f2(a4, 0xC246FF0, a6, a7);
        }
        nlPushMatrix(0x0);
        nlMultiMatrix(((*(int *)((t6 + 0x3E4))) + 0x40));
        FUN_0c0c465c(0xB16);
        return nlPopMatrix(0x1);
    }
    return 0x88;
}

int FUN_0c020962(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t10;

    if ((*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0))) != 0) {
        t4 = *(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0));
        *(float *)((t4 + 0x45C)) = ((*(float *)((t4 + 0x45C))) + (*(float *)((a4 + 0x468))));
        *(float *)((t4 + 0x460)) = ((*(float *)((t4 + 0x460))) + (*(float *)((a4 + 0x46C))));
        *(float *)((t4 + 0x464)) = ((*(float *)((t4 + 0x464))) + (*(float *)((a4 + 0x470))));
        t10 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t10 - 1);
        if ((int)(t10 - 1) <= 0) {
            return FUN_0c0e19f2(a4, t4, a6, a7);
        }
        return 0x3AC;
    }
    return FUN_0c0e19f2(a4, 0xC246FF0, a6, a7);
}

int FUN_0c07cc3a(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t13;
    register int t17;
    register int t20;
    register int t19;
    register int t7;
    register int t23;

    t13 = a4;
    if (((*(int *)0xC23ED88) & 128) != 0) {
        if ((*(int *)((a4 + 0x30))) == 0) {
            FUN_0c0cc3f8(0x1431A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        } else {
            t7 = a4;
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t13 = t7;
    }
    if (((*(int *)0xC23ED88) & 128) == 0) {
        *(volatile int *)((a4 + 0x30));
        t17 = FUN_0c0e5f1c(t13);
        t20 = t17;
        if (t17 == 0) {
            FUN_0c0da2e0();
            t19 = FUN_0c0e5fe4();
            *(unsigned short *)(((0x36 + a4) + 0x0)) = t19;
            t20 = t19;
        }
        t23 = t20;
    } else {
        *(unsigned short *)((a4 + 0x36)) = 0xFFFFFFFF;
        t23 = 0x36;
    }
    return t23;
}
