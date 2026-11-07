/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c018142();
int FUN_0c0193a2(int);
int FUN_0c01cdc2(int);
int FUN_0c01e7e8(int, int, int);
int FUN_0c01fa90(void);
int FUN_0c01fb04(void);
int FUN_0c0210da(void);
int FUN_0c0212cc(void);
int FUN_0c0213de(int);
int FUN_0c02148c(void);
extern int FUN_0c021524();
extern int FUN_0c022aa6();
int FUN_0c02a19a(int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c0329ae(int, int);
int FUN_0c0340a0(int, float);
int FUN_0c035280(int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c05f6f8(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c084b1a(int, int);
int FUN_0c084bf6(int, int);
int FUN_0c0852bc(int);
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c0911b8(int, int);
int FUN_0c0a7714(int, int, float, float, float);
extern int FUN_0c0b0cb8();
int FUN_0c0b0d14(void);
int FUN_0c0b0e64(int, int);
int FUN_0c0b207c(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c526a(int, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9060(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c09a568(int a4, int a5, int a6, int a7);
int FUN_0c05bcd0(int a4, int a5, int a6, int a7);
int FUN_0c091d00(int a4, int a5, int a6, int a7);
int FUN_0c05eb64(int a4);
int FUN_0c0b103c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0474bc(int a4);
int FUN_0c0216ae(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c09a568(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register float u20;
    register int t22;
    register float u25;
    register float u29;
    register int t55;
    register int t56;
    register int t59;
    register int t57;
    register int t62;
    register int t60;
    register int t63;
    register int t64;
    register int t65;
    register int t69;
    register float u78;
    register int t84;
    register int t99;
    register int t100;
    register int t102;
    register int t6;
    register int t7;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    if (((*(int *)((a4 + 0x34))) == 0) && (t6 = *(int *)((t0 + 0xBC)), t7 = *(int *)(((t6 << 2) + 0xC247030)), t7 != 0)) {
    } else {
        FUN_0c0e19f2();
    }
    if ((int)(*(int *)((a4 + 0x38))) < (int)0x12) {
    } else {
        u20 = 1.0f;
        if ((int)(*(int *)((a4 + 0x38))) < (int)0x26) {
            u20 = ((float)((*(int *)((a4 + 0x38))) - 18) * 0.049999997f);
        }
        t22 = *(int *)0xC23A258;
        u25 = (float)(t22 & 0x1);
        if ((int)(t22 & 0x1) < 0) {
            u25 = ((float)(t22 & 0x1) + 4.2949673e+09f);
        }
        u29 = 0.5f;
        if ((u25 * u20) != 0.0f) {
            u29 = 1.0f;
        }
        FUN_0c0848bc((u29 * 0.699999988f), (u29 * 0.399999976f), (u29 * 1.0f));
        *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 0.000199999995f);
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x140));
        FUN_0c0dcc70(1.0f, -2.0f, 0.0f);
        nlPushMatrix(0x0);
        nlRotateAX((((*(int *)0xC23A258) << 8) << 1));
        nlRotateAY(((*(int *)0xC23A258) * 0x264));
        nlScale(0.5f, 0.5f, 0.5f);
        FUN_0c0de000(0.5f);
        FUN_0c0c47ae(0x3DB);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlRotateAY(((*(int *)0xC23A258) * 0x2C8));
        nlRotateAZ(((*(int *)0xC23A258) * 0x32C));
        nlScale(0.599999964f, 0.599999964f, 0.599999964f);
        FUN_0c0de000(0.599999964f);
        FUN_0c0c47ae(0x3DB);
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 4)) = 0x18;
        t55 = 0xD;
        t56 = 0x47AE927;
        for (;;) {
            t59 = (t56 & 0x1);
            t57 = (int)(((unsigned int)t59 >> 1) | ((unsigned int)t59 << 31));
            t62 = ((((t56 >> 1) | t57) ^ t55) & 0x1);
            t60 = (int)(((unsigned int)t62 >> 1) | ((unsigned int)t62 << 31));
            t63 = (((t56 >> 1) | t57) ^ t55);
            t64 = ((((((t56 >> 1) | t57) ^ t55) | t55) * 0x22AC8EE1) | ((((((t56 >> 1) | t57) ^ t55) >> 1) | t60) ^ (((((t56 >> 1) | t57) ^ t55) | t55) * 0x22AC8EE1)));
            t65 = ((((((t56 >> 1) | t57) ^ t55) >> 1) | t60) ^ (((((t56 >> 1) | t57) ^ t55) | t55) * 0x22AC8EE1));
            t56 = ((((((t56 >> 1) | t57) ^ t55) >> 1) | t60) ^ (((((t56 >> 1) | t57) ^ t55) | t55) * 0x22AC8EE1));
            t56 = (t56 >> 1);
            t69 = (t65 & 0x1);
            t56 = (t56 | ((int)(((unsigned int)t69 >> 1) | ((unsigned int)t69 << 31))));
            t56 = (t56 ^ (t64 * 0x22AC8EE1));
            t55 = t56;
            t55 = (t55 | (t64 * 0x22AC8EE1));
            *(unsigned int *)(((int)stk + 8)) = t56;
            t55 = (t55 * 0x22AC8EE1);
            nlPushMatrix(0x0);
            nlRotateAX(t65);
            nlRotateAZ((*(int *)(((int)stk + 8))));
            nlRotateAY((unsigned short)((((*(int *)0xC23A258) << 8) << 1) + t63));
            FUN_0c0dcc70(0.0f, 0.0f, 0.5f);
            u78 = *(float *)((a4 + 0x44));
            nlScale(u78, u78, u78);
            FUN_0c0de000((*(float *)((a4 + 0x44))));
            FUN_0c0c47ae(0x3C9);
            nlPopMatrix(0x1);
            t84 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t84 - 1);
            if ((t84 - 1) == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
    }
    t99 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t100 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t100 - 1);
    if ((int)(t100 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t102 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t102 + 0x1);
        if ((int)(t102 + 0x1) > (int)0xC8) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return t99;
}



int FUN_0c05eb64(int a4)
{
    int stk[18];
    register int t1;
    register int t99;
    register int t89;
    register int t87;
    register int t85;

    if ((*(int *)((a4 + 0xD8))) == 0) {
        t1 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x220)) = 0x344;
            *(float *)((a4 + 0x1E4)) = 30.0f;
            *(unsigned int *)((a4 + 0x23C)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + (1.0f + 1.0f));
            FUN_0c08d834((((int)stk + 4) + 0x20));
            FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xD);
            *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
            t89 = (FUN_0c08d840((a4 + 0x30), 35.0f));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.099999994f);
            *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
            *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
            *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
            FUN_0c01e7e8(a4, 0xA7F, (*(int *)((a4 + 0xBC))));
            if ((*(int *)((a4 + 0xA8))) == 0) {
                *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
                FUN_0c01cdc2(a4);
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
                nlRotateAY((*(short *)((a4 + 0x6E))));
                nlRotateAX((*(short *)((a4 + 0x6C))));
                FUN_0c0c465c((*(int *)((a4 + 0x220))));
                t87 = (nlPopMatrix(0x1));
            } else {
                if ((int)(*(int *)((a4 + 0xAC))) > (int)0x16) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((a4 + 0x30)); }
                    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + (1.0f + 1.0f));
                    FUN_0c08d834((((int)stk + 4) + 0x20));
                    *(unsigned int *)((a4 + 0x220)) = 0x344;
                    *(float *)((a4 + 0x1E4)) = 30.0f;
                    *(unsigned int *)((a4 + 0x23C)) = 0x0;
                    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xD);
                    *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
                    t85 = (FUN_0c08d840((a4 + 0x30), 35.0f));
                } else {
                    nlPushMatrix(0x0);
                    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))));
                    nlUnitMatrix();
                    nlRotateAX((-(*(int *)(((int)stk + 4)))));
                    nlRotateAY((-(*(int *)(((int)stk + 8)))));
                    *(float *)(((int)stk + 36)) = (*(float *)((a4 + 0x60)));
                    *(float *)(((int)stk + 40)) = (*(float *)((a4 + 0x64)));
                    *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x68)));
                    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
                    nlUnitMatrix();
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    nlRotateAX((*(int *)(((int)stk + 4))));
                    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 20))) * 0.599999964f);
                    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 16))) * 0.599999964f);
                    *(float *)(((int)stk + 44)) = (-((*(float *)(((int)stk + 12))) * 0.599999964f));
                    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                    *(float *)(((a4 + 0x54) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)(((a4 + 0x58) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)(((a4 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 32)));
                    nlPopMatrix(0x1);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x54)); }
                    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
                    FUN_0c01cdc2(a4);
                    nlPushMatrix(0x0);
                    FUN_0c0dcca0((a4 + 0x30));
                    nlRotateAY((*(short *)((a4 + 0x6E))));
                    nlRotateAX((*(short *)((a4 + 0x6C))));
                    FUN_0c0c465c((*(int *)((a4 + 0x220))));
                    t85 = (nlPopMatrix(0x1));
                }
                t87 = t85;
            }
            t89 = t87;
        }
        t99 = t89;
    } else {
        *(unsigned int *)((a4 + 0x220)) = 0x344;
        *(float *)((a4 + 0x1E4)) = 30.0f;
        *(unsigned int *)((a4 + 0x23C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + (1.0f + 1.0f));
        FUN_0c08d834((((int)stk + 4) + 0x20));
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xD);
        *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
        t99 = (FUN_0c08d840((a4 + 0x30), 35.0f));
    }
    return t99;
}

int FUN_0c0b103c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x30));
    t1 = t0;
    if ((unsigned int)t0 >= (unsigned int)0x14) {
    } else {
        switch ((t0 << 1)) {
            case 0:
            {
                FUN_0c0d9060(0x2);
                *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x38)));
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFFFB);
                *(unsigned int *)((a4 + 0x50)) = 0xB4;
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) - 1);
                t0 = FUN_0c0b0d14();
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
                t2 = t0;
            }
                break;
            case 2:
            {
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) - 1);
                t0 = FUN_0c0b0d14();
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
                t2 = t0;
            }
                break;
            case 4:
            {
                t0 = *(int *)((a4 + 0x50));
                *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
                if ((int)(t0 - 1) > 0) {
                } else {
                    t0 = ((int (*)(int, int, int, int))(FUN_0c018142))(a4, a5, a6, a7);
                    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x4);
                    FUN_0c0852bc(0x4C);
                    FUN_0c084b1a(0x1E, 0x0);
                    FUN_0c0b0e64(a4, 0x0);
                    FUN_0c0b207c(a4, 0x0);
                    *(unsigned int *)((a4 + 0x50)) = 0x262;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
                t2 = 0x50;
            }
                break;
            case 6:
            case 12:
            case 18:
            case 24:
            case 30:
            {
                if ((*(int *)((a4 + 0x50))) == 30) {
                    FUN_0c084bf6(0x1E, 0x0);
                }
                t0 = *(int *)((a4 + 0x50));
                *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
                t3 = 0x50;
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)0xC23ED50 = 0x69;
                    *(unsigned int *)0xC23ED5C = 0x4;
                    t0 = *(int *)0xC23ED88;
                    *(unsigned int *)0xC23ED88 = (t0 | 0x8);
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = (t0 | 0x8);
                }
                t2 = t3;
            }
                break;
            case 8:
            case 14:
            case 20:
            case 26:
            case 32:
            {
                FUN_0c0d9060(0x2);
                t0 = *(int *)((a4 + 0x38));
                *(unsigned int *)((a4 + 0x38)) = (t0 + 0x1);
                *(unsigned int *)((a4 + 0x3C)) = (t0 + 0x1);
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFFFB);
                t0 = ((int (*)(void))(FUN_0c0b0cb8))();
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                t2 = t0;
            }
                break;
            case 10:
            {
                t0 = FUN_0c0b0d14();
                t3 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED88 = 0x7;
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    t0 = ((int (*)(void))(FUN_0c018142))();
                    FUN_0c0852bc(0x51);
                    FUN_0c084b1a(0x1E, 0x0);
                    FUN_0c0193a2((*(int *)((a4 + 0x38))));
                    FUN_0c0b0e64(a4, 0x1);
                    FUN_0c0b207c(a4, 0x1);
                    *(unsigned int *)((a4 + 0x50)) = 0x258;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = 0x50;
                }
                t2 = t3;
            }
                break;
            case 16:
            {
                t0 = FUN_0c0b0d14();
                t3 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED88 = 0x7;
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    t0 = ((int (*)(void))(FUN_0c018142))();
                    FUN_0c0852bc(0x41);
                    FUN_0c084b1a(0x1E, 0x0);
                    FUN_0c0193a2((*(int *)((a4 + 0x38))));
                    FUN_0c0b0e64(a4, 0x0);
                    FUN_0c0b207c(a4, 0x0);
                    *(unsigned int *)((a4 + 0x50)) = 0x258;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = 0x50;
                }
                t2 = t3;
            }
                break;
            case 22:
            {
                t0 = FUN_0c0b0d14();
                t3 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED88 = 0x7;
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    t0 = ((int (*)(void))(FUN_0c018142))();
                    FUN_0c0852bc(0x20);
                    FUN_0c084b1a(0x1E, 0x0);
                    FUN_0c0b0e64(a4, 0x1);
                    FUN_0c0b207c(a4, 0x1);
                    *(unsigned int *)((a4 + 0x50)) = 0x258;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = 0x50;
                }
                t2 = t3;
            }
                break;
            case 28:
            {
                t0 = FUN_0c0b0d14();
                t3 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED88 = 0x7;
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    t0 = ((int (*)(void))(FUN_0c018142))();
                    FUN_0c0852bc(0x13);
                    FUN_0c084b1a(0x1E, 0x0);
                    *(unsigned int *)0xC23A180 = 0x2;
                    *(unsigned int *)0xC23ED50 = 0x19;
                    FUN_0c0193a2((*(int *)((a4 + 0x38))));
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    *(unsigned int *)0xC23A180 = 0x3;
                    FUN_0c0b0e64(a4, 0x0);
                    FUN_0c0b207c(a4, 0x0);
                    *(unsigned int *)((a4 + 0x50)) = 0x258;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = 0x50;
                }
                t2 = t3;
            }
                break;
            case 34:
            {
                t0 = FUN_0c0b0d14();
                t3 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned int *)0xC23ED88 = 0x7;
                    *(unsigned int *)0xC23ED50 = (*(int *)((a4 + 0x38)));
                    t0 = ((int (*)(void))(FUN_0c018142))();
                    FUN_0c0852bc(0x6A);
                    FUN_0c084b1a(0x1E, 0x0);
                    FUN_0c0193a2((*(int *)((a4 + 0x38))));
                    FUN_0c0b0e64(a4, 0x1);
                    FUN_0c0b207c(a4, 0x1);
                    *(unsigned int *)((a4 + 0x50)) = 0x258;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t3 = 0x50;
                }
                t2 = t3;
            }
                break;
            case 36:
            {
                t0 = *(int *)((a4 + 0x50));
                *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x2);
                    FUN_0c0b0e64(a4, 0x2);
                    *(unsigned int *)((a4 + 0x50)) = 0x348;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
                t2 = 0x50;
            }
                break;
            default:
            {
                if ((*(int *)((a4 + 0x50))) == 0xF0) {
                    *(unsigned int *)0xC23ED50 = 0x69;
                    FUN_0c0c526a(a4, f4);
                    if ((*(int *)((a4 + 0x50))) == 0xF0) {
                        FUN_0c0e40ec(0x3, 0xAA0, 0x28);
                    } else {
                        if ((*(int *)((a4 + 0x50))) == 90) {
                            FUN_0c084bf6(0x59, 0x0);
                        }
                    }
                } else {
                    if ((*(int *)((a4 + 0x50))) == 90) {
                        FUN_0c084bf6(0x59, 0x0);
                    } else {
                        t0 = a4;
                    }
                    t3 = t0;
                }
                t0 = *(int *)((a4 + 0x50));
                *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
                t4 = 0x50;
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x4);
                    t0 = ((int (*)(int))(FUN_0c0b0cb8))(t3);
                    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    t4 = t0;
                }
                t2 = t4;
            }
                break;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0474bc(int a4)
{
    int stk[14];
    register int t1;
    register int t2;
    register int t21;
    register int t30;
    register int t36;
    register int t44;
    register int t55;
    register int t69;
    register int t74;
    register int t91;
    register int t94;
    register float u96;
    register int t98;
    register int t117;
    register int t89;
    register int t67;
    register int t19;
    register int t6;
    register int t65;
    register int t41;
    register int t26;
    register int t63;
    register int t61;
    register int t87;
    register int t115;
    register float u112;
    register float u107;

    FUN_0c035280(a4, 0x400, 0x1);
    t1 = *(int *)((a4 + 0x3A0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = FUN_0c046cc0(a4);
                if (t2 != 0) {
                    if (((*(int *)((a4 + 0x2BC))) == 0x595) && (t6 = *(int *)((a4 + 0x2EC)), (t6 & 12) != 0)) {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x596;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    }
                    FUN_0c0328e4(a4);
                    FUN_0c03242c(a4, 0.00499999989f, 5.0f);
                    if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x550)))) {
                    } else {
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t19 = (((int (*)(int))(FUN_0c022aa6))(a4));
                } else {
                    *(unsigned int *)0xC247D04 = 0xA;
                    t19 = (FUN_0c02a19a(a4));
                }
                t67 = t19;
            } else {
                if (t1 == 3) {
                    t21 = FUN_0c046cc0(a4);
                    if (t21 == 0) {
                        *(unsigned int *)0xC247D04 = 0xA;
                        t41 = (FUN_0c02a19a(a4));
                    } else {
                        if (((*(int *)((a4 + 0x2BC))) == 0x595) && (t26 = *(int *)((a4 + 0x2EC)), (t26 & 12) != 0)) {
                            *(unsigned int *)((a4 + 0x2C4)) = 0x596;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        }
                        FUN_0c0328e4(a4);
                        t30 = FUN_0c03242c(a4, 0.0249999985f, 33.2999992f);
                        if (t30 == 0) {
                            FUN_0c0cc3f8(0x82CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            *(unsigned int *)((a4 + 0x2C4)) = 0x597;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        }
                        t36 = FUN_0c032394(a4);
                        if ((int)t36 < 0) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            *(unsigned int *)0xC247D04 = 0xA;
                            FUN_0c02a19a(a4);
                        }
                        t41 = (((int (*)(int))(FUN_0c022aa6))(a4));
                    }
                    t65 = t41;
                } else {
                    if (t1 == 4) {
                        if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                            t44 = *(int *)((a4 + 0x4F0));
                            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t44 << 2) + t44) << 2) + 0xC1F8E44))) + 0x0)));
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        }
                        t63 = (((int (*)(int))(FUN_0c022aa6))(a4));
                    } else {
                        if (t1 == 5) {
                            FUN_0c03242c(a4, 0.0349999964f, 5.0f);
                            t55 = FUN_0c032394(a4);
                            if ((int)t55 >= 0) {
                                *(unsigned int *)((a4 + 0x534)) = 0x0;
                                *(unsigned int *)0xC247D04 = 0xA;
                                FUN_0c02a19a(a4);
                            }
                            t61 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
                        } else {
                            t61 = (((int (*)(int))(FUN_0c022aa6))(a4));
                        }
                        t63 = t61;
                    }
                    t65 = t63;
                }
                t67 = t65;
            }
            t89 = t67;
        } else {
            t69 = FUN_0c046cc0(a4);
            if (t69 != 0) {
                *(float *)(((int)stk + 4)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0340249985f;
                *(float *)(((int)stk + 12)) = 0.0f;
                FUN_0c0329ae(a4, ((int)stk + 4));
                FUN_0c03242c(a4, 0.0199999996f, 5.0f);
                if (((*(float *)((a4 + 0x550))) * 0.329999983f) > (*(float *)((a4 + 0x34)))) {
                } else {
                    t74 = FUN_0c032394(a4);
                    if ((int)t74 < 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x595;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                }
                t87 = (((int (*)(int))(FUN_0c022aa6))(a4));
            } else {
                *(unsigned int *)0xC247D04 = 0xA;
                t87 = (FUN_0c02a19a(a4));
            }
            t89 = t87;
        }
        t117 = t89;
    } else {
        t91 = FUN_0c046cc0(a4);
        if (t91 == 0) {
            *(unsigned int *)0xC247D04 = 0xA;
            t115 = (FUN_0c02a19a(a4));
        } else {
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 8)) = 0.0f;
            *(float *)(((int)stk + 12)) = 0.0469999984f;
            FUN_0c0329ae(a4, ((int)stk + 4));
            t94 = FUN_0c0340a0(a4, 100.0f);
            if (t94 != 0) {
            } else {
                u96 = *(float *)((a4 + 0x64));
                if ((u96 > -0.174999997f) && (-0.0749999955f > u96)) {
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    u107 = u96;
                } else {
                    t98 = FUN_0c0340a0(a4, 150.0f);
                    if (t98 != 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                }
                u112 = u107;
            }
            t115 = (((int (*)(int, float))(FUN_0c022aa6))(a4, u112));
        }
        t117 = t115;
    }
    return t117;
}

int FUN_0c0216ae(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    *(unsigned int *)0xC2462F8 = (((*(int *)0xC23ED6C) + (*(int *)0xC23ED70)) + 0x3);
    t7 = *(int *)((a4 + 0x30));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 == 2) {
                FUN_0c0212cc();
                *(unsigned int *)((a4 + 0x30)) = 0x3;
                t8 = FUN_0c0210da();
                t9 = t8;
                if (t8 != 0) {
                    FUN_0c01fb04();
                    *(unsigned int *)((a4 + 0x30)) = 0x1;
                    *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFF;
                    t9 = 0x68;
                }
                t8 = t9;
            } else {
                t9 = t7;
                if (t7 == 3) {
                    t10 = FUN_0c0210da();
                    t11 = t10;
                    if (t10 != 0) {
                        FUN_0c01fb04();
                        *(unsigned int *)((a4 + 0x30)) = 0x1;
                        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFF;
                        t11 = 0x68;
                    }
                    t9 = t11;
                }
                t8 = t9;
            }
            return t8;
        }
        if ((*(int *)0xC246308) != 0) {
            return t7;
        }
        *(unsigned int *)0xC23ED68 = ((*(int *)0xC23ED68) + 0x1);
        if ((((*(int *)0xC23ED5C) & 0x800) != 0) && (t0 = *(int *)0xC23ED5C, (t0 & 0x600) != 0)) {
            *(unsigned int *)0xC24630C = ((*(int *)0xC24630C) + 0x1);
        }
        t0 = *(int *)0xC23ED50;
        if ((*(int *)((a4 + 0x68))) != t0) {
            if ((*(int *)((((((t0 << 1) + t0) << 2) + (*(int *)((a4 + 0x50)))) + 0x4))) == (*(int *)((a4 + 0x68)))) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                return 0x68;
            }
            *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x10)) = (*(int *)0xC246304);
            *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x14)) = (*(int *)0xC23ED68);
            *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x18)) = (*(int *)0xC24630C);
            *(unsigned int *)((a4 + 0x68)) = (*(int *)0xC23ED50);
            *(unsigned int *)(((0x6C + a4) + 0x0)) = (FUN_0c0213de(a4));
            *(unsigned int *)0xC246304 = (*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x10)));
            *(unsigned int *)0xC23ED68 = (*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x14)));
            *(unsigned int *)0xC24630C = (*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x18)));
            FUN_0c02148c();
            *(unsigned int *)0xC2462F4 = 0x0;
            t0 = 0x10;
            t7 = 0x10;
            t8 = 0x10;
            for (;;) {
                if (((*(int *)(((0xC247030 + t0) + 0x0))) != 0) && ((t8 = 0xC246FF0, t8 = (t8 + t7), t1 = *(int *)((t8 + 0x0)), t8 = t1, t2 = *(int *)((t8 + 0x4C8)), t2 != 15) || (t3 = *(int *)((t8 + 0x4BC)), (t3 & 1) != 0))) {
                    *(unsigned int *)0xC2462F4 = ((*(int *)0xC2462F4) + 0x1);
                }
                t0 = (t0 + 0x4);
                t7 = (t7 + 0x4);
                if ((unsigned int)t0 >= (unsigned int)0x30) {
                    break;
                }
            }
            t0 = 0x6C;
            if ((*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x1C))) == 0) {
                t1 = *(int *)0xC23ED50;
                t2 = 0x50;
                if ((int)(*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)((a4 + 0x50)))) + 0x8))) < (int)0x3E7) {
                    t3 = 0x280;
                    if ((int)(*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)((a4 + 0x50)))) + 0x8))) <= (int)(((*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0xC))) + (*(int *)0xC247074)) - (*(int *)0xC2462F4))) {
                        if (((*(int *)0xC23A1A8) & 0x101) == 0) {
                            t1 = *(int *)0xC23ED5C;
                            t7 = 0x400;
                            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 2) {
                                t7 = 0x200;
                            }
                            *(unsigned int *)0xC23ED5C = (t1 | t7);
                            if ((*(int *)0xC23ED50) == 52) {
                                *(unsigned int *)0xC23ED5C = 0x0;
                                *(unsigned int *)0xC1EFD58 = 0x3C;
                                *(unsigned int *)0xC1EFD5C = 0x1;
                            }
                        }
                        *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x1C)) = 0x1;
                        t3 = 0x6C;
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                return ((int (*)(int, int))(FUN_0c021524))(a4, 0xC246FF0);
            }
            return t0;
        }
        *(unsigned int *)0xC2462F4 = 0x0;
        t0 = 0x10;
        t1 = 0x10;
        t2 = 0x10;
        for (;;) {
            if (((*(int *)(((0xC247030 + t0) + 0x0))) != 0) && ((t2 = 0xC246FF0, t2 = (t2 + t1), t4 = *(int *)((t2 + 0x0)), t2 = t4, t5 = *(int *)((t2 + 0x4C8)), t5 != 15) || (t6 = *(int *)((t2 + 0x4BC)), (t6 & 1) != 0))) {
                *(unsigned int *)0xC2462F4 = ((*(int *)0xC2462F4) + 0x1);
            }
            t0 = (t0 + 0x4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x30) {
                break;
            }
        }
        t0 = 0x6C;
        if ((*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x1C))) == 0) {
            t1 = *(int *)0xC23ED50;
            t2 = 0x50;
            if ((int)(*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)((a4 + 0x50)))) + 0x8))) < (int)0x3E7) {
                t3 = 0x280;
                if ((int)(*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)((a4 + 0x50)))) + 0x8))) <= (int)(((*(int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0xC))) + (*(int *)0xC247074)) - (*(int *)0xC2462F4))) {
                    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
                        t1 = *(int *)0xC23ED5C;
                        t4 = 0x400;
                        if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 2) {
                            t4 = 0x200;
                        }
                        *(unsigned int *)0xC23ED5C = (t1 | t4);
                        if ((*(int *)0xC23ED50) == 52) {
                            *(unsigned int *)0xC23ED5C = 0x0;
                            *(unsigned int *)0xC1EFD58 = 0x3C;
                            *(unsigned int *)0xC1EFD5C = 0x1;
                        }
                    }
                    *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246074) + 0x1C)) = 0x1;
                    t3 = 0x6C;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            return ((int (*)(int, int, float, float, float, float, float, float, float, float))(FUN_0c021524))(a4, 0xC246FF0, f4, f5, f6, f7, f8, f9, f10, f11);
        }
        return t0;
    }
    *(unsigned int *)0xC23ED68 = 0x0;
    *(unsigned int *)0xC24630C = 0x0;
    t0 = FUN_0c01fa90();
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return t0;
}
