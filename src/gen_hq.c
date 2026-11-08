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
int FUN_0c0849da(void);
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
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9060(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int);
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
struct o1B0_int { char p[0x1B0]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o4BC_int { char p[0x4BC]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o534_int { char p[0x534]; int v; };
struct o550_float { char p[0x550]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_int { char p[0xC]; int v; };



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
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((((((struct o2EC_int *)(t0))->v)) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    if (((*(int *)((a4 + 0x34))) == 0) && (t6 = (((struct oBC_int *)(t0))->v), t7 = *(int *)(((t6 << 2) + 0xC247030)), t7 != 0)) {
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
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.000199999995f);
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x140));
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
        R1004 = 0x18;
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
            R1008 = t56;
            t55 = (t55 * 0x22AC8EE1);
            nlPushMatrix(0x0);
            nlRotateAX(t65);
            nlRotateAZ((R1008));
            nlRotateAY((unsigned short)((((*(int *)0xC23A258) << 8) << 1) + t63));
            FUN_0c0dcc70(0.0f, 0.0f, 0.5f);
            u78 = (((struct o44_float *)(a4))->v);
            nlScale(u78, u78, u78);
            FUN_0c0de000(((((struct o44_float *)(a4))->v)));
            FUN_0c0c47ae(0x3C9);
            nlPopMatrix(0x1);
            t84 = R1004;
            R1004 = (t84 - 1);
            if ((t84 - 1) == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
    }
    t99 = FUN_0c0849da();
    t100 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t100 - 1);
    if ((int)(t100 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = ((((struct o40_int *)(a4))->v));
        t102 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t102 + 0x1);
        if ((int)(t102 + 0x1) > (int)0xC8) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return t99;
}




int FUN_0c0b103c(int a4, int a5, int a6, int a7, float f4)
{
    int st;
    int r;
    int t0;
    int t3;
    int snd;
    int fl;

    st = *(int *)(a4 + 0x30);
    if ((unsigned int)st >= 0x14) {
        return st;
    }
    switch (st) {
    case 0:
        FUN_0c0d9060(2);
        *(int *)(a4 + 0x3C) = *(int *)(a4 + 0x38);
        *(int *)0xC23ED5C &= 0xFFFFFFFB;
        (((struct o50_int *)(a4))->v) = 0xB4;
        *(int *)(a4 + 0x30) += 1;
    case 1:
        (((struct o50_int *)(a4))->v) -= 1;
        r = FUN_0c0b0d14();
        if (r != 0) {
            *(int *)0xC23ED50 = *(int *)(a4 + 0x38);
            *(int *)(a4 + 0x30) += 1;
        }
        return r;
    case 2:
        if (--(((struct o50_int *)(a4))->v) <= 0) {
            FUN_0c018142(a4, a5, a6, a7);
            *(int *)0xC23ED88 |= 4;
            FUN_0c0852bc(0x4C);
            FUN_0c084b1a(0x1E, 0);
            FUN_0c0b0e64(a4, 0);
            FUN_0c0b207c(a4, 0);
            (((struct o50_int *)(a4))->v) = 0x262;
            *(int *)(a4 + 0x30) += 1;
        }
        return 0x50;
    case 3: case 6: case 9: case 12: case 15:
        if ((((struct o50_int *)(a4))->v) == 30) {
            FUN_0c084bf6(0x1E, 0);
        }
        r = 0x50;
        if (--(((struct o50_int *)(a4))->v) <= 0) {
            *(int *)0xC23ED50 = 0x69;
            *(int *)0xC23ED5C = 4;
            t0 = *(int *)0xC23ED88;
            *(int *)0xC23ED88 = t0 | 8;
            *(int *)(a4 + 0x30) += 1;
            r = t0 | 8;
        }
        return r;
    case 4: case 7: case 10: case 13: case 16:
        FUN_0c0d9060(2);
        t0 = *(int *)(a4 + 0x38) + 1;
        *(int *)(a4 + 0x38) = t0;
        *(int *)(a4 + 0x3C) = t0;
        *(int *)0xC23ED5C &= 0xFFFFFFFB;
        r = FUN_0c0b0cb8();
        *(int *)(a4 + 0x30) += 1;
        return r;
    case 5: snd = 0x51; fl = 1; break;
    case 8: snd = 0x41; fl = 0; break;
    case 11: snd = 0x20; fl = 1; break;
    case 14: snd = 0x13; fl = 0; break;
    case 17: snd = 0x6A; fl = 1; break;
    case 18:
        if (--(((struct o50_int *)(a4))->v) <= 0) {
            *(int *)0xC23ED5C |= 2;
            FUN_0c0b0e64(a4, 2);
            (((struct o50_int *)(a4))->v) = 0x348;
            *(int *)(a4 + 0x30) += 1;
        }
        return 0x50;
    default:
        t0 = st;
        if ((((struct o50_int *)(a4))->v) == 0xF0) {
            *(int *)0xC23ED50 = 0x69;
            FUN_0c0c526a(a4, f4);
            if ((((struct o50_int *)(a4))->v) == 0xF0) {
                FUN_0c0e40ec(3, 0xAA0, 0x28);
            } else if ((((struct o50_int *)(a4))->v) == 90) {
                FUN_0c084bf6(0x59, 0);
            }
        } else {
            if ((((struct o50_int *)(a4))->v) == 90) {
                FUN_0c084bf6(0x59, 0);
            } else {
                t0 = a4;
            }
            t3 = t0;
        }
        r = 0x50;
        if (--(((struct o50_int *)(a4))->v) <= 0) {
            *(int *)0xC23ED5C |= 4;
            r = FUN_0c0b0cb8(t3);
            *(int *)0xC23A190 += 1;
            *(int *)(a4 + 0x30) += 1;
        }
        return r;
    }
    r = FUN_0c0b0d14();
    if (r != 0) {
        *(int *)0xC23ED88 = 7;
        *(int *)0xC23ED50 = *(int *)(a4 + 0x38);
        FUN_0c018142();
        FUN_0c0852bc(snd);
        FUN_0c084b1a(0x1E, 0);
        if (st == 14) {
            *(int *)0xC23A180 = 2;
            *(int *)0xC23ED50 = 0x19;
        }
        if (st != 11) {
            FUN_0c0193a2(*(int *)(a4 + 0x38));
        }
        if (st == 14) {
            *(int *)0xC23ED50 = *(int *)(a4 + 0x38);
            *(int *)0xC23A180 = 3;
        }
        FUN_0c0b0e64(a4, fl);
        FUN_0c0b207c(a4, fl);
        (((struct o50_int *)(a4))->v) = 0x258;
        *(int *)(a4 + 0x30) += 1;
        r = 0x50;
    }
    return r;
}

int FUN_0c0474bc(int a4)
{
    float v[3];
    register float u96;
    register float u112;
    register float u107;
    int st;

    FUN_0c035280(a4, 0x400, 0x1);
    st = (((struct o3A0_int *)(a4))->v);
    switch (st) {
    case 0:
        if (FUN_0c046cc0(a4) == 0) {
            *(int *)0xC247D04 = 0xA;
            return FUN_0c02a19a(a4);
        }
        v[0] = 0.0f;
        v[1] = 0.0f;
        v[2] = 0.0469999984f;
        FUN_0c0329ae(a4, (int)v);
        if (FUN_0c0340a0(a4, 100.0f) == 0) {
            u96 = (((struct o64_float *)(a4))->v);
            if ((u96 > -0.174999997f) && (-0.0749999955f > u96)) {
                (((struct o3A0_int *)(a4))->v) += 1;
                u107 = u96;
            } else if (FUN_0c0340a0(a4, 150.0f) == 0) {
                (((struct o3A0_int *)(a4))->v) += 1;
            }
            u112 = u107;
        }
        return ((int (*)(int, float))(FUN_0c022aa6))(a4, u112);
    case 1:
        if (FUN_0c046cc0(a4) == 0) {
            *(int *)0xC247D04 = 0xA;
            return FUN_0c02a19a(a4);
        }
        v[0] = 0.0f;
        v[1] = 0.0340249985f;
        v[2] = 0.0f;
        FUN_0c0329ae(a4, (int)v);
        FUN_0c03242c(a4, 0.0199999996f, 5.0f);
        if (!(((((struct o550_float *)(a4))->v)) * 0.329999983f > ((((struct o34_float *)(a4))->v)))) {
            if ((int)FUN_0c032394(a4) >= 0) {
                (((struct o2C4_int *)(a4))->v) = 0x595;
                (((struct o2CC_int *)(a4))->v) = 0x1;
                (((struct o1B0_int *)(a4))->v) = 0x0;
                (((struct o3A0_int *)(a4))->v) += 1;
            }
        }
        return ((int (*)(int))(FUN_0c022aa6))(a4);
    case 2:
    case 3:
        if (FUN_0c046cc0(a4) == 0) {
            *(int *)0xC247D04 = 0xA;
            return FUN_0c02a19a(a4);
        }
        if ((((((struct o2BC_int *)(a4))->v)) == 0x595) && (((((struct o2EC_int *)(a4))->v) & 12) != 0)) {
            (((struct o2C4_int *)(a4))->v) = 0x596;
            (((struct o2CC_int *)(a4))->v) = 0x1;
        }
        FUN_0c0328e4(a4);
        if (st == 2) {
            FUN_0c03242c(a4, 0.00499999989f, 5.0f);
            if (!(((((struct o34_float *)(a4))->v)) > ((((struct o550_float *)(a4))->v)))) {
                (((struct o3A0_int *)(a4))->v) += 1;
            }
            return ((int (*)(int))(FUN_0c022aa6))(a4);
        }
        if (FUN_0c03242c(a4, 0.0249999985f, 33.2999992f) == 0) {
            FUN_0c0cc3f8(0x82CA9, 0x0, 0x0, 0x0);
            (((struct o2C4_int *)(a4))->v) = 0x597;
            (((struct o2CC_int *)(a4))->v) = 0x1;
            (((struct o3A0_int *)(a4))->v) += 1;
        }
        if ((int)FUN_0c032394(a4) < 0) {
            (((struct o534_int *)(a4))->v) = 0x0;
            *(int *)0xC247D04 = 0xA;
            FUN_0c02a19a(a4);
        }
        return ((int (*)(int))(FUN_0c022aa6))(a4);
    case 4:
        if (((((struct o2EC_int *)(a4))->v) & 12) != 0) {
            (((struct o2C4_int *)(a4))->v) = (unsigned short)(*(short *)(*(int *)((((struct o4F0_int *)(a4))->v) * 20 + 0xC1F8E44)));
            (((struct o2CC_int *)(a4))->v) = 0x1;
            (((struct o3A0_int *)(a4))->v) += 1;
        }
        return ((int (*)(int))(FUN_0c022aa6))(a4);
    case 5:
        FUN_0c03242c(a4, 0.0349999964f, 5.0f);
        if ((int)FUN_0c032394(a4) >= 0) {
            (((struct o534_int *)(a4))->v) = 0x0;
            *(int *)0xC247D04 = 0xA;
            FUN_0c02a19a(a4);
        }
        return FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
    }
    return ((int (*)(int))(FUN_0c022aa6))(a4);
}

int FUN_0c0216ae(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int st;
    int r;
    int k;
    int e;
    int p;
    int t;
    int m;

    (((struct o4_int *)0xC2462F4)->v) = (((struct o1C_int *)0xC23ED50)->v) + (((struct o20_int *)0xC23ED50)->v) + 3;
    st = *(int *)(a4 + 0x30);
    if (st == 0) {
        (((struct o18_int *)0xC23ED50)->v) = 0;
        (((struct o18_int *)0xC2462F4)->v) = 0;
        r = FUN_0c01fa90();
        *(int *)(a4 + 0x30) += 1;
        return r;
    }
    if (st == 2 || st == 3) {
        if (st == 2) {
            FUN_0c0212cc();
            *(int *)(a4 + 0x30) = 3;
        }
        r = FUN_0c0210da();
        if (r != 0) {
            FUN_0c01fb04();
            *(int *)(a4 + 0x30) = 1;
            (((struct o68_int *)(a4))->v) = -1;
            r = 0x68;
        }
        return r;
    }
    if (st != 1 || (((struct o14_int *)0xC2462F4)->v) != 0) {
        return st;
    }
    (((struct o18_int *)0xC23ED50)->v) += 1;
    if (((((struct oC_int *)0xC23ED50)->v) & 0x800) != 0 && ((((struct oC_int *)0xC23ED50)->v) & 0x600) != 0) {
        (((struct o18_int *)0xC2462F4)->v) += 1;
    }
    e = (((struct o0_int *)0xC23ED50)->v);
    if ((((struct o68_int *)(a4))->v) != e) {
        if (*(int *)(e * 12 + (((struct o50_int *)(a4))->v) + 4) == (((struct o68_int *)(a4))->v)) {
            *(int *)(a4 + 0x30) = 2;
            return 0x68;
        }
        t = ((((struct o6C_int *)(a4))->v) << 5) + 0xC246074;
        *(int *)(t + 0x10) = (((struct o10_int *)0xC2462F4)->v);
        *(int *)(t + 0x14) = (((struct o18_int *)0xC23ED50)->v);
        *(int *)(t + 0x18) = (((struct o18_int *)0xC2462F4)->v);
        (((struct o68_int *)(a4))->v) = (((struct o0_int *)0xC23ED50)->v);
        (((struct o6C_int *)(a4))->v) = FUN_0c0213de(a4);
        t = ((((struct o6C_int *)(a4))->v) << 5) + 0xC246074;
        (((struct o10_int *)0xC2462F4)->v) = *(int *)(t + 0x10);
        (((struct o18_int *)0xC23ED50)->v) = *(int *)(t + 0x14);
        (((struct o18_int *)0xC2462F4)->v) = *(int *)(t + 0x18);
        FUN_0c02148c();
    }
    (((struct o0_int *)0xC2462F4)->v) = 0;
    for (k = 0x10; (unsigned int)k < 0x30; k += 4) {
        if (*(int *)(0xC247030 + k) != 0) {
            p = *(int *)(0xC246FF0 + k);
            if ((((struct o4C8_int *)(p))->v) != 15 || ((((struct o4BC_int *)(p))->v) & 1) != 0) {
                (((struct o0_int *)0xC2462F4)->v) += 1;
            }
        }
    }
    r = 0x6C;
    t = ((((struct o6C_int *)(a4))->v) << 5) + 0xC246074;
    if (*(int *)(t + 0x1C) == 0) {
        e = *(int *)((((struct o0_int *)0xC23ED50)->v) * 12 + (((struct o50_int *)(a4))->v) + 8);
        r = 0x50;
        if (e < 0x3E7) {
            r = 0x280;
            if (e <= *(int *)(t + 0xC) + *(int *)0xC247074 - (((struct o0_int *)0xC2462F4)->v)) {
                if ((*(int *)0xC23A1A8 & 0x101) == 0) {
                    p = (((struct oC_int *)0xC23ED50)->v);
                    m = 0x400;
                    if (*(short *)*(int *)0xC23ECFC == 2) {
                        m = 0x200;
                    }
                    (((struct oC_int *)0xC23ED50)->v) = p | m;
                    if ((((struct o0_int *)0xC23ED50)->v) == 52) {
                        (((struct oC_int *)0xC23ED50)->v) = 0;
                        (((struct o0_int *)0xC1EFD58)->v) = 0x3C;
                        (((struct o4_int *)0xC1EFD58)->v) = 1;
                    }
                }
                *(int *)(t + 0x1C) = 1;
                r = 0x6C;
            }
        }
    }
    if ((*(int *)0xC23A1A8 & 0x100) == 0) {
        return FUN_0c021524(a4, 0xC246FF0);
    }
    return r;
}
