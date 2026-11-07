/* Straight-line functions with calls and guards (batch gen_ix): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019a36(void);
int FUN_0c01a874(void);
int FUN_0c01a89c(int);
int FUN_0c01cdc2(int);
int FUN_0c01cdf2(int);
int FUN_0c0208fc(int);
int FUN_0c0222c0(int);
int FUN_0c02248a(int);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c02f04a(int);
int FUN_0c02f174(int);
int FUN_0c02f4b8(int, int);
int FUN_0c02f614(int, int);
int FUN_0c02fb76(int);
int FUN_0c034314(int, int, int);
int FUN_0c034d0c(int, int);
int FUN_0c035b26(int);
int FUN_0c03aaa2(int, int);
int FUN_0c03b0e2(int, int);
int FUN_0c04f7cc(void);
int FUN_0c0519f0(int);
int FUN_0c054c8a(int);
int FUN_0c056118(int, int, int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c07a0f0(int);
int FUN_0c07a3d6(int);
int FUN_0c082cfa(int, int);
int FUN_0c082f04(int, int, float);
int FUN_0c082f78(int, int, int);
int FUN_0c082fae(int, int, int, int, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c084b1a(int, int);
int FUN_0c0852bc(int);
int FUN_0c0a8d80(int, int, int, int);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc7d8(int);
int FUN_0c0cc88c(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e1e6a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e35b6(int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c0ed62c(int);
int FUN_0c0ed650(int);
int FUN_0c22cfdc(void);
int FUN_0c22cff4(int, int);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlExp(float);
float nlLog(float);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nl_set_cnv_proj_pers(void);
int FUN_0c0916e8(int a4);
int FUN_0c0a0548(int a4);
int FUN_0c061822(int a4, int a5, int a6, int a7);
int FUN_0c079d00(void);
int FUN_0c22d1fe(int a4, int a5, int a6);
int FUN_0c04c236(int a4);
void FUN_0c07b558(void);
int FUN_0c0e1a1e(int a4);
int FUN_0c0918fc(int a4);
int FUN_0c0af25c(void);
int FUN_0c030e0e(int a4);
int FUN_0c0ae970(void);
int FUN_0c0dd0f0(float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c083548(int a4);
int FUN_0c0af6e0(int a4);
int FUN_0c0915fc(int a4);
float FUN_0c0ab550(void);
int FUN_0c0c1a44(int a4);
int FUN_0c03b260(int a4, int a5);
int FUN_0c05a544(int a4);
int FUN_0c08faf8(int a4, int a5, int a6, int a7);
int FUN_0c092c3e(int a4, int a5);
int FUN_0c0afca4(int a4);
int FUN_0c01b9d4(int a4);
int FUN_0c042e74(int a4);
int FUN_0c0de5a0(int a4);
int FUN_0c027c60(int a4, int a5);
int FUN_0c02c16e(int a4);
int FUN_0c030614(int a4);
int FUN_0c0837a0(int a4);
void FUN_0c0da230(float f4, float f5);
int FUN_0c03ac0e(int a4, int a5);

int FUN_0c0916e8(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x54));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    FUN_0c0c475c((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x58))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0399999991f);
    *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) * 0.899999976f);
    return 0x58;
}


int FUN_0c061822(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        t0 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t0 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    return FUN_0c01cdc2(a4);
}

int FUN_0c079d00(void)
{
    int stk[11];
    register int t1;
    register int t7;

    { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 4)) = *(struct mv6 *)(0xC100D44); }
    t1 = ((int (*)(int, int, int, Stk6))(FUN_0c0e19aa))(0xC079F10, 0xB4, (*(int *)0xC23ECE4), *(Stk6 *)(((int)stk + 4)));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x78)) = 0x11B8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(((int)stk + 4)); }
    *(unsigned short *)((t1 + 0x62)) = 0x0;
    *(unsigned int *)((t1 + 0x88)) = 0x0;
    *(float *)((t1 + 0x54)) = (*(float *)((t1 + 0x38)));
    *(float *)((t1 + 0x58)) = (*(float *)((t1 + 0x34)));
    FUN_0c07a0f0(t1);
    t7 = ((int (*)(int, int, int))(FUN_0c0e19aa))(0xC07A0B0, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t7);
    *(unsigned int *)((t7 + 0x8C)) = t1;
    *(unsigned int *)((t7 + 0x78)) = (*(int *)((t1 + 0x78)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(unsigned short *)((t7 + 0x62)) = ((*(short *)((t1 + 0x62))) - 32768);
    *(unsigned int *)((t7 + 0x88)) = 0x1;
    *(float *)((t7 + 0x54)) = (*(float *)((t7 + 0x38)));
    *(float *)((t7 + 0x58)) = (*(float *)((t7 + 0x34)));
    FUN_0c07a0f0(t7);
    return (FUN_0c07a3d6(t1));
}

int FUN_0c22d1fe(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c22cfdc();
    if (a5 == 1) {
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
        t1 = *(int *)((a6 + 0x0));
        t2 = *(int *)((a4 + 0x1C));
        if ((int)(t1 - t2) < (int)(*(int *)((a4 + 0x24)))) {
            t3 = *(int *)((a4 + 0x24));
            t4 = *(int *)((a6 + 0x4));
            t5 = (t3 - (t1 - t2));
            if ((int)t4 < (int)(t3 - (t1 - t2))) {
                t5 = t4;
            }
            FUN_0c0e631c((((*(int *)((a4 + 0x20))) + (t1 - t2)) + (*(int *)((a4 + 0x1C)))), (*(int *)((a6 + 0x0))), t5);
        }
        t1 = *(int *)((a6 + 0x0));
        t2 = *(int *)((a4 + 0x1C));
        t3 = *(int *)((a6 + 0x4));
        if ((int)((t1 - t2) + t3) > (int)(*(int *)((a4 + 0x20)))) {
            t4 = *(int *)((a4 + 0x20));
            t5 = *(int *)((a6 + 0x4));
            t6 = (((t1 - t2) + t3) - t4);
            if ((int)t5 < (int)(((t1 - t2) + t3) - t4)) {
                t6 = t5;
            }
            t4 = *(int *)((a4 + 0x1C));
            FUN_0c0e631c(t4, (t4 + (((t1 - t2) + t3) - t6)), t6);
        }
    } else {
        if (a5 == 0) {
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return FUN_0c22cff4(a4, t0);
}

int FUN_0c04c236(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x2B4))) == (*(int *)((a4 + 0x334)))) {
        if ((*(int *)((a4 + 0x33C))) != 0) {
            t0 = *(int *)((a4 + 0xBC));
            t1 = (((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x24);
        } else {
            t0 = *(int *)((a4 + 0xBC));
            t1 = (((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x3C);
        }
        *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
        *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
        *(float *)((a4 + 0x1D4)) = (*(float *)0xC04C404);
        FUN_0c056118(a4, 0x3, t1, (*(int *)((a4 + 0x33C))));
        *(unsigned int *)((a4 + 0x33C)) = 0x0;
        *(unsigned int *)((a4 + 0x210)) = 0x39;
        return FUN_0c0519f0(a4);
    }
    return 0x2B4;
}

void FUN_0c07b558(void)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC07B70E, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0xBC)) = t0;
        *(unsigned int *)((t2 + 0x21C)) = 0x4;
        *(unsigned int *)(((0x234 + t2) + 0x0)) = ((FUN_0c0da2e0()) & 0x3FF);
        if ((*(int *)0xC23ED50) == 95) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC200828)); }
            *(unsigned int *)((t2 + 0x228)) = 0xC2007E0;
            *(unsigned int *)((t2 + 0x220)) = 0x2;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((0xC2007E0 + (((t0 << 1) + t0) << 2))); }
            *(unsigned int *)((t2 + 0x228)) = 0xC200828;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x60)) = *(struct mv3 *)((t2 + 0x30)); }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
}

int FUN_0c0e1a1e(int a4)
{
    int stk[4];
    register int t3;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x18)));
    if ((*(int *)((a4 + 0x4))) != 0) {
        t3 = ((int (*)(int))((*(int *)((a4 + 0x4)))))(a4);
    }
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    if (((unsigned short)(*(short *)((a4 + 0x2E))) & 4) != 0) {
        FUN_0c0ed62c(a4);
    }
    if (((unsigned short)(*(short *)((a4 + 0x2E))) & 4) == 0) {
        *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x18)) = (*(int *)((a4 + 0x18)));
        *(unsigned int *)(((*(int *)((a4 + 0x18))) + 0x14)) = (*(int *)((a4 + 0x14)));
        FUN_0c0e1e6a(a4);
    }
    if (((unsigned short)(*(short *)((a4 + 0x2E))) & 16) == 0) {
        if (((unsigned short)(*(short *)((a4 + 0x2E))) & 8) != 0) {
            FUN_0c0ed650(a4);
        } else {
            FUN_0c0e2a4c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) - 1);
        }
    }
    *(unsigned int *)0xC94C790 = (*(int *)(((int)stk + 4)));
    return FUN_0c0e35b6(0xC94C6F8, 0x3);
}

int FUN_0c0918fc(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x54));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    t0 = FUN_0c0da2e0();
    FUN_0c0c465c(((*(int *)(((0x60 + a4) + 0x0))) + (t0 & 0x1)));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0399999991f);
    return 0x54;
}

int FUN_0c0af25c(void)
{
    register int t3;

    if ((*(int *)0xC2475A4) == 1) {
        t3 = (*(int *)0xC23EDC0);
    } else {
        t3 = (*(int *)0xC23EDC4);
    }
    *(unsigned char *)0xC10FD64 = (*(signed char *)((((((t3 >> 1) << 1) + (t3 >> 1)) + 0xC10FD90) + 0x0)));
    *(unsigned char *)0xC10FD6C = (*(signed char *)(((((((t3 >> 1) << 1) + (t3 >> 1)) + 0xC10FD90) + 0x1) + 0x0)));
    *(unsigned char *)0xC10FD74 = (*(signed char *)((((((((t3 >> 1) << 1) + (t3 >> 1)) + 0xC10FD90) + 0x1) + 0x1) + 0x0)));
    return FUN_0c0a8d80(0xC10FD64, 0xC10FD74, 0xC23EDC0, 0xC10FD90);
}

int FUN_0c030e0e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
        return ((int (*)(int))(t1))(a4);
    }
    if ((*(int *)((a4 + 0x4E8))) != 0) {
        t0 = FUN_0c02f4b8(a4, 0x1);
        if (t0 == 0) {
            t0 = *(int *)((a4 + 0x538));
            if ((t0 != 3) && (t0 != 4)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                return 0x4F8;
            }
            *(unsigned int *)((a4 + 0x554)) = 0x1;
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            t0 = *(int *)((a4 + 0x4F0));
            t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
            return ((int (*)(int))(t1))(a4);
        }
        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
        return 0x4F8;
    }
    t0 = FUN_0c02f04a(a4);
    if (t0 != 0) {
        t0 = FUN_0c035b26(a4);
        if (t0 != 0) {
            t0 = FUN_0c02f4b8(a4, 0x0);
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                return 0x4F8;
            }
            *(unsigned int *)((a4 + 0x554)) = 0x1;
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            t0 = *(int *)((a4 + 0x4F0));
            t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
            return ((int (*)(int))(t1))(a4);
        }
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
        return ((int (*)(int))(t1))(a4);
    }
    *(unsigned int *)((a4 + 0x554)) = 0x1;
    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    t0 = *(int *)((a4 + 0x4F0));
    t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
    return ((int (*)(int))(t1))(a4);
}


int FUN_0c0dd0f0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[18];
    register float u0;
    register float u1;

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = (-1.0f);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    u0 = (f8 * f9);
    u1 = (u0 * (1.0f + 1.0f));
    u1 = -u1;
    *(float *)(((int)stk + 60)) = (u1 / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0xC990E9C = f8;
    *(float *)0xC990EA0 = f9;
    *(float *)0xC990EA4 = (1.0f / f8);
    *(float *)0xC94825C = f8;
    *(float *)0xC948244 = (-f8);
    *(float *)0xC948260 = f9;
    *(float *)0xC948258 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    return (nl_set_cnv_proj_pers());
}

int FUN_0c083548(int a4)
{
    register int t1;
    register int t2;
    register float u17;

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC247CB8) << 2) + 0xC246FF0));
    t2 = *(short *)0xC247CBE;
    FUN_0c082cfa(a4, 0x2);
    FUN_0c082f78(a4, 0x3, (0x22C + t1));
    FUN_0c082f78(a4, 0x4, (0x230 + t1));
    FUN_0c082f78(a4, 0x5, (0x234 + t1));
    FUN_0c082f04(a4, 0x6, (*(float *)0xC083628));
    FUN_0c082f04(a4, 0x7, (float)(*(short *)((t1 + 0x6E))));
    FUN_0c082fae(a4, 0x6, 0x1, (int)(float)t2, (*(float *)0xC08362C));
    FUN_0c082fae(a4, 0x7, 0x1, (int)(float)t2, (float)((*(short *)((t1 + 0x6E))) + 0x1FFF));
    FUN_0c082f04(a4, 0x9, (*(float *)0xC083630));
    *(unsigned short *)0xC102948 = (int)(float)t2;
    u17 = *(float *)0xC083638;
    *(unsigned short *)0xC102950 = (int)((float)t2 + u17);
    return (int)((float)t2 + u17);
}

int FUN_0c0af6e0(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x48));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x48))));
    FUN_0c0c475c(0x2F1, (*(float *)((a4 + 0x50))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    u0 = *(float *)0xC0AF7D8;
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + u0);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC0AF7DC));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + u0);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.00499999989f);
    return 0x50;
}

int FUN_0c0915fc(int a4)
{
    int stk[4];
    register float u7;
    register int t16;
    register float u24;
    register int t27;

    FUN_0c08498e(0.299999982f, 0.399999976f, 1.0f);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x4A))));
    nlRotateAX((*(short *)((a4 + 0x48))));
    u7 = *(float *)((a4 + 0x54));
    nlScale(u7, u7, u7);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    FUN_0c0c475c((*(int *)((a4 + 0x5C))), (*(float *)((a4 + 0x58))));
    nlPopMatrix(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t16 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t16 - 1);
    if ((int)(t16 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    u24 = (*(float *)((a4 + 0x54)));
    u24 = u24 + 0.0799999982f * ((*(float *)(((0x50 + a4) + 0x0))) - (*(float *)(((0x54 + a4) + 0x0))));
    *(float *)((a4 + 0x54)) = u24;
    t27 = 0x60;
    if ((int)(*(int *)((a4 + 0x60))) < (int)0xA) {
        *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) * 0.799999952f);
        t27 = 0x58;
    }
    return t27;
}


int FUN_0c0c1a44(int a4)
{
    int stk[19];
    register int t1;
    register int t3;
    register int t5;
    register float u8;
    register int t10;
    register int t11;
    register int t15;
    register int t16;
    register int t20;
    register int t21;

    FUN_0c0db0a0(0x14, 0x32);
    t1 = *(int *)((a4 + 0x7C));
    *(unsigned int *)(((int)stk + 52)) = t1;
    t3 = (*(int *)(((t1 << 2) + 0xC1E3AA0)));
    *(int *)((int)stk + 48) = t3;
    t5 = (*(int *)(((int)stk + 52)));
    *(int *)((int)stk + 44) = t5;
    *(int *)((int)stk + 40) = 0xC1E3CF0;
    nlPrintf(0xC1E3CF0, t5, t3);
    FUN_0c0db0a0(0x14, 0x33);
    u8 = *(float *)0xC0C1B98;
    t10 = *(short *)(((*(int *)((a4 + 0x5C))) + 0x4));
    *(unsigned short *)(((int)stk + 52)) = t10;
    *(float *)(((int)stk + 36)) = ((float)t10 * u8);
    t11 = *(short *)(((int)stk + 52));
    *(int *)((int)stk + 32) = (unsigned short)t11;
    *(int *)((int)stk + 28) = 0xC1E3D0C;
    nlPrintf(0xC1E3D0C, (unsigned short)t11, ((float)t10 * u8));
    FUN_0c0db0a0(0x14, 0x34);
    t15 = *(short *)(((*(int *)((a4 + 0x5C))) + 0x2));
    *(unsigned short *)(((int)stk + 52)) = t15;
    *(float *)(((int)stk + 24)) = ((float)t15 * u8);
    t16 = *(short *)(((int)stk + 52));
    *(int *)((int)stk + 20) = (unsigned short)t16;
    *(int *)((int)stk + 16) = 0xC1E3D28;
    nlPrintf(0xC1E3D28, (unsigned short)t16, ((float)t15 * u8));
    FUN_0c0db0a0(0x14, 0x35);
    t20 = *(short *)(((*(int *)((a4 + 0x5C))) + 0x0));
    *(unsigned short *)(((int)stk + 52)) = t20;
    *(float *)(((int)stk + 12)) = ((float)t20 * u8);
    t21 = *(short *)(((int)stk + 52));
    *(int *)((int)stk + 8) = (unsigned short)t21;
    *(int *)((int)stk + 4) = 0xC1E3D44;
    return (nlPrintf(0xC1E3D44, (unsigned short)t21, ((float)t20 * u8)));
}

int FUN_0c03b260(int a4, int a5)
{
    register int t5;

    if ((*(int *)((a4 + 0x554))) != 2) {
        return FUN_0c03b0e2(a4, a5);
    }
    if ((int)(*(int *)((a4 + 0x57C))) > 0) {
        *(unsigned int *)((a4 + 0x57C)) = 0x0;
    }
    t5 = 0x0;
    if ((*(int *)((a4 + 0x340))) != 5) {
        t5 = 0x1;
    }
    *(unsigned int *)((a4 + 0x2C4)) = (*(int *)(((((*(int *)(((0x5A4 + a4) + 0x0))) << 2) + (0xC1F02C8 + ((t5 << 2) << 2))) + 0x0)));
    *(unsigned int *)(((((*(int *)((a4 + 0x5B4))) << 2) + (0x2CC + a4)) + 0x0)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x200;
    *(unsigned int *)((a4 + 0x210)) = 0x7;
    *(unsigned int *)((a4 + 0x4C4)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x4;
    return 0x4C8;
}

int FUN_0c05a544(int a4)
{
    int stk[21];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
    t1 = 0x6E;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((((0x224 + a4) + t2) + 0x0));
        t4 = *(int *)((((0x234 + a4) + t2) + 0x0));
        if ((int)t4 > 0) {
            t5 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 8)) = (unsigned short)(*(short *)((((((t3 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x0)));
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((((((t3 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x4)));
                *(unsigned int *)(((int)stk + 16)) = 0x0;
                t1 = 0x0;
                *(unsigned short *)(((int)stk + 20)) = t1;
                t1 = (*(short *)((((((t3 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x2)));
                *(unsigned short *)(((int)stk + 22)) = t1;
                t1 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((a4 + 0x30)); }
                t1 = 0x220;
                *(unsigned int *)(((int)stk + 36)) = (*(int *)(((int)stk + 4)));
                t10 = *(short *)((a4 + t1));
                t1 = 0x24;
                *(unsigned short *)((((int)stk + 4) + t1)) = t10;
                t1 = 0x26;
                *(unsigned short *)((((int)stk + 4) + t1)) = 0x0;
                *(unsigned int *)(((int)stk + 44)) = 0x1;
                t1 = (FUN_0c0208fc((((int)stk + 4) + 0x4)));
                if (((int)t1 >= 0) && (t5 = (t5 + 0x1), (int)t5 < (int)t4)) continue;
                break;
            }
        }
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x10) {
            break;
        }
    }
    return t1;
}



int FUN_0c0afca4(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x48));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x48))));
    FUN_0c0c475c(0x2F1, (*(float *)((a4 + 0x50))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.98999995f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + 0.00999999978f);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.00499999989f);
    return 0x50;
}

int FUN_0c01b9d4(int a4)
{
    int stk[4];

    *(int *)((int)stk + 4) = a4;
    FUN_0c0cc6dc();
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
        FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x1);
    FUN_0c0c4364((*(int *)0xC23ED50), 0x1);
    FUN_0c0cc88c((*(int *)0xC23ED50));
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0852bc((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFE7F);
    FUN_0c01a874();
    *(unsigned int *)0xC23ED9C = 0x7;
    FUN_0c084b1a((*(int *)0xC23ED8C), 0x0);
    FUN_0c016d74();
    FUN_0c0cc7d8((*(int *)0xC23ED50));
    FUN_0c04f7cc();
    FUN_0c01a89c((a4 + 0x38));
    *(volatile int *)((a4 + 0x38));
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    *(unsigned int *)0xC23EDB0 = 0x0;
    return FUN_0c019a36();
}

int FUN_0c042e74(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(int *)((a4 + 0x1BC))) != 0) {
        *(unsigned int *)((a4 + 0x3AC)) = 0x1;
        *(unsigned int *)((a4 + 0x3B0)) = 0x1E;
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    }
    if ((*(int *)((a4 + 0x3AC))) != 0) {
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x222);
        t0 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        }
    }
    u0 = *(float *)0xC042F8C;
    t0 = *(int *)((a4 + 0x3B4));
    *(unsigned int *)((a4 + 0x3B4)) = (t0 + 0x200);
    u1 = u0;
    u1 = u1 + u0 * (FUN_0c0da410((t0 + 0x200)));
    *(float *)((a4 + 0x34)) = u1;
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0c465c((*(int *)((a4 + 0x28C))));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}

int FUN_0c0de5a0(int a4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u7;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    u0 = *(float *)(((a4 + 0x14) + 0x0));
    u1 = *(float *)0xC990EA8;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC948580);
    FUN_0c0db470(((*(int *)(((int)stk + 4))) + 0x8), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 8));
    if (!((*(float *)0xC94825C) > (u7 + (u0 * u1)))) {
        if (!((u7 - (u0 * u1)) > (*(float *)0xC948260))) {
            u10 = *(float *)(((int)stk + 12));
            u11 = *(float *)0xC948568;
            u12 = (u0 * u1);
            if (u10 > (-(u11 * u12))) {
                u13 = *(float *)(((int)stk + 16));
                if (u13 > (-(u11 * u12))) {
                    u15 = (u11 * u12);
                    u15 = u15 + u7 * (*(float *)0xC20CE34);
                    if (u15 > u10) {
                        u17 = (u11 * u12);
                        u17 = u17 + u7 * (*(float *)0xC20CE38);
                        if (!(u17 > u13)) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c027c60(int a4, int a5)
{
    register int t0;

    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x55C)) = ((*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t0 << 2) + t0) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    *(unsigned int *)((a4 + 0x20C)) = 0x80;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x534)) = 0x9;
    t0 = *(int *)((a4 + 0x544));
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            *(unsigned int *)((a4 + 0x564)) = 0x0;
            *(unsigned int *)((a4 + 0x56C)) = 0x0;
            *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
            return 0x4F8;
        }
        t0 = FUN_0c034d0c(a4, a5);
        if (t0 == 0) {
            return FUN_0c02a19a(a4);
        }
        *(unsigned int *)((a4 + 0x564)) = 0x0;
        *(unsigned int *)((a4 + 0x56C)) = 0x0;
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        return 0x4F8;
    }
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c02c16e(int a4)
{
    register int t25;

    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)0xC246A3C = 0x0;
        *(unsigned int *)((a4 + 0x474)) = 0xC02BFA8;
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)((a4 + 0x478)) = 0xC02C152;
    }
    if (!(((float)(*(int *)((a4 + 0x308))) * 0.5f) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F0)) = 0x1F;
    } else {
        *(unsigned int *)((a4 + 0x4F0)) = 0x20;
    }
    if (!(((float)(*(int *)((a4 + 0x308))) * 0.699999988f) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F4)) = 0x20;
    } else {
        if (!(((float)(*(int *)((a4 + 0x308))) * 0.399999976f) > (float)(*(int *)((a4 + 0x304))))) {
            if ((*(int *)((a4 + 0x4F4))) != 33) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t25 = 0x21;
        } else {
            if ((*(int *)((a4 + 0x4F4))) != 34) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t25 = 0x22;
        }
        *(unsigned int *)((a4 + 0x4F4)) = t25;
    }
    return 0x4F4;
}

int FUN_0c030614(int a4)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t4;
    register int t6;
    register int t7;

    t1 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
    *(unsigned int *)((a4 + 0x4C8)) = 0x1;
    t2 = FUN_0c034314(a4, t1, ((int)stk + 4));
    if (t2 != 0) {
        t4 = *(int *)((a4 + 0x538));
        if ((t4 != 4) && (t4 != 8)) {
            *(unsigned int *)((a4 + 0x4E8)) = 0x1;
            if (((*(int *)((a4 + 0x524))) != 0) && (t6 = *(int *)((a4 + 0x528)), t7 = *(int *)((a4 + 0x54C)), (int)t7 >= (int)t6)) {
                FUN_0c02248a(a4);
            } else {
                FUN_0c0222c0(a4);
            }
        } else {
            *(unsigned int *)((a4 + 0x508)) = 0x1;
            FUN_0c02f174(a4);
            *(unsigned int *)((a4 + 0x4E4)) = 0x0;
            *(unsigned int *)((a4 + 0x4E8)) = 0x2;
            FUN_0c02fb76(a4);
        }
    } else {
        *(unsigned int *)((a4 + 0x4E8)) = 0x0;
        FUN_0c02f614(a4, ((*(int *)(((int)stk + 4))) - 32768));
    }
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c0837a0(int a4)
{
    int stk[9];
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0(((*(int *)(((int)stk + 4))) + 0x22C));
    nlRotateAY((*(int *)((a4 + 0x3D8))));
    nlSubVector3op((((int)stk + 4) + 0x4), 0xC1028C8, (0x254 + a4));
    u8 = *(float *)((a4 + 0x278));
    u9 = *(float *)0xC1028D0;
    u10 = *(float *)((a4 + 0x280));
    u11 = *(float *)0xC1028C8;
    u12 = ((u10 - u9) * (u10 - u9));
    u12 = u12 + (u8 - u11) * (u8 - u11);
    nlScaleUnitVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), (_builtin_sqrtf(u12) * (1.0f + 1.0f)));
    FUN_0c082fae(a4, 0x0, 0x1, 0x28, ((*(float *)((a4 + 0x254))) + (*(float *)(((int)stk + 8)))));
    FUN_0c082fae(a4, 0x2, 0x1, 0x28, ((*(float *)((a4 + 0x25C))) + (*(float *)(((int)stk + 16)))));
    return (nlPopMatrix(0x1));
}

void FUN_0c0da230(float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (f4 == 0.0f) {
        
        return;
    }
    if (f5 == (float)(int)f5) {
        t0 = (int)f5;
        u0 = f4;
        if ((int)(int)f5 < 0) {
            t0 = (-(int)f5);
            u0 = (1.0f / f4);
        }
        t1 = t0;
        u1 = 1.0f;
        u2 = u0;
        for (;;) {
            if ((t1 & 0x1) != 0) {
                u1 = (u1 * u2);
            }
            t1 = ((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u)));
            t1 = (t1 >> 1);
            if (t1 != 0) {
                u2 = (u2 * u2);
                continue;
            }
            break;
        }
        return;
    }
    if (0.0f > f4) {
        return;
    }
    u0 = nlLog(f4);
    nlExp((f5 * u0));
}

int FUN_0c03ac0e(int a4, int a5)
{
    register int t4;

    if ((*(int *)((a4 + 0x5C8))) == 0) {
        return FUN_0c03aaa2(a4, a5);
    }
    if ((int)(*(int *)((a4 + 0x57C))) < (int)0x3) {
        *(unsigned int *)((a4 + 0x57C)) = 0x3;
    }
    t4 = *(int *)((a4 + 0x5A4));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 != 3) {
                } else {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x4E8;
                }
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x4E6;
            }
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x4E7;
        }
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x4E5;
    }
    *(unsigned int *)((a4 + 0x4C4)) = 0x3;
    *(unsigned int *)((a4 + 0x4C8)) = 0xC;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    return 0x1B0;
}

int FUN_0c0a0548(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC23ED50;
    if ((t0 != 0) && ((t0 != 98) && ((t0 != 99) && (t0 != 100)))) {
        return t0;
    }
    t0 = FUN_0c0e19aa(0xC0A009C, 0x2868, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = a4;
    *(unsigned int *)((t0 + 0x40)) = ((int)0x2 << (int)(*(int *)((a4 + 0x2E8))));
    *(unsigned int *)((t0 + 0x48)) = (*(int *)((a4 + 0x498)));
    nlPushMatrix(0x0);
    if ((unsigned int)0xC201104 < (unsigned int)0xC20110C) {
        t1 = (0x2850 + t0);
        t0 = 0xC201104;
        for (;;) {
            if ((*(int *)((a4 + 0x3E4))) != 0) {
                t2 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                FUN_0c0dbda0(((((t2 << 2) << 2) << 2) + (*(int *)((a4 + 0x3E4)))));
                FUN_0c0db840(t1);
                t1 = (t1 + 0xC);
                if ((unsigned int)t0 >= (unsigned int)0xC20110C) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    nlPopMatrix(0x1);
    return FUN_0c0cbafc(0x295, 0x2, 0xFCC07000, 0x84802000);
}

float FUN_0c0ab550(void)
{
    int stk[14];
    register float u0;
    register int t1;
    register int t3;
    register int t5;
    register float u7;
    register int t8;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = 0xC10E210;
    *(unsigned int *)(((int)stk + 12)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0xC10E2B8;
    u0 = *(float *)0xC0AB664;
    for (;;) {
        t1 = 0xE;
        for (;;) {
            t3 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t3);
            t5 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t5 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x70)) = *(struct mv3 *)(((t5 + 0xC) - 12)); }
            *(unsigned short *)((t3 + 0x8A)) = 0x7FFF;
            *(unsigned short *)((t3 + 0x9A)) = 0xC5F;
            *(unsigned short *)((t3 + 0xA0)) = 0x1F;
            t1 = (t1 - 0x1);
            u7 = (1.0f + 1.0f);
            u7 = u7 + u0 * (float)((FUN_0c0da2e0()) & 0x3FF);
            *(float *)((t3 + 0x90)) = u7;
            t8 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t8 + 0x2);
            *(unsigned short *)((t3 + 0x98)) = (*(short *)((((t8 + 0x2) - 2) + 0x0)));
            if (t1 == 0) {
                break;
            }
        }
        t10 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t10 - 1);
        if ((t10 - 1) == 0) {
            break;
        }
    }
    return u0;
}

int FUN_0c08faf8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if ((*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    } else {
        t0 = a4;
    }
    if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
        t1 = *(int *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0xC));
        t2 = t1;
        if (t1 != 3) {
            t1 = ((int (*)(int))(FUN_0c0e19f2))(t0);
            t0 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
            if (((int)t0 >= (int)0x2) && ((int)t0 < (int)0x5)) {
            } else {
                t1 = ((int (*)(int))(FUN_0c0e19f2))(t0);
            }
            u0 = *(float *)(((0x38 + a4) + 0x0));
            t0 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
            *(volatile int *)((a4 + 0x44));
            u1 = *(float *)((t0 + 0x48));
            *(volatile int *)((a4 + 0x48));
            *(float *)((t0 + 0x48)) = (u1 + u0);
            *(float *)((t0 + 0x50)) = ((*(float *)((t0 + 0x50))) + (*(float *)(((0x40 + a4) + 0x0))));
            t1 = *(int *)((a4 + 0x44));
            *(unsigned int *)((a4 + 0x44)) = (t1 - 1);
            t3 = 0x44;
            if ((int)(t1 - 1) <= 0) {
                t3 = (((int (*)(int))(FUN_0c0e19f2))(t0));
            }
            t2 = t3;
        }
        t0 = t2;
    } else {
        t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
        if (((int)t1 >= (int)0x2) && ((int)t1 < (int)0x5)) {
        } else {
            t2 = ((int (*)(int))(FUN_0c0e19f2))(t1);
        }
        u0 = *(float *)(((0x38 + a4) + 0x0));
        t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
        *(volatile int *)((a4 + 0x44));
        u1 = *(float *)((t1 + 0x48));
        *(volatile int *)((a4 + 0x48));
        *(float *)((t1 + 0x48)) = (u1 + u0);
        *(float *)((t1 + 0x50)) = ((*(float *)((t1 + 0x50))) + (*(float *)(((0x40 + a4) + 0x0))));
        t2 = *(int *)((a4 + 0x44));
        *(unsigned int *)((a4 + 0x44)) = (t2 - 1);
        t3 = 0x44;
        if ((int)(t2 - 1) <= 0) {
            t3 = (((int (*)(int))(FUN_0c0e19f2))(t1));
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c092c3e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(short *)((a5 + 0x6));
    t2 = FUN_0c0e19aa(0xC092F14, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x80)) = (unsigned char)(*(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B8FC) + 0x0)));
    *(unsigned int *)(((0xA0 + t2) + 0x0)) = (unsigned char)(*(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B8FC) + 0x1)));
    *(unsigned int *)(((0xA4 + t2) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x4)));
    *(unsigned int *)((t2 + 0x8C)) = (*(int *)((((((unsigned short)t1 << 2) << 1) + 0xC10B8FC) + 0x4)));
    *(unsigned int *)((t2 + 0x78)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t2 + 0x88)) = (*(int *)((a4 + 0xBC)));
    t1 = *(int *)((t2 + 0x88));
    t3 = *(int *)((t2 + 0x80));
    if (((*(short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x4))) == 0) && (t0 = *(short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x6)), t0 == 0)) {
        *(unsigned short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + a4) + ((*(int *)((t2 + 0x80))) << 2))));
    }
    t0 = *(short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x6));
    *(unsigned short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x6)) = (t0 + 0x1);
    *(unsigned int *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t3 << 2) << 1)) + 0x0)) = (*(int *)((t2 + 0x8)));
    return (t0 + 0x1);
}

