/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019a36(int, ...);
int FUN_0c01a874(void);
int FUN_0c01c230(void);
int FUN_0c01c24e(void);
int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d3c6(void);
int FUN_0c01d636(int, int, int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c03a536(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c0498ce(void);
int FUN_0c04996a(void);
int FUN_0c049b80(int);
int FUN_0c04e9da(int);
int FUN_0c050f1c(int);
int FUN_0c053ac4(int);
int FUN_0c054c8a(int);
int FUN_0c054d8e(void);
int FUN_0c055936(int);
int FUN_0c056118(int, int, int, int);
int FUN_0c058fa0(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e1e8(void);
int FUN_0c084104(void);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c084b1a(int, int);
int FUN_0c084bf6(int, int);
int FUN_0c0852bc(int);
int FUN_0c085704(int);
int FUN_0c08b2d0(int, int);
int FUN_0c08c170(int);
int FUN_0c0909fc(int);
int FUN_0c0a5b40(void);
int FUN_0c0a5b78(void);
int FUN_0c0a5fa4(void);
int FUN_0c0a5fdc(void);
int FUN_0c0a8362(void);
int FUN_0c0a8bb0(int);
int FUN_0c0b26a2(int);
int FUN_0c0bb788(int);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
float FUN_0c0d9e90(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0e14c4(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c05c2f8(int a4, int a5, int a6);
int FUN_0c08ab5a(int a4);
int FUN_0c05b194(int a4, int a5, int a6);
int FUN_0c05c700(int a4, int a5, int a6);
int FUN_0c08c3ec(int a4);
int FUN_0c04209a(int a4);
int FUN_0c0787a0(void);
int FUN_0c0254d8(int a4);
int FUN_0c0a85fc(void);
int FUN_0c0b27e2(int a4);
void FUN_0c0cadea(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c03b894(int a4);
int FUN_0c0ba278(int a4);
int FUN_0c0c25a4(void);
int FUN_0c095520(int a4);
int FUN_0c01b3fc(int a4);
int FUN_0c095dc0(int a4, int a5);
int FUN_0c04d812(int a4);
int FUN_0c06c800(void);
void FUN_0c08b37a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0b61e4(int a4);

int FUN_0c05c2f8(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t6;
    register int t23;
    register int t21;
    int t24;
    register int t25;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)((a4 + 0xD0))) << 2) + 0xC2475D4)));
        FUN_0c05a98a(a4, a5, a6);
        t6 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t6 + 0x21C)) = ((*(int *)((t6 + 0x21C))) - 2);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0x92DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x6);
            FUN_0c054c8a(a4);
            FUN_0c0909fc(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t21 = a4;
    }
    t23 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t23 - 1);
    if (((int)(t23 - 1) >= 0) && (t24 = *(int *)((a4 + 0x1C)), t25 = *(int *)((t24 + 0x20C)), (t25 & 0x1A00) == 0)) {
    } else {
        FUN_0c0e19f2(t21);
    }
    return FUN_0c01cdc2(a4);
}



int FUN_0c05c700(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t4;
    register int t19;
    register int t17;
    int t20;
    register int t21;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        t4 = *(int *)((((*(int *)((a4 + 0xD0))) << 2) + 0xC2475D4));
        *(unsigned int *)((t4 + 0x21C)) = ((*(int *)((t4 + 0x21C))) - 1);
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x8);
            FUN_0c054c8a(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t17 = a4;
    }
    t19 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t19 - 1);
    if (((int)(t19 - 1) >= 0) && (t20 = *(int *)((a4 + 0x1C)), t21 = *(int *)((t20 + 0x20C)), (t21 & 0x1A00) == 0)) {
    } else {
        FUN_0c0e19f2(t17);
    }
    return FUN_0c01cdc2(a4);
}

int FUN_0c08c3ec(int a4)
{
    int stk[5];
    register int t1;
    register float u10;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((*(short *)((t1 + 0x3CE))) + (*(short *)((a4 + 0x8A)))));
    nlRotateAX(((*(short *)((t1 + 0x3CC))) + (*(short *)((a4 + 0x88)))));
    u10 = *(float *)((a4 + 0x90));
    nlScale(u10, u10, u10);
    FUN_0c0de000((*(float *)((a4 + 0x90))));
    if ((*(short *)((a4 + 0xA2))) != 0) {
        FUN_0c0848bc((*(float *)((a4 + 0x7C))), (*(float *)((a4 + 0x80))), (*(float *)((a4 + 0x84))));
    } else {
        FUN_0c0848d6((*(float *)((a4 + 0x7C))), (*(float *)((a4 + 0x80))), (*(float *)((a4 + 0x84))));
    }
    FUN_0c0c475c((*(short *)((a4 + 0x9A))), (*(float *)((a4 + 0x94))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    return FUN_0c08c170(a4);
}

int FUN_0c04209a(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x4E4));
    *(unsigned int *)((a4 + 0x4E4)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        t0 = *(int *)((a4 + 0x2EC));
        if ((t0 & 12) != 0) {
            t1 = *(int *)((a4 + 0x4DC));
            t2 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t2 + 0x1);
            if ((int)(*(short *)((((((t2 + 0x1) << 2) << 1) + (*(int *)((((((t1 - 76) << 1) + (t1 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                if ((*(int *)((a4 + 0x5B8))) == 0) {
                    *(unsigned int *)((a4 + 0x304)) = 0x0;
                    t1 = *(int *)((a4 + 0x4F0));
                    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)((((((t1 << 2) + t1) << 2) + 0xC1F8E3C) + 0x10))) + 0x12A)));
                    t1 = *(int *)((a4 + 0x4F0));
                    *(unsigned int *)((a4 + 0x5B8)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t1 << 2) + t1) << 2)) + 0x10))) + 0x12C)));
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x4E4)) = 0xFFFFFFFF;
                    *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) - 1);
                    return 0x4E0;
                }
                *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
                return FUN_0c03f4bc(a4);
            }
            return FUN_0c041dd0(a4);
        }
        return t0;
    }
    return 0x4E4;
}

int FUN_0c0787a0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = 0x10;
    t2 = 0xC0FFDF0;
    for (;;) {
        t4 = FUN_0c0e19aa(0xC078286, 0x8C4, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t4);
        *(unsigned int *)((t4 + 0xBC)) = t1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(t2); }
        FUN_0c0e6248();
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x28C + t4) + 0x0)) = (*(short *)((t2 + 0x12)));
        t2 = (t2 + 0x18);
        *(float *)((t4 + 0x274)) = 1.0f;
        *(float *)((t4 + 0x278)) = 1.0f;
        *(float *)((t4 + 0x27C)) = 1.0f;
        *(float *)((t4 + 0x284)) = 1.0f;
        *(unsigned int *)((t4 + 0x3D4)) = (0x474 + t4);
        *(unsigned int *)((t4 + 0x3D8)) = (0x4E0 + t4);
        *(unsigned int *)((t4 + 0x3DC)) = (0x54C + t4);
        *(unsigned int *)((t4 + 0x3E0)) = (0x5B8 + t4);
        t1 = (t1 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return 0x3E0;
}

int FUN_0c0254d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((*(int *)((a4 + 0x210))) == 56) {
        t3 = 0x2B4;
        if ((*(int *)((a4 + 0x2B4))) == (*(int *)((a4 + 0x334)))) {
            if ((*(int *)((a4 + 0x33C))) != 0) {
                t4 = *(int *)((a4 + 0xBC));
                t5 = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x24);
            } else {
                t4 = *(int *)((a4 + 0xBC));
                t5 = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x3C);
            }
            *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
            *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
            *(float *)((a4 + 0x1D4)) = 10.0f;
            FUN_0c056118(a4, 0x3, t5, (*(int *)((a4 + 0x33C))));
            *(unsigned int *)((a4 + 0x33C)) = 0x0;
            *(unsigned int *)((a4 + 0x210)) = 0x39;
            t3 = 0x210;
        }
        return t3;
    }
    t3 = *(int *)((a4 + 0x2EC));
    if ((t3 & 12) != 0) {
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x554)) = 0x0;
        return FUN_0c02a19a(a4, t0, t1, t2);
    }
    return t3;
}

int FUN_0c0a85fc(void)
{
    int stk[3];

    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x4))) & 0x100) != 0) {
        FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        FUN_0c0c45d0();
    } else {
        FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
        FUN_0c0a8bb0((*(int *)0xC23ED58));
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    return FUN_0c0a8362();
}

int FUN_0c0b27e2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = FUN_0c0d9e90((*(int *)((a4 + 0x3AC))));
    t0 = *(short *)(((0x6E + a4) + 0x0));
    *(unsigned short *)(((0x6E + a4) + 0x0)) = (int)((float)t0 + _builtin_fabsf((float)(int)(u0 * 128.0f)));
    t1 = *(int *)((a4 + 0x3AC));
    t2 = (int)((float)t0 + _builtin_fabsf((float)(int)(u0 * 128.0f)));
    if ((int)t1 >= (int)0x8000) {
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        t2 = 0x0;
    }
    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x40);
    FUN_0c085704(a4);
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    *(float *)((a4 + 0x48)) = 0.0f;
    *(float *)((a4 + 0x4C)) = 0.0f;
    *(float *)((a4 + 0x50)) = 0.0f;
    FUN_0c0bb788(a4);
    t0 = *(int *)0xC23ED5C;
    if ((t0 & 4) != 0) {
        return FUN_0c0b26a2(a4);
    }
    return t0;
}


int FUN_0c03b894(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)(*(int *)((a4 + 0x3AC))) < 0) {
        if ((unsigned short)(*(short *)((0xC2460F8 + (((*(int *)((a4 + 0x498))) << 2) << 2)))) == 3) {
            *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
            FUN_0c03a536(a4);
        }
        t0 = *(int *)((a4 + 0x3B0));
        t1 = *(int *)0xC246310;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                t2 = *(int *)((a4 + 0x2EC));
                if ((t2 & 12) != 0) {
                    *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
                    return FUN_0c03a536(a4);
                }
                return t2;
            }
            if ((t1 & 0x4) != 0) {
                *(unsigned int *)((a4 + 0x3B0)) = 0x2;
                return 0x3B0;
            }
            if ((0x2 & (*(int *)0xC246304)) == 0) {
                *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
                return FUN_0c03a536(a4);
            }
            return t0;
        }
        if ((t1 & 0x2) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3B0)) = 0x1;
            return 0x3B0;
        }
        if ((0x2 & (*(int *)0xC246304)) == 0) {
            *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
            return FUN_0c03a536(a4);
        }
        return t0;
    }
    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c03a536(a4);
    }
    return t0;
}

int FUN_0c0ba278(int a4)
{
    register int t0;
    register float u8;
    int t11;

    t0 = *(int *)((a4 + 0x3C));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0x0))), (*(float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0x4))), (*(float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0x8))));
    nlRotateAZ(0x8000);
    u8 = *(float *)0xC0BA438;
    nlScale(u8, u8, u8);
    FUN_0c0de000(u8);
    t11 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t11 + 0x1);
    FUN_0c0c465c(((0x7 & (t11 + 0x1)) + 0x34));
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0xC) + 0x0))), (*(float *)((((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0xC) + 0x4))), (*(float *)((((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC204720) + 0xC) + 0x8))));
    nlScale(u8, u8, u8);
    FUN_0c0de000(u8);
    FUN_0c0c465c((((*(int *)((a4 + 0x48))) & 0x7) + 0x34));
    return nlPopMatrix(0x1);
}



int FUN_0c01b3fc(int a4)
{
    FUN_0c0cc6dc();
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x1);
    FUN_0c0c4364((*(int *)0xC23ED50), 0x1);
    FUN_0c0cc88c((*(int *)0xC23ED50));
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0852bc((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFFCF);
    FUN_0c01a874();
    *(unsigned int *)0xC23ED9C = 0x7;
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(volatile int *)((a4 + 0x38));
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    FUN_0c016d74();
    FUN_0c055936((*(int *)0xC23ED50));
    FUN_0c058fa0((*(int *)0xC23ED50));
    FUN_0c084b1a((*(int *)0xC23ED8C), 0x0);
    FUN_0c0cc752((*(int *)0xC23ED50));
    FUN_0c019a36(a4);
    return FUN_0c04996a();
}

int FUN_0c095dc0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC095E5E, 0x4C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    t1 = *(int *)((a4 + 0xBC));
    t2 = *(short *)((a5 + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + ((((unsigned short)t2 << 1) + (unsigned short)t2) << 2))); }
    *(unsigned int *)((t0 + 0x3C)) = (*(short *)((a4 + 0x6E)));
    *(unsigned int *)(((0x48 + t0) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x6)));
    *(float *)((t0 + 0x40)) = ((*(float *)((a4 + 0x278))) * (1.0f + 1.0f));
    t0 = 0x245;
    for (;;) {
        t1 = FUN_0c0cbafc(t0, 0x2, 0xFC000000, 0x84000000);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x259) {
            break;
        }
    }
    return t1;
}

int FUN_0c04d812(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        if (((*(int *)((a4 + 0x2EC))) & 0x100) != 0) {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
            FUN_0c053ac4(a4);
            *(unsigned short *)(((0x6E + a4) + 0x0)) = ((*(short *)(((0x6E + a4) + 0x0))) + (*(short *)((((*(int *)(((0x2A0 + a4) + 0x0))) << 1) + 0xC0F85D8))));
            if ((int)(*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247594))) > 0) {
                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                return FUN_0c04e9da(a4);
            }
            return FUN_0c050f1c(a4);
        }
        *(unsigned short *)(((0x6E + a4) + 0x0)) = ((*(short *)(((0x6E + a4) + 0x0))) + ((*(short *)((((((int)((*(int *)((a4 + 0x2EC))) & 0x60) >> 5) << 1) << 1) + 0xC0F85D8))) - 32768));
        *(unsigned int *)((a4 + 0x2D4)) = 0x0;
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c06c800(void)
{
    int stk[9];
    register int t0;
    register int t12;
    register int t2;

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x4)) = *(struct mv4 *)(0xC0FB368); }
    t0 = *(int *)0xC23ED58;
    t12 = t0;
    if (t0 != 15) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t2 = FUN_0c0e19aa(0xC06C2EC, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(0xC0FB350); }
        FUN_0c0e6248();
        *(float *)((t2 + 0x224)) = (*(float *)0xC0FB364);
        *(unsigned int *)(((0x21C + t2) + 0x0)) = (*(short *)0xC0FB362);
        *(unsigned int *)((t2 + 0x78)) = 0xC1B6A14;
        *(unsigned int *)((t2 + 0x74)) = 0x15;
        *(unsigned int *)((t2 + 0xC0)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0xBC)) = 0x10;
        FUN_0c01ce40(t2, (*(int *)((t2 + 0x78))), (*(float *)0xC06C994));
        t12 = (FUN_0c01d636(t2, (((int)stk + 4) + 0x4), 0x0));
    }
    return t12;
}

void FUN_0c08b37a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];
    register int t1;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u12;
    register int t13;
    register int t15;
    register int t40;
    register int t32;
    register int t34;
    register float u35;
    register float u36;
    register float u37;
    register int t2;
    register int t3;
    register int t5;
    register float u10;
    register float u11;
    register int t23;
    register int t25;
    register float u26;
    register float u27;
    register float u28;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC246FF0;
    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)(((int)stk + 8));
    t4 = (t1 + 0x30);
    t6 = 0xC23F268;
    t7 = (t1 + 0x30);
    t8 = (t1 + 0x30);
    t9 = 0x0;
    u12 = f4;
    for (;;) {
        t13 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t13 + 0x4);
        t15 = *(int *)((((t13 + 0x4) - 4) + 0x0));
        t40 = t3;
        if ((*(int *)((0xC247030 + (t9 << 2)))) == 4) {
            t5 = t6;
            u10 = 0.0f;
            u12 = (*(float *)((t15 + 0x270)));
            u11 = (*(float *)((t5 + 0x4)));
            u12 = (u12 + 3.0f);
            u11 = (u11 - u12);
            t32 = t2;
            t34 = t4;
            u35 = u10;
            u36 = u11;
            u37 = u12;
            if (u10 > u11) {
                u11 = (*(float *)((t7 + 0x4)));
                u11 = (u11 - u12);
                if (u11 > u10) {
                    t4 = t15;
                    t4 = (t4 + 0x30);
                    FUN_0c08b2d0(t4, (*(short *)((t15 + 0x6E))));
                } else {
                    t23 = t2;
                    t25 = t4;
                    u26 = u10;
                    u27 = u11;
                    u28 = u12;
                }
                t32 = t23;
                t34 = t25;
                u35 = u26;
                u36 = u27;
                u37 = u28;
            }
            u10 = u35;
            u11 = u36;
            u12 = u37;
            t2 = t32;
            t3 = 0xC0E61D4;
            t4 = t34;
            t2 = t5;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(t2); }
            t40 = 0xC0E61D4;
        }
        t2 = 0xC;
        t3 = t40;
        t9 = (t9 + 0x1);
        t8 = (t8 + 0xC);
        t7 = (t7 + 0xC);
        t6 = (t6 + 0xC0);
        if ((int)t9 >= (int)t2) {
            break;
        }
    }
}

int FUN_0c0b61e4(int a4)
{
    register int t13;
    register int t17;

    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    FUN_0c0a5b78();
    FUN_0c0a5fa4();
    FUN_0c0a5fdc();
    if (((*(int *)0xC23ED5C) & 16) != 0) {
        *(unsigned int *)0xC23ED9C = 0x5;
        return FUN_0c084bf6((*(int *)0xC23ED90), (*(int *)0xC23ED94));
    }
    if ((*(int *)((a4 + 0x58))) == 20) {
        FUN_0c084bf6(0x12, 0x0);
    }
    t13 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t13 - 1);
    t17 = 0x58;
    if ((int)(t13 - 1) <= 0) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
        FUN_0c0de310(0.0f, 0.0f, 0.0f);
        FUN_0c0a5b40();
        *(unsigned int *)0xC23ED44 = 0x1;
        *(unsigned int *)0xC23ED48 = 0x0;
        t17 = 0xC23ED48;
    }
    return t17;
}





