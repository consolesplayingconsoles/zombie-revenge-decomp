/* Straight-line functions with calls and guards (batch gen_sc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o238_float { char p[0x238]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o310_uint { char p[0x310]; unsigned int v; };
struct o314_int { char p[0x314]; int v; };
struct o314_uint { char p[0x314]; unsigned int v; };
struct o340_int { char p[0x340]; int v; };
struct o344_int { char p[0x344]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o390_float { char p[0x390]; float v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D4_int { char p[0x4D4]; int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o538_int { char p[0x538]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o554_int { char p[0x554]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o568_uint { char p[0x568]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o578_uint { char p[0x578]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_int { char p[0x584]; int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_int { char p[0x5A4]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_int { char p[0x5A8]; int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c01cdf2(int);
int FUN_0c01db0e(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02a288(int);
int FUN_0c02a416(int);
int FUN_0c02b8ba(int);
int FUN_0c02dc30(int);
int FUN_0c02e70c(int);
int FUN_0c035b26(int, int, int);
int FUN_0c035ce4(int);
int FUN_0c03611c(int);
int FUN_0c039416(int);
int FUN_0c039804(int);
int FUN_0c03a77a(int);
int FUN_0c03a834(int);
int FUN_0c03a998(int);
int FUN_0c03aaa2(int);
int FUN_0c03ac0e(int);
int FUN_0c03adc4(int);
int FUN_0c03ae58(int);
int FUN_0c03afe8(int);
int FUN_0c03b0e2(int);
int FUN_0c03b260(int);
int FUN_0c03b30c(int);
int FUN_0c03b40c(int);
int FUN_0c03b4da(int);
int FUN_0c03b568(int);
int FUN_0c03c0e0(int);
int FUN_0c03c174(int);
int FUN_0c03c256(int);
int FUN_0c03c3c0(int);
int FUN_0c03c420(int);
int FUN_0c03c4a4(int);
int FUN_0c03c510(int);
int FUN_0c03c592(int, int, int, int);
int FUN_0c03c5ea(int, int, int, int);
int FUN_0c03c65c(int);
int FUN_0c03c6ac(int);
int FUN_0c03c70c(int);
int FUN_0c03c75c(int);
int FUN_0c03c830(int);
int FUN_0c03c900(int);
int FUN_0c03c966(int);
int FUN_0c03c9e0(int);
int FUN_0c03caa4(int);
int FUN_0c03cb3a(int);
int FUN_0c03cbec(int);
int FUN_0c03cc70(int);
int FUN_0c03cd4c(int);
int FUN_0c03ce1e(int);
int FUN_0c03ceec(int);
int FUN_0c03cfb8(int);
int FUN_0c03d020(int);
int FUN_0c03d038(int);
int FUN_0c03d2ae(int);
int FUN_0c03d516(int);
int FUN_0c03f4bc(int);
int FUN_0c046442(int);
int FUN_0c048070(int);
int FUN_0c0480ec(int);
int FUN_0c0482a8(int, int, int, int);
int FUN_0c085704(int);
int FUN_0c086920(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bbbf4(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern void _builtin_set_imask(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
void FUN_0c03dd98(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c05c7e8(int a4, int a5, int a6, int a7);
void FUN_0c03dae4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c03d83c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
void FUN_0c02b984(int a4, int a5, int a6, int a7);
void FUN_0c02e7e4(int a4);
void FUN_0c02aacc(int a4, int a5, int a6, int a7);
void FUN_0c02dfe4(int a4, int a5, int a6);
void FUN_0c02e8d0(int a4, int a5, int a6);
void FUN_0c02a640(int a4, int a5, int a6);
void FUN_0c02aff0(int a4, int a5, int a6);
void FUN_0c031390(int a4, int a5, int a6);
void FUN_0c02e2fc(int a4, int a5, int a6);
void FUN_0c02b814(int a4, int a5, int a6);
void FUN_0c02b5a0(int a4);
void FUN_0c02baac(int a4);
void FUN_0c2113e0(Stk4 s);
void FUN_0c02a84c(int a4);
void FUN_0c02b2a0(int a4);
int FUN_0c020166(int a4);
int FUN_0c04852e(int a4, int a5, int a6, int a7);
int FUN_0c04204c(int a4);
int FUN_0c04343c(int a4);
void FUN_0c045900(void);

void FUN_0c03dd98(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[3];
    int t5;
    register int t49;
    register int t100;
    int t102;
    int t1;
    register int t50;
    int t51;
    register int t73;
    int t74;
    register int t75;
    int t82;
    int t90;

    if (((int)((((struct o57C_int *)(a4))->v)) > 0) && (t1 = (((struct o578_int *)(a4))->v), t1 == 4)) {
        (((struct o568_uint *)(a4))->v) = ((((struct o310_int *)(a4))->v));
        (((struct o310_uint *)(a4))->v) = 0x0;
    }
    t5 = (((struct o48C_int *)(a4))->v);
    switch (t5) {
    case 20:
        FUN_0c03c4a4(a4);
        break;
    case 28:
        FUN_0c03c510(a4);
        break;
    case 30:
        FUN_0c03d020(a4);
        break;
    case 29:
        FUN_0c03cfb8(a4);
        break;
    case 41:
        FUN_0c03c5ea(a4, a5, a6, a7);
        break;
    default:
        if ((t5 != 43) && (t5 != 42)) {
            if (t5 != 44) {
                if (t5 != 45) {
                    if (t5 != 46) {
                        if (t5 != 49) {
                            if (t5 != 51) {
                                if (t5 != 52) {
                                    if ((t5 != 53) && (t5 != 54)) {
                                        if ((t5 != 47) && (t5 != 48)) {
                                            if (t5 != 31) {
                                                FUN_0c03c256(a4);
                                            } else {
                                                FUN_0c03d516(a4);
                                            }
                                        } else {
                                            FUN_0c03d2ae(a4);
                                        }
                                    } else {
                                        FUN_0c03ceec(a4);
                                    }
                                } else {
                                    FUN_0c03cd4c(a4);
                                }
                            } else {
                                FUN_0c03cbec(a4);
                            }
                        } else {
                            FUN_0c03caa4(a4);
                        }
                    } else {
                        FUN_0c03c966(a4);
                    }
                } else {
                    FUN_0c03c830(a4);
                }
            } else {
                FUN_0c03c70c(a4);
            }
        } else {
            FUN_0c03c6ac(a4);
        }
        break;
    }
    t49 = (((struct o560_int *)(a4))->v);
    if ((t49 != 0) && ((t49 != 10) && ((t49 != 6) && ((t50 = (((struct o4C8_int *)(a4))->v), t50 != 2) && (t51 = (((struct o4C8_int *)(a4))->v), t51 != 10))))) {
        if ((((((struct o48C_int *)(a4))->v)) == 21) && (((t73 = (((struct o310_int *)(a4))->v), t73 == 0) && (t74 = (((struct o57C_int *)(a4))->v), t74 == 3)) || (t75 = (((struct o580_int *)(a4))->v), t75 == 0))) {
            FUN_0c039804(a4);
        } else {
            FUN_0c039416(a4);
        }
    }
    if (((int)((((struct o304_int *)(a4))->v)) > 0) && (t82 = (((struct o20C_int *)(a4))->v), t82 != 0x200000)) {
    } else {
        FUN_0c03611c(a4);
        (((struct o554_uint *)(a4))->v) = 0x0;
    }
    if ((((((struct o554_int *)(a4))->v)) == 2) && ((t90 = (((struct o48C_int *)(a4))->v), t90 != 47) && (t90 != 48))) {
        FUN_0c03b260(a4);
    return;
    }
    (((struct o5A8_uint *)(a4))->v) = (((((struct o5A8_int *)(a4))->v)) & 0x3);
    (((struct o5A4_uint *)(a4))->v) = (((((struct o5A4_int *)(a4))->v)) & 0x3);
    (((struct o5A0_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) & 0x1);
    (((struct o57C_uint *)(a4))->v) = ((int)((int)((((struct o57C_int *)(a4))->v)) % (int)0x5));
    (((struct o580_uint *)(a4))->v) = (((((struct o580_int *)(a4))->v)) & 0x3);
    (((struct o584_uint *)(a4))->v) = (((((struct o584_int *)(a4))->v)) & 0x3);
    (((struct o578_uint *)(a4))->v) = ((int)((int)((((struct o578_int *)(a4))->v)) % (int)0xA));
    t100 = (((struct o560_int *)(a4))->v);
    if ((unsigned int)t100 < (unsigned int)0xE) {
        switch ((t100 << 1)) {
            case 0:
            {
                FUN_0c02dc30(a4);
    return;
            }
            case 2:
            {
                FUN_0c03b0e2(a4);
    return;
            }
            case 4:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03ae58(a4);
    return;
            }
            case 6:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03a834(a4);
    return;
            }
            case 8:
            {
                (((struct o57C_uint *)(a4))->v) = 0x4;
                FUN_0c03ae58(a4);
    return;
            }
            case 10:
            {
                FUN_0c03a998(a4);
    return;
            }
            case 12:
            {
                FUN_0c03a77a(a4);
    return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                FUN_0c03b40c(a4);
    return;
            }
            case 18:
            {
                FUN_0c03b4da(a4);
    return;
            }
            case 20:
            {
                (((struct o4C8_uint *)(a4))->v) = 0xB;
                return;
            }
            case 22:
            {
                (((struct o57C_uint *)(a4))->v) = 0x0;
                t102 = (((struct o48C_int *)(a4))->v);
                if ((t102 != 47) && (t102 != 48)) {
                    FUN_0c03b0e2(a4);
    return;
                }
                FUN_0c03b30c(a4);
    return;
            }
            case 24:
            {
                FUN_0c03ac0e(a4);
    return;
            }
            default:
            {
                FUN_0c03b568(a4);
    return;
            }
        }
    }
}

int FUN_0c05c7e8(int a4, int a5, int a6, int a7)
{
    int stk[18];
    register int t1;
    register int t102;
    register int t8;
    register int t17;
    register int t20;
    register int t23;
    register int t32;
    register int t50;
    register int t71;
    register int t86;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t1 = *(int *)(((((((struct o34C_int *)(a4))->v)) << 2) + 0xC2475D4));
    t102 = 0x344;
    if (((((struct o344_int *)(a4))->v)) == 0) {
    } else {
        t102 = 0x21C;
        if ((int)((((struct o21C_int *)(t1))->v)) <= 0) {
        } else {
            if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
                t8 = (((struct oBC_int *)(a4))->v);
                *(unsigned int *)(((((t8 << 2) << 2) << 1) + 0xC247544)) = ((*(int *)(((((t8 << 2) << 2) << 1) + 0xC247544))) + 0x1);
            }
            (((struct o21C_uint *)(t1))->v) = (((((struct o21C_int *)(t1))->v)) - 1);
            t17 = FUN_0c0e19aa(0xC05CB48, 0x2BC, ((((struct o0_int *)0xC23ECE4)->v)));
            FUN_0c0e19d0(t17);
            t20 = FUN_0c0e19aa(0xC05BFAC, 0xB4, ((((struct o0_int *)0xC23ECE4)->v)));
            FUN_0c0e19d0(t20);
            t23 = FUN_0c0e19aa(0xC08C20E, 0xA4, ((((struct oC_int *)0xC23ECE4)->v)));
            FUN_0c0e19d0(t23);
            nlPushMatrix(0x0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x30)) = *(struct mv3 *)(0xC0F9B78); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)(0xC0F9B84); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC0F9B90); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0F9B9C); }
            FUN_0c0dbda0(((((((((struct oBC_int *)(a4))->v)) << 8) + 0xC25F840) + (((((*(int *)(((int)stk + 0))) << 2) << 2) << 2) << 1)) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x8);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x4);
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            FUN_0c0a79fa((((int)stk + 0) + 0x3C), ((((int)stk + 0) + 0x3C) + 0x4), ((((int)stk + 0) + 0x3C) + 0x8));
            t32 = (((struct o340_int *)(a4))->v);
            FUN_0c0db470(((((t32 << 1) + t32) << 2) + 0xC1FEFBC), (t17 + 0x30));
            FUN_0c0db470((((int)stk + 0) + 0x18), (t20 + 0x30));
            if (a7 == 0) {
                FUN_0c0dcc70(-0.199999988f, -2.0f, 0.0f);
            }
            nlGetMatrix((t23 + 0x30));
            nlUnitMatrix();
            nlRotateAY((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
            nlRotateAX((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
            nlRotateAZ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            t50 = (((int)stk + 0) + 0x30);
            if (a7 != 0) {
                t50 = (((int)stk + 0) + 0x24);
            }
            FUN_0c0db470(t50, (t17 + 0x48));
            FUN_0c0db470((((int)stk + 0) + 0xC), (t20 + 0x48));
            FUN_0c0a7714((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), ((((struct o48_float *)(t17))->v)), ((((struct o4C_float *)(t17))->v)), ((((struct o50_float *)(t17))->v)));
            (((struct o6E_ushort *)(t17))->v) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
            (((struct o6C_ushort *)(t17))->v) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
            nlPopMatrix(0x1);
            FUN_0c0cc3f8(0xF28A9, 0x0, 0x0, 0x0);
            FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x9);
            t71 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t71 = ((((struct o1EC_int *)(a4))->v));
            }
            (((struct o1EC_uint *)(t17))->v) = t71;
            (((struct oBC_uint *)(t17))->v) = ((((struct oBC_int *)(a4))->v));
            (((struct o200_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            (((struct o1E8_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            (((struct o1F4_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            (((struct o204_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            (((struct o1E4_float *)(t17))->v) = ((((struct oC_float *)(a5))->v));
            (((struct o1FC_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            (((struct o1F8_uint *)(t17))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            (((struct o22C_uint *)(t17))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
            (((struct o220_uint *)(t17))->v) = 0x124E;
            (((struct o238_float *)(t17))->v) = ((((struct o0_float *)0xC05CBB4)->v));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t17 + 0x3C)) = *(struct mv3 *)((t17 + 0x30)); }
            (((struct o88_uint *)(t20))->v) = ((((struct oBC_int *)(a4))->v));
            (((struct o8C_uint *)(t20))->v) = a4;
            (((struct o78_uint *)(t20))->v) = 0x124F;
            (((struct oA0_uint *)(t20))->v) = 0x3C;
            (((struct oA4_uint *)(t20))->v) = 0x3;
            (((struct o54_float *)(t20))->v) = ((((struct o8_float *)0xC05CBB4)->v));
            (((struct o58_float *)(t20))->v) = ((((struct oC_float *)0xC05CBB4)->v));
            (((struct o5C_float *)(t20))->v) = -1.0f;
            t86 = 0x3FB;
            if (a7 != 0) {
                t86 = 0x3FE;
            }
            (((struct o9A_ushort *)(t23))->v) = t86;
            (((struct oA2_ushort *)(t23))->v) = 0x1;
            (((struct oA0_ushort *)(t23))->v) = 0x3;
            (((struct o90_float *)(t23))->v) = 1.0f;
            t102 = 0x90;
        }
    }
    return t102;
}

void FUN_0c03dae4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    register int t0;
    int t1;
    int t2;

    t2 = (((struct o48C_int *)(a4))->v);
    switch (t2) {
    case 20:
        FUN_0c03c420(a4);
        break;
    case 28:
        FUN_0c03c510(a4);
        break;
    case 30:
        FUN_0c03d020(a4);
        break;
    case 29:
        FUN_0c03cfb8(a4);
        break;
    case 41:
        FUN_0c03c592(a4, a5, a6, a7);
        break;
    default:
        if ((t2 != 43) && (t2 != 42)) {
            if (t2 != 44) {
                if (t2 != 45) {
                    if (t2 != 46) {
                        if (t2 != 49) {
                            if (t2 != 51) {
                                if (t2 != 52) {
                                    if ((t2 != 53) && (t2 != 54)) {
                                        if ((t2 != 47) && (t2 != 48)) {
                                            if (t2 != 31) {
                                                FUN_0c03c174(a4);
                                            } else {
                                                FUN_0c03d516(a4);
                                            }
                                        } else {
                                            FUN_0c03d038(a4);
                                        }
                                    } else {
                                        FUN_0c03ce1e(a4);
                                    }
                                } else {
                                    FUN_0c03cc70(a4);
                                }
                            } else {
                                FUN_0c03cb3a(a4);
                            }
                        } else {
                            FUN_0c03c9e0(a4);
                        }
                    } else {
                        FUN_0c03c900(a4);
                    }
                } else {
                    FUN_0c03c75c(a4);
                }
            } else {
                FUN_0c03c70c(a4);
            }
        } else {
            FUN_0c03c65c(a4);
        }
        break;
    }
    t2 = (((struct o560_int *)(a4))->v);
    if ((t2 != 2) && ((t2 != 3) && ((t2 != 4) && ((t2 != 6) && ((t2 != 12) && ((t0 = (((struct o304_int *)(a4))->v), (int)t0 > 0) && (t1 = (((struct o20C_int *)(a4))->v), t1 != 0x200000))))))) {
    } else {
        FUN_0c03611c(a4);
        (((struct o554_uint *)(a4))->v) = 0x0;
    }
    (((struct o5A8_uint *)(a4))->v) = (((((struct o5A8_int *)(a4))->v)) & 0x3);
    (((struct o5A4_uint *)(a4))->v) = (((((struct o5A4_int *)(a4))->v)) & 0x3);
    (((struct o5A0_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) & 0x1);
    (((struct o57C_uint *)(a4))->v) = ((int)((int)((((struct o57C_int *)(a4))->v)) % (int)0x5));
    (((struct o580_uint *)(a4))->v) = (((((struct o580_int *)(a4))->v)) & 0x3);
    (((struct o584_uint *)(a4))->v) = (((((struct o584_int *)(a4))->v)) & 0x3);
    (((struct o578_uint *)(a4))->v) = ((int)((int)((((struct o578_int *)(a4))->v)) % (int)0xA));
    t0 = (((struct o560_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                FUN_0c02dc30(a4);
    return;
            }
            case 2:
            {
                FUN_0c03afe8(a4);
    return;
            }
            case 4:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03aaa2(a4);
    return;
            }
            case 6:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03a834(a4);
    return;
            }
            case 8:
            {
                (((struct o57C_uint *)(a4))->v) = 0x4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 10:
            {
                FUN_0c03a998(a4);
    return;
            }
            case 12:
            {
                FUN_0c03a77a(a4);
    return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                FUN_0c03b40c(a4);
    return;
            }
            case 18:
            {
                FUN_0c03b4da(a4);
    return;
            }
            case 20:
            {
                (((struct o4C8_uint *)(a4))->v) = 0xB;
                return;
            }
            case 22:
            {
                FUN_0c03afe8(a4);
    return;
            }
            case 24:
            {
                FUN_0c03ac0e(a4);
    return;
            }
            default:
            {
                FUN_0c03b568(a4);
    return;
            }
        }
    }
}

int FUN_0c03d83c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    register int t0;
    int t1;
    int t2;

    t2 = (((struct o48C_int *)(a4))->v);
    switch (t2) {
    case 20:
        FUN_0c03c3c0(a4);
        break;
    case 28:
        FUN_0c03c510(a4);
        break;
    case 30:
        FUN_0c03d020(a4);
        break;
    case 29:
        FUN_0c03cfb8(a4);
        break;
    case 41:
        FUN_0c03c592(a4, a5, a6, a7);
        break;
    default:
        if ((t2 != 43) && (t2 != 42)) {
            if (t2 != 44) {
                if (t2 != 45) {
                    if (t2 != 46) {
                        if (t2 != 49) {
                            if (t2 != 51) {
                                if (t2 != 52) {
                                    if ((t2 != 53) && (t2 != 54)) {
                                        if ((t2 != 47) && (t2 != 48)) {
                                            if (t2 != 31) {
                                                FUN_0c03c0e0(a4);
                                            } else {
                                                FUN_0c03d516(a4);
                                            }
                                        } else {
                                            FUN_0c03d038(a4);
                                        }
                                    } else {
                                        FUN_0c03ce1e(a4);
                                    }
                                } else {
                                    FUN_0c03cc70(a4);
                                }
                            } else {
                                FUN_0c03cb3a(a4);
                            }
                        } else {
                            FUN_0c03c9e0(a4);
                        }
                    } else {
                        FUN_0c03c900(a4);
                    }
                } else {
                    FUN_0c03c75c(a4);
                }
            } else {
                FUN_0c03c70c(a4);
            }
        } else {
            FUN_0c03c65c(a4);
        }
        break;
    }
    t2 = (((struct o560_int *)(a4))->v);
    if ((t2 != 2) && ((t2 != 3) && ((t2 != 4) && ((t2 != 6) && ((t2 != 12) && ((t0 = (((struct o304_int *)(a4))->v), (int)t0 > 0) && (t1 = (((struct o20C_int *)(a4))->v), t1 != 0x200000))))))) {
    } else {
        FUN_0c03611c(a4);
        (((struct o554_uint *)(a4))->v) = 0x0;
    }
    (((struct o5A8_uint *)(a4))->v) = (((((struct o5A8_int *)(a4))->v)) & 0x3);
    (((struct o5A4_uint *)(a4))->v) = (((((struct o5A4_int *)(a4))->v)) & 0x3);
    (((struct o5A0_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) & 0x1);
    (((struct o57C_uint *)(a4))->v) = ((int)((int)((((struct o57C_int *)(a4))->v)) % (int)0x5));
    (((struct o580_uint *)(a4))->v) = (((((struct o580_int *)(a4))->v)) & 0x3);
    (((struct o584_uint *)(a4))->v) = (((((struct o584_int *)(a4))->v)) & 0x3);
    (((struct o578_uint *)(a4))->v) = ((int)((int)((((struct o578_int *)(a4))->v)) % (int)0xA));
    t0 = (((struct o560_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c02dc30(a4);
            }
            case 2:
            {
                return FUN_0c03afe8(a4);
            }
            case 4:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                return FUN_0c03aaa2(a4);
            }
            case 6:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                return FUN_0c03a834(a4);
            }
            case 8:
            {
                (((struct o57C_uint *)(a4))->v) = 0x4;
                return FUN_0c03aaa2(a4);
            }
            case 10:
            {
                return FUN_0c03a998(a4);
            }
            case 12:
            {
                return FUN_0c03a77a(a4);
            }
            case 14:
            {
                return FUN_0c03adc4(a4);
            }
            case 16:
            {
                return FUN_0c03b40c(a4);
            }
            case 18:
            {
                return FUN_0c03b4da(a4);
            }
            case 20:
            {
                (((struct o4C8_uint *)(a4))->v) = 0xB;
                return 0x4C8;
            }
            case 22:
            {
                return FUN_0c03afe8(a4);
            }
            case 24:
            {
                return FUN_0c03ac0e(a4);
            }
            default:
            {
                return FUN_0c03b568(a4);
            }
        }
    }
    return t0;
}

void FUN_0c02b984(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    if ((int)((((struct o304_int *)(a4))->v)) < (int)((((struct o308_int *)(a4))->v))) {
        t0 = (((struct o4F0_int *)(a4))->v);
        t1 = ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
        if (((((struct o4D4_int *)(a4))->v)) != 1) {
            if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
                FUN_0c02a220(a4);
                (((struct o4D4_uint *)(a4))->v) = 0x1;
                (((struct o50C_uint *)(a4))->v) = 0x0;
                t0 = (((struct o4F0_int *)(a4))->v);
                ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
            }
            (((struct o50C_uint *)(a4))->v) = 0x1;
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((unsigned int)t0 < (unsigned int)0xE) {
                switch ((t0 << 1)) {
                    case 0:
                    {
                        return;
                    }
                    case 2:
                    {
                        FUN_0c02b8ba(a4);
    return;
                    }
                    case 4:
                    {
                        return;
                    }
                    case 6:
                    {
                        FUN_0c02b8ba(a4);
    return;
                    }
                    case 8:
                    {
                        return;
                    }
                    case 10:
                    {
                        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | 0xC);
                        FUN_0c02a220(a4);
    return;
                    }
                    case 12:
                    {
                        return;
                    }
                    case 14:
                    {
                        (((struct o4F8_uint *)(a4))->v) = 0x8;
                        return;
                    }
                    case 16:
                    {
                        return;
                    }
                    case 18:
                    {
                        (((struct o4F8_uint *)(a4))->v) = 0xA;
                        return;
                    }
                    case 20:
                    {
                        return;
                    }
                    case 22:
                    {
                        FUN_0c02b8ba(a4);
    return;
                    }
                    case 24:
                    {
                        return;
                    }
                    default:
                    {
                        FUN_0c02b8ba(a4);
    return;
                    }
                }
            }
            return;
        }
        return;
    }
    if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
        FUN_0c02a220(a4);
        (((struct o4D4_uint *)(a4))->v) = 0x1;
        (((struct o50C_uint *)(a4))->v) = 0x0;
        t0 = (((struct o4F0_int *)(a4))->v);
        ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
    }
    (((struct o50C_uint *)(a4))->v) = 0x1;
    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02b8ba(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02b8ba(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | 0xC);
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                FUN_0c02b8ba(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02b8ba(a4);
    return;
            }
        }
    }
}

void FUN_0c02e7e4(int a4)
{
    int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = (((struct o4F8_int *)(a4))->v);
        if ((t0 != 6) && (t0 != 7)) {
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((t0 != 8) && (t0 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            (((struct o4F8_uint *)(a4))->v) = 0xA;
            return;
        }
        (((struct o4F8_uint *)(a4))->v) = 0x8;
        return;
    }
    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02e70c(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02e70c(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                FUN_0c02e70c(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02e70c(a4);
    return;
            }
        }
    }
}

void FUN_0c02aacc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o554_uint *)(a4))->v) = 0x2;
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                        t0 = (((struct o4F0_int *)(a4))->v);
                                        ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                                    }
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                FUN_0c02a288(a4);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

void FUN_0c02dfe4(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                FUN_0c02a288(a4);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

void FUN_0c02e8d0(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                FUN_0c02a288(a4);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

void FUN_0c02a640(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                FUN_0c02a288(a4);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

void FUN_0c02aff0(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                FUN_0c02a288(a4);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

void FUN_0c031390(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

void FUN_0c02e2fc(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            t0 = FUN_0c035b26(a4, a5, a6);
                            if (t0 != 0) {
                                t0 = FUN_0c035ce4(a4);
                                if (t0 != 0) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x4;
                                }
                            }
                        }
                    }
                }
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                FUN_0c02a416(a4);
                (((struct o4F8_uint *)(a4))->v) = 0xC;
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

void FUN_0c02b814(int a4, int a5, int a6)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
                t0 = (((struct o538_int *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 10) {
                            if (t0 != 2) {
                                t0 = FUN_0c035b26(a4, a5, a6);
                                if (t0 != 0) {
                                    t0 = FUN_0c035ce4(a4);
                                    if (t0 != 0) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

void FUN_0c02b5a0(int a4)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

void FUN_0c02baac(int a4)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}


void FUN_0c02a84c(int a4)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

void FUN_0c02b2a0(int a4)
{
    register int t0;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
            }
                break;
            case 2:
            {
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                }
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
            }
                break;
            case 12:
            {
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                t0 = FUN_0c02a416(a4);
                if (t0 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
                break;
            default:
            {
            }
                break;
        }
    }
}

int FUN_0c020166(int a4)
{
    int t6;

    (((struct o314_uint *)(a4))->v) = (((((struct o314_int *)(a4))->v)) + 0x1);
    (((struct o390_float *)(a4))->v) = ((((struct oB4_float *)(a4))->v));
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c01db0e(a4, ((((struct oA4_int *)(a4))->v)));
    FUN_0c086920(a4);
    t6 = (((struct o48C_int *)(a4))->v);
    if ((t6 != 52) && (t6 != 54)) {
    } else {
        FUN_0c046442(a4);
    }
    FUN_0c0bbbf4(a4);
    return FUN_0c01cdf2(a4);
}

int FUN_0c04852e(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = (int)((int)(*(int *)0xC246DEC) % (int)0x3);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            return FUN_0c0482a8(a4, a5, a6, a7);
        }
        return FUN_0c0480ec(a4);
    }
    return FUN_0c048070(a4);
}

int FUN_0c04204c(int a4)
{
    register int t0;

    t0 = (((struct o4E4_int *)(a4))->v);
    (((struct o4E4_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        t0 = (((struct o2EC_int *)(a4))->v);
        if ((t0 & 12) != 0) {
            return FUN_0c03f4bc(a4);
        }
        return t0;
    }
    return 0x4E4;
}

int FUN_0c04343c(int a4)
{
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x1;
    (((struct o2C4_uint *)(a4))->v) = 0x522;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x5;
    return 0x4C8;
}

void FUN_0c045900(void)
{
    (((struct o0_uint *)0xC246DE0)->v) = 0x0;
    (((struct o4_uint *)0xC246DE0)->v) = 0x0;
}
