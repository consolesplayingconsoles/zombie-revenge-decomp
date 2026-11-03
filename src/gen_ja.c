/* Straight-line functions with calls and guards (batch gen_ja): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a2884(int, int, int, int);
int FUN_0c0a2914(int, int, int);
int FUN_0c0a2952(int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c075af4(int a4, int a5, int a6, int a7);
int FUN_0c0a2b18(int a4, int a5, int a6, int a7);
int FUN_0c09339a(int a4, int a5, int a6, int a7);
int FUN_0c087f9c(int a4, int a5, int a6, int a7);
int FUN_0c0a3b5c(int a4, int a5, int a6, int a7);
int FUN_0c01d01c(int a4, int a5, int a6, int a7);
int FUN_0c064482(int a4, int a5, int a6, int a7);
int FUN_0c093262(int a4, int a5, int a6, int a7);

int FUN_0c075af4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(int *)0xC23ED50;
    if (((int)t0 < (int)0x35) && (t0 != 45)) {
        t1 = 0xC23ED50;
    } else {
        FUN_0c0e19f2(t0, a5, a6, a7);
    }
    t0 = *(int *)0xC23ED9C;
    if (t0 != 7) {
        t2 = 0xC075B70;
        t3 = t1;
        t1 = 0x0;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)0x8) {
                break;
            }
            t2 = 0xC246FF0;
            t2 = (t2 + 0x40);
            t2 = (*(int *)((t1 + t2)));
            if (t2 == 4) {
                t5 = 0xC246FF0;
                t5 = (t5 + t4);
                t2 = 0x20C;
                t5 = (*(int *)((t5 + 0x0)));
                t3 = (*(int *)((t5 + t2)));
                if ((t3 & 0x607C00E1) == 0) {
                    t2 = 0x50;
                    u0 = (*(float *)((t5 + t2)));
                    u0 = (u0 - 0.0799999982f);
                    *(float *)((t5 + t2)) = u0;
                }
            }
            t1 = (t1 + 0x4);
            t4 = (t4 + 0x4);
        }
        t1 = t2;
    } else {
        t1 = t0;
    }
    return t1;
}

int FUN_0c0a2b18(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    if ((*(int *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC247030))) == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0dc5a0();
    FUN_0c0848d6((*(float *)(((0x45C + t0) + 0x0))), (*(float *)(((0x45C + t0) + 0x4))), (*(float *)(((0x45C + t0) + 0x8))));
    FUN_0c0dcca0((0x22C + t0));
    nlRotateAY((*(short *)((t0 + 0x228))));
    nlRotateAX((*(short *)((t0 + 0x226))));
    nlRotateAZ((*(short *)((t0 + 0x22A))));
    FUN_0c0db840((0xC4 + a4));
    FUN_0c0db470(0xC10CF88, (0x1C4 + a4));
    FUN_0c0a2884(((0xC4 + a4) + 0x100), 0xC10CF60, 0x7, 0xC10CF64);
    FUN_0c0a2914((0xC4 + a4), 0xC10CF00, 0x8);
    *(int *)((int)stk + 8) = (0x226 + t0);
    *(int *)((int)stk + 4) = 0xC10CF54;
    FUN_0c0a2952((0xC4 + a4), 0xC10CF00, 0x6, (a4 + 0x34), 0xC10CF54, (0x226 + t0));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
    return nlPopMatrix(0x1);
}

int FUN_0c09339a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    t1 = *(int *)((a4 + 0xA4));
    *(unsigned int *)((a4 + 0xA4)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t0)) + 0x0)) = (*(int *)((a4 + 0xAC)));
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t1 + 0x1);
    if ((((t1 + 0x1) - 1) & (*(int *)((a4 + 0xA0)))) == 0) {
        t1 = *(int *)((a4 + 0x8C));
        *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t0)) + 0x0)) = (*(short *)((t1 + ((*(int *)((a4 + 0x9C))) << 1))));
        t2 = *(int *)((a4 + 0x9C));
        *(unsigned int *)((a4 + 0x9C)) = (t2 + 0x1);
        if ((int)(*(short *)((t1 + ((t2 + 0x1) << 1)))) < 0) {
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0x7C))) != 0) {
        nlPushMatrix(0x0);
        nlMultiMatrix(((*(int *)((t0 + 0x3E4))) + 0x40));
        FUN_0c0c465c((*(int *)((a4 + 0x7C))));
        return nlPopMatrix(0x1);
    }
    return 0x7C;
}

int FUN_0c087f9c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    t2 = *(int *)((a4 + 0x30));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                u0 = *(float *)((a4 + 0x58));
                *(float *)((a4 + 0x58)) = (u0 * 0.979999959f);
                if (!((*(float *)0xC0880AC) > (u0 * 0.979999959f)) && (t0 = *(int *)0xC248DCC, (int)t0 < (int)0x3C)) {
                } else {
                    *(unsigned int *)0xC248DCC = ((*(int *)0xC248DCC) - 1);
                    FUN_0c0e19f2(0xC248DCC, a5, a6, a7);
                }
            }
        } else {
            t0 = *(int *)((a4 + 0x64));
            *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
            if (((int)(t0 - 1) >= 0) && (t1 = *(int *)0xC248DC8, (int)t1 < (int)0x28)) {
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                *(unsigned int *)((a4 + 0x38)) = 0xC0C475C;
                *(unsigned int *)0xC248DC8 = ((*(int *)0xC248DC8) - 1);
            }
        }
    } else {
        t0 = *(int *)((a4 + 0x68));
        *(unsigned int *)((a4 + 0x68)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) >= (int)0x3) {
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
            t0 = *(int *)((a4 + 0x5C));
            *(unsigned int *)((a4 + 0x5C)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
        }
    }
    t0 = *(int *)((a4 + 0x3C));
    return ((int (*)(int))(t0))(a4);
}

int FUN_0c0a3b5c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4));
    t1 = 0xC2460F4;
    if (((*(int *)0xC23A1A8) & 0x10000001) != 0x10000001) {
        if (((*(int *)((t0 + 0x290))) & 0x40000000) != 0) {
            FUN_0c0e19f2(0x10000001, a5, a6, a7);
        }
        nlPushMatrix(0x0);
        nlMultiMatrix((*(int *)((t0 + 0x3E4))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        nlPopMatrix(0x1);
        t0 = *(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)));
        t2 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t2 + 0x1);
        t3 = *(short *)(((t0 + ((t2 + 0x1) << 1)) + 0x0));
        *(unsigned int *)((a4 + 0x78)) = t3;
        if ((int)t3 < 0) {
            *(unsigned int *)((a4 + 0xA0)) = 0x0;
            *(unsigned int *)((a4 + 0xA4)) = 0x1;
            *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)(((0xA0 + a4) + 0x0))) << 1) + (*(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)))))));
            *(unsigned int *)((a4 + 0x0)) = 0xC0A3916;
        }
        t1 = 0x78;
    }
    return t1;
}

int FUN_0c01d01c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t3;
    int t4;

    t0 = *(int *)((a4 + 0x38));
    t3 = *(int *)((a4 + 0x38));
    if (((*(int *)((0xC247604 + ((*(int *)((a4 + 0x34))) << 2)))) == 1) && (t4 = *(int *)(((t3 << 2) + 0xC247030)), t4 == 4)) {
    } else {
        FUN_0c0e19f2((t3 << 2), 0xC246FF0, a6, a7);
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((*(int *)((a4 + 0x38))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    FUN_0c0dcc70((*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    FUN_0c0db840(((int)stk + 4));
    *(float *)(((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x90) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x90) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x90) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    return (nlPopMatrix(0x1));
}

int FUN_0c064482(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u12;
    register float u13;

    t0 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    u12 = *(float *)0xC06456C;
    u13 = *(float *)((a4 + 0x1E4));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlScale((u13 / u12), (u13 / u12), (u13 / u12));
    FUN_0c0de000((u13 / u12));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    return nlPopMatrix(0x1);
}

int FUN_0c093262(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0x88));
    t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
    if ((*(int *)((((t0 << 2) + 0xC247030) + 0x0))) == 0) {
        FUN_0c0e19f2(((t0 << 2) + 0xC247030), 0xC246FF0, a6, a7);
    }
    t0 = *(int *)((a4 + 0x80));
    if (t0 != 5) {
        if (t0 != 8) {
        } else {
            if ((*(int *)((t1 + 0x444))) != 0) {
                *(unsigned int *)((a4 + 0x9C)) = 0x0;
            }
        }
    } else {
        if ((*(int *)((t1 + 0x44C))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
        }
    }
    t0 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t0 + 0x1);
    t2 = 0xA0;
    if ((((t0 + 0x1) - 1) & (*(int *)((a4 + 0xA0)))) == 0) {
        t0 = *(int *)((a4 + 0x9C));
        t3 = *(int *)((a4 + 0x8C));
        *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((t0 << 1) + t3) + 0x0)));
        *(unsigned int *)((a4 + 0x9C)) = ((*(int *)((a4 + 0x9C))) + 0x1);
        if ((int)(*(short *)(((((t0 << 1) + t3) + 0x2) + 0x0))) < 0) {
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
        }
        t2 = 0x9C;
    }
    return t2;
}
